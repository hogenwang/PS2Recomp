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

// Function: sub_0011D378
// Address: 0x11d378 - 0x11d3f0
void sub_0011D378_0x11d378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D378_0x11d378");
#endif

    switch (ctx->pc) {
        case 0x11d3c8u: goto label_11d3c8;
        case 0x11d3d8u: goto label_11d3d8;
        default: break;
    }

    ctx->pc = 0x11d378u;

    // 0x11d378: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x11d378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d37c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x11d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x11d380: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x11d380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11d384: 0x70e31818  mult1       $v1, $a3, $v1
    ctx->pc = 0x11d384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11d388: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x11d388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11d38c: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11d38cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11d390: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11d390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11d394: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x11d394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x11d398: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11d398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11d39c: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x11d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x11d3a0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11d3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d3a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11d3a8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x11d3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11d3ac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D3ACu;
    {
        const bool branch_taken_0x11d3ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3ACu;
        // 0x11d3b0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3ac) {
            ctx->pc = 0x11D3BCu;
            goto label_11d3bc;
        }
    }
    ctx->pc = 0x11D3B4u;
    // 0x11d3b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11D3B4u;
    {
        const bool branch_taken_0x11d3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3B4u;
        // 0x11d3b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3b4) {
            ctx->pc = 0x11D3DCu;
            goto label_11d3dc;
        }
    }
    ctx->pc = 0x11D3BCu;
label_11d3bc:
    // 0x11d3bc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x11d3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3c0: 0xc047472  jal         func_11D1C8
    ctx->pc = 0x11D3C0u;
    SET_GPR_U32(ctx, 31, 0x11D3C8u);
    ctx->pc = 0x11D3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3C0u;
    // 0x11d3c4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1C8u, 0x11D3C0u, 0x11D3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3C8u;
label_11d3c8:
    // 0x11d3c8: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x11d3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11d3cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3d0: 0xc049c48  jal         func_127120
    ctx->pc = 0x11D3D0u;
    SET_GPR_U32(ctx, 31, 0x11D3D8u);
    ctx->pc = 0x11D3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3D0u;
    // 0x11d3d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x11D3D0u, 0x11D3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3D8u;
label_11d3d8:
    // 0x11d3d8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x11d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_11d3dc:
    // 0x11d3dc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11d3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11d3e0: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x11d3e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11d3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x11D3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3E4u;
        // 0x11d3e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D3ECu;
    // 0x11d3ec: 0x0  nop
    ctx->pc = 0x11d3ecu;
    // NOP
}
