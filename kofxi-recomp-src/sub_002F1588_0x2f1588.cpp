#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1588
// Address: 0x2f1588 - 0x2f1618
void sub_002F1588_0x2f1588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1588_0x2f1588");
#endif

    switch (ctx->pc) {
        case 0x2f15acu: goto label_2f15ac;
        case 0x2f15f0u: goto label_2f15f0;
        case 0x2f1600u: goto label_2f1600;
        default: break;
    }

    ctx->pc = 0x2f1588u;

    // 0x2f1588: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f1588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f158c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2f158cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f1590: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f1590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f1594: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f1594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1598: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2f1598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2f159c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f159cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2f15a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f15a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f15a4: 0xc0bc526  jal         func_2F1498
    ctx->pc = 0x2F15A4u;
    SET_GPR_U32(ctx, 31, 0x2F15ACu);
    ctx->pc = 0x2F15A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F15A4u;
            // 0x2f15a8: 0x24056010  addiu       $a1, $zero, 0x6010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1498u;
    if (runtime->hasFunction(0x2F1498u)) {
        auto targetFn = runtime->lookupFunction(0x2F1498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F15ACu; }
        if (ctx->pc != 0x2F15ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1498_0x2f1498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F15ACu; }
        if (ctx->pc != 0x2F15ACu) { return; }
    }
    ctx->pc = 0x2F15ACu;
label_2f15ac:
    // 0x2f15ac: 0x93af0000  lbu         $t7, 0x0($sp)
    ctx->pc = 0x2f15acu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f15b0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2f15b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f15b4: 0x93ae0002  lbu         $t6, 0x2($sp)
    ctx->pc = 0x2f15b4u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2f15b8: 0x93ad0001  lbu         $t5, 0x1($sp)
    ctx->pc = 0x2f15b8u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2f15bc: 0xf7e00  sll         $t7, $t7, 24
    ctx->pc = 0x2f15bcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 24));
    // 0x2f15c0: 0x93ac0003  lbu         $t4, 0x3($sp)
    ctx->pc = 0x2f15c0u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x2f15c4: 0xe7200  sll         $t6, $t6, 8
    ctx->pc = 0x2f15c4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 8));
    // 0x2f15c8: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x2f15c8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x2f15cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f15ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f15d0: 0x1ec7825  or          $t7, $t7, $t4
    ctx->pc = 0x2f15d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x2f15d4: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x2f15d4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x2f15d8: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x2f15d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x2f15dc: 0xae0f000c  sw          $t7, 0xC($s0)
    ctx->pc = 0x2f15dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 15));
    // 0x2f15e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f15e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f15e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F15E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F15E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F15E4u;
            // 0x2f15e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F15ECu;
    // 0x2f15ec: 0x0  nop
    ctx->pc = 0x2f15ecu;
    // NOP
label_2f15f0:
    // 0x2f15f0: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2f15f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2f15f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f15f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f15f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F15F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F15FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F15F8u;
            // 0x2f15fc: 0xade4f04c  sw          $a0, -0xFB4($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294963276), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1600u;
label_2f1600:
    // 0x2f1600: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2f1600u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2f1604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f1604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1608: 0x25efeca8  addiu       $t7, $t7, -0x1358
    ctx->pc = 0x2f1608u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2f160c: 0xa1e503a9  sb          $a1, 0x3A9($t7)
    ctx->pc = 0x2f160cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 937), (uint8_t)GPR_U32(ctx, 5));
    // 0x2f1610: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1610u;
            // 0x2f1614: 0xa1e403a8  sb          $a0, 0x3A8($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 936), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1618u;
    ctx->pc = 0x2f1618u;
}
