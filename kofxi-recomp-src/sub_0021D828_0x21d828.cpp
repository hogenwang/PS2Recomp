#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021D828
// Address: 0x21d828 - 0x21d8b8
void sub_0021D828_0x21d828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D828_0x21d828");
#endif

    switch (ctx->pc) {
        case 0x21d848u: goto label_21d848;
        case 0x21d860u: goto label_21d860;
        case 0x21d870u: goto label_21d870;
        case 0x21d898u: goto label_21d898;
        default: break;
    }

    ctx->pc = 0x21d828u;

label_21d828:
    // 0x21d828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d82c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d82cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d830: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d834: 0x24841a08  addiu       $a0, $a0, 0x1A08
    ctx->pc = 0x21d834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6664));
    // 0x21d838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d83c: 0x8043e52  j           func_10F948
    ctx->pc = 0x21D83Cu;
    ctx->pc = 0x21D840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D83Cu;
            // 0x21d840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21D844u;
    // 0x21d844: 0x0  nop
    ctx->pc = 0x21d844u;
    // NOP
label_21d848:
    // 0x21d848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d84c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21d84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21d850: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21d850u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21d854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d858: 0xc08760a  jal         func_21D828
    ctx->pc = 0x21D858u;
    SET_GPR_U32(ctx, 31, 0x21D860u);
    ctx->pc = 0x21D85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D858u;
            // 0x21d85c: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D828u;
    goto label_21d828;
    ctx->pc = 0x21D860u;
label_21d860:
    // 0x21d860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d864: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21d864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d868: 0x3e00008  jr          $ra
    ctx->pc = 0x21D868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D868u;
            // 0x21d86c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D870u;
label_21d870:
    // 0x21d870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d874: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21d874u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21d878: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d87c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21d880: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21d880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21d884: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x21d884u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21d888: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21d888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d88c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x21d88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21d890: 0xc08760a  jal         func_21D828
    ctx->pc = 0x21D890u;
    SET_GPR_U32(ctx, 31, 0x21D898u);
    ctx->pc = 0x21D894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D890u;
            // 0x21d894: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D828u;
    goto label_21d828;
    ctx->pc = 0x21D898u;
label_21d898:
    // 0x21d898: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21d898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21d89c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21d89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d8a0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x21d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21d8a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d8a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d8a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d8a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x21D8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D8ACu;
            // 0x21d8b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D8B4u;
    // 0x21d8b4: 0x0  nop
    ctx->pc = 0x21d8b4u;
    // NOP
    ctx->pc = 0x21d8b8u;
}
