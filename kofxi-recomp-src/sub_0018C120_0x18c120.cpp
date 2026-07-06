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

// Function: sub_0018C120
// Address: 0x18c120 - 0x18c1f0
void sub_0018C120_0x18c120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C120_0x18c120");
#endif

    switch (ctx->pc) {
        case 0x18c180u: goto label_18c180;
        default: break;
    }

    ctx->pc = 0x18c120u;

    // 0x18c120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18c120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18c124: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x18c124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x18c128: 0x22082  srl         $a0, $v0, 2
    ctx->pc = 0x18c128u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x18c12c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18c12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18c130: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18c130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18c134: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18c134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18c138: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18c138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18c13c: 0x2442db57  addiu       $v0, $v0, -0x24A9
    ctx->pc = 0x18c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957911));
    // 0x18c140: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18c140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18c144: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18c148: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18c148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18c14c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18c150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c154: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x18c154u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c158: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x18c158u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x18c15c: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C15Cu;
    {
        const bool branch_taken_0x18c15c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c15c) {
            ctx->pc = 0x18C160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C15Cu;
            // 0x18c160: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C174u;
            goto label_18c174;
        }
    }
    ctx->pc = 0x18C164u;
    // 0x18c164: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18c164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18c168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c16c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x18C16Cu;
    {
        const bool branch_taken_0x18c16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C16Cu;
        // 0x18c170: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c16c) {
            ctx->pc = 0x18C1D8u;
            goto label_18c1d8;
        }
    }
    ctx->pc = 0x18C174u;
label_18c174:
    // 0x18c174: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x18c174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c178: 0xc063808  jal         func_18E020
    ctx->pc = 0x18C178u;
    SET_GPR_U32(ctx, 31, 0x18C180u);
    ctx->pc = 0x18C17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C178u;
    // 0x18c17c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E020u, 0x18C178u, 0x18C180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C180u;
label_18c180:
    // 0x18c180: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c184: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x18C184u;
    {
        const bool branch_taken_0x18c184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c184) {
            ctx->pc = 0x18C188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C184u;
            // 0x18c188: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C1D0u;
            goto label_18c1d0;
        }
    }
    ctx->pc = 0x18C18Cu;
    // 0x18c18c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x18c18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x18c190: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x18c190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x18c194: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x18c194u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x18c198: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x18c198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x18c19c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c19cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c1a0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x18c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18c1a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18c1a8: 0x24420019  addiu       $v0, $v0, 0x19
    ctx->pc = 0x18c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x18c1ac: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x18c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c1b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18c1b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c1b4: 0x0  nop
    ctx->pc = 0x18c1b4u;
    // NOP
    // 0x18c1b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18c1b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18c1bc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18c1bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x18c1c0: 0x0  nop
    ctx->pc = 0x18c1c0u;
    // NOP
    // 0x18c1c4: 0x0  nop
    ctx->pc = 0x18c1c4u;
    // NOP
    // 0x18c1c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18C1C8u;
    {
        const bool branch_taken_0x18c1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c1c8) {
            ctx->pc = 0x18C1D4u;
            goto label_18c1d4;
        }
    }
    ctx->pc = 0x18C1D0u;
label_18c1d0:
    // 0x18c1d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c1d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c1d4:
    // 0x18c1d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18c1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18c1d8:
    // 0x18c1d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c1d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x18C1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C1DCu;
        // 0x18c1e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C1E4u;
    // 0x18c1e4: 0x0  nop
    ctx->pc = 0x18c1e4u;
    // NOP
    // 0x18c1e8: 0x0  nop
    ctx->pc = 0x18c1e8u;
    // NOP
    // 0x18c1ec: 0x0  nop
    ctx->pc = 0x18c1ecu;
    // NOP
    if (ctx->pc == 0x18c1ecu) { ctx->pc = 0x18c1f0u; }
}
