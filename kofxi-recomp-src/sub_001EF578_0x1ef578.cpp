#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EF578
// Address: 0x1ef578 - 0x1ef628
void sub_001EF578_0x1ef578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF578_0x1ef578");
#endif

    switch (ctx->pc) {
        case 0x1ef58cu: goto label_1ef58c;
        default: break;
    }

    ctx->pc = 0x1ef578u;

    // 0x1ef578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ef578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ef57c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ef57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ef580: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ef580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ef584: 0xc07bebc  jal         func_1EFAF0
    ctx->pc = 0x1EF584u;
    SET_GPR_U32(ctx, 31, 0x1EF58Cu);
    ctx->pc = 0x1EF588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF584u;
            // 0x1ef588: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFAF0u;
    if (runtime->hasFunction(0x1EFAF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EFAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF58Cu; }
        if (ctx->pc != 0x1EF58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFAF0_0x1efaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF58Cu; }
        if (ctx->pc != 0x1EF58Cu) { return; }
    }
    ctx->pc = 0x1EF58Cu;
label_1ef58c:
    // 0x1ef58c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ef58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef590: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ef590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef594: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x1ef594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x1ef598: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1EF598u;
    {
        const bool branch_taken_0x1ef598 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF598u;
            // 0x1ef59c: 0x26070d88  addiu       $a3, $s0, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef598) {
            ctx->pc = 0x1EF618u;
            goto label_1ef618;
        }
    }
    ctx->pc = 0x1EF5A0u;
    // 0x1ef5a0: 0x8e061fd4  lw          $a2, 0x1FD4($s0)
    ctx->pc = 0x1ef5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8148)));
    // 0x1ef5a4: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x1ef5a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1ef5a8: 0x1082001b  beq         $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1EF5A8u;
    {
        const bool branch_taken_0x1ef5a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EF5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF5A8u;
            // 0x1ef5ac: 0x2608090c  addiu       $t0, $s0, 0x90C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 2316));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef5a8) {
            ctx->pc = 0x1EF618u;
            goto label_1ef618;
        }
    }
    ctx->pc = 0x1EF5B0u;
    // 0x1ef5b0: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x1ef5b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1ef5b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ef5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ef5b8: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x1ef5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x1ef5bc: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1EF5BCu;
    {
        const bool branch_taken_0x1ef5bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF5BCu;
            // 0x1ef5c0: 0xfce20158  sd          $v0, 0x158($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 344), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef5bc) {
            ctx->pc = 0x1EF618u;
            goto label_1ef618;
        }
    }
    ctx->pc = 0x1EF5C4u;
    // 0x1ef5c4: 0x8d030018  lw          $v1, 0x18($t0)
    ctx->pc = 0x1ef5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x1ef5c8: 0xdce40150  ld          $a0, 0x150($a3)
    ctx->pc = 0x1ef5c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x1ef5cc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ef5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ef5d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ef5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ef5d4: 0xfca40018  sd          $a0, 0x18($a1)
    ctx->pc = 0x1ef5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 4));
    // 0x1ef5d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ef5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ef5dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ef5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ef5e0: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x1ef5e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1ef5e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ef5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ef5e8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1ef5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1ef5ec: 0xfca30020  sd          $v1, 0x20($a1)
    ctx->pc = 0x1ef5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
    // 0x1ef5f0: 0x8d04001c  lw          $a0, 0x1C($t0)
    ctx->pc = 0x1ef5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x1ef5f4: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1ef5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1ef5f8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1ef5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1ef5fc: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1ef5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x1ef600: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1ef600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ef604: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x1ef604u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x1ef608: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x1ef608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1ef60c: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x1ef60cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x1ef610: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x1ef610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1ef614: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x1ef614u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_1ef618:
    // 0x1ef618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef61c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ef61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef620: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF620u;
            // 0x1ef624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EF628u;
    ctx->pc = 0x1ef628u;
}
