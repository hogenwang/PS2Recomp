#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014D0E0
// Address: 0x14d0e0 - 0x14d180
void sub_0014D0E0_0x14d0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D0E0_0x14d0e0");
#endif

    switch (ctx->pc) {
        case 0x14d0f4u: goto label_14d0f4;
        case 0x14d148u: goto label_14d148;
        case 0x14d150u: goto label_14d150;
        default: break;
    }

    ctx->pc = 0x14d0e0u;

    // 0x14d0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d0e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14d0e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d0ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14d0ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d0f0: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x14d0f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_14d0f4:
    // 0x14d0f4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14d0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x14d0f8: 0x62980  sll         $a1, $a2, 6
    ctx->pc = 0x14d0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x14d0fc: 0x24845dc0  addiu       $a0, $a0, 0x5DC0
    ctx->pc = 0x14d0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24000));
    // 0x14d100: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x14d100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x14d104: 0x24030125  addiu       $v1, $zero, 0x125
    ctx->pc = 0x14d104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x14d108: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x14d108u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14d10c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x14d10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x14d110: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x14d110u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x14d114: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x14d114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14d118: 0x8ca44144  lw          $a0, 0x4144($a1)
    ctx->pc = 0x14d118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16708)));
    // 0x14d11c: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x14d11cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x14d120: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x14D120u;
    {
        const bool branch_taken_0x14d120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d120) {
            ctx->pc = 0x14D150u;
            goto label_14d150;
        }
    }
    ctx->pc = 0x14D128u;
    // 0x14d128: 0x24030126  addiu       $v1, $zero, 0x126
    ctx->pc = 0x14d128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x14d12c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14D12Cu;
    {
        const bool branch_taken_0x14d12c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d12c) {
            ctx->pc = 0x14D150u;
            goto label_14d150;
        }
    }
    ctx->pc = 0x14D134u;
    // 0x14d134: 0x2403013e  addiu       $v1, $zero, 0x13E
    ctx->pc = 0x14d134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x14d138: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D138u;
    {
        const bool branch_taken_0x14d138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d138) {
            ctx->pc = 0x14D150u;
            goto label_14d150;
        }
    }
    ctx->pc = 0x14D140u;
    // 0x14d140: 0xc06e4a0  jal         func_1B9280
    ctx->pc = 0x14D140u;
    SET_GPR_U32(ctx, 31, 0x14D148u);
    ctx->pc = 0x14D144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D140u;
            // 0x14d144: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (runtime->hasFunction(0x1B9280u)) {
        auto targetFn = runtime->lookupFunction(0x1B9280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D148u; }
        if (ctx->pc != 0x14D148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9280_0x1b9280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D148u; }
        if (ctx->pc != 0x14D148u) { return; }
    }
    ctx->pc = 0x14D148u;
label_14d148:
    // 0x14d148: 0xc05329c  jal         func_14CA70
    ctx->pc = 0x14D148u;
    SET_GPR_U32(ctx, 31, 0x14D150u);
    ctx->pc = 0x14D14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D148u;
            // 0x14d14c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CA70u;
    if (runtime->hasFunction(0x14CA70u)) {
        auto targetFn = runtime->lookupFunction(0x14CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D150u; }
        if (ctx->pc != 0x14D150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CA70_0x14ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D150u; }
        if (ctx->pc != 0x14D150u) { return; }
    }
    ctx->pc = 0x14D150u;
label_14d150:
    // 0x14d150: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x14d150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14d154: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x14d154u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14d158: 0x2a03000d  slti        $v1, $s0, 0xD
    ctx->pc = 0x14d158u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x14d15c: 0x5460ffe5  bnel        $v1, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x14D15Cu;
    {
        const bool branch_taken_0x14d15c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d15c) {
            ctx->pc = 0x14D160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D15Cu;
            // 0x14d160: 0x320600ff  andi        $a2, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D0F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d0f4;
        }
    }
    ctx->pc = 0x14D164u;
    // 0x14d164: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14d164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14d168: 0xa0605d18  sb          $zero, 0x5D18($v1)
    ctx->pc = 0x14d168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23832), (uint8_t)GPR_U32(ctx, 0));
    // 0x14d16c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d174: 0x3e00008  jr          $ra
    ctx->pc = 0x14D174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D174u;
            // 0x14d178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14D17Cu;
    // 0x14d17c: 0x0  nop
    ctx->pc = 0x14d17cu;
    // NOP
    ctx->pc = 0x14d180u;
}
