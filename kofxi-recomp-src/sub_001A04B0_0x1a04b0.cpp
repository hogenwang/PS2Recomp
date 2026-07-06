#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A04B0
// Address: 0x1a04b0 - 0x1a0530
void sub_001A04B0_0x1a04b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A04B0_0x1a04b0");
#endif

    switch (ctx->pc) {
        case 0x1a04c0u: goto label_1a04c0;
        case 0x1a04d0u: goto label_1a04d0;
        case 0x1a04d8u: goto label_1a04d8;
        case 0x1a0524u: goto label_1a0524;
        default: break;
    }

    ctx->pc = 0x1a04b0u;

    // 0x1a04b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a04b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a04b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a04b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a04b8: 0xc067d80  jal         func_19F600
    ctx->pc = 0x1A04B8u;
    SET_GPR_U32(ctx, 31, 0x1A04C0u);
    ctx->pc = 0x19F600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F600u, 0x1A04B8u, 0x1A04C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A04C0u;
label_1a04c0:
    // 0x1a04c0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a04c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a04c4: 0x8c64da28  lw          $a0, -0x25D8($v1)
    ctx->pc = 0x1a04c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957608)));
    // 0x1a04c8: 0xc067d7c  jal         func_19F5F0
    ctx->pc = 0x1A04C8u;
    SET_GPR_U32(ctx, 31, 0x1A04D0u);
    ctx->pc = 0x1A04CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A04C8u;
    // 0x1a04cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F5F0u, 0x1A04C8u, 0x1A04D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A04D0u;
label_1a04d0:
    // 0x1a04d0: 0xc067d74  jal         func_19F5D0
    ctx->pc = 0x1A04D0u;
    SET_GPR_U32(ctx, 31, 0x1A04D8u);
    ctx->pc = 0x1A04D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A04D0u;
    // 0x1a04d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F5D0u, 0x1A04D0u, 0x1A04D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A04D8u;
label_1a04d8:
    // 0x1a04d8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A04D8u;
    {
        const bool branch_taken_0x1a04d8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a04d8) {
            ctx->pc = 0x1A04DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A04D8u;
            // 0x1a04dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A04ECu;
            goto label_1a04ec;
        }
    }
    ctx->pc = 0x1A04E0u;
    // 0x1a04e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a04e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a04e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A04E4u;
    {
        const bool branch_taken_0x1a04e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04E4u;
        // 0x1a04e8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a04e4) {
            ctx->pc = 0x1A0504u;
            goto label_1a0504;
        }
    }
    ctx->pc = 0x1A04ECu;
label_1a04ec:
    // 0x1a04ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a04ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a04f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a04f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a04f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a04f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a04f8: 0x0  nop
    ctx->pc = 0x1a04f8u;
    // NOP
    // 0x1a04fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a04fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a0500: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a0500u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a0504:
    // 0x1a0504: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1a0504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1a0508: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a0508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a050c: 0x0  nop
    ctx->pc = 0x1a050cu;
    // NOP
    // 0x1a0510: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1a0510u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x1a0514: 0x0  nop
    ctx->pc = 0x1a0514u;
    // NOP
    // 0x1a0518: 0x0  nop
    ctx->pc = 0x1a0518u;
    // NOP
    // 0x1a051c: 0xc048930  jal         func_1224C0
    ctx->pc = 0x1A051Cu;
    SET_GPR_U32(ctx, 31, 0x1A0524u);
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x1A051Cu, 0x1A0524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0524u;
label_1a0524:
    // 0x1a0524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0528: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0528u;
        // 0x1a052c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0530u;
}
