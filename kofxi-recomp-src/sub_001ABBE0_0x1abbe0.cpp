#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ABBE0
// Address: 0x1abbe0 - 0x1abce0
void sub_001ABBE0_0x1abbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABBE0_0x1abbe0");
#endif

    switch (ctx->pc) {
        case 0x1abc34u: goto label_1abc34;
        case 0x1abc4cu: goto label_1abc4c;
        default: break;
    }

    ctx->pc = 0x1abbe0u;

    // 0x1abbe0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1abbe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1abbe4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1abbe4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1abbe8: 0x2ca50004  sltiu       $a1, $a1, 0x4
    ctx->pc = 0x1abbe8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1abbec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1abbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1abbf0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1abbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1abbf4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1abbf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abbf8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1abbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1abbfc: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x1abbfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc00: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1abc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1abc04: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x1abc04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc08: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1abc08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc0c: 0x14a0002a  bnez        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1ABC0Cu;
    {
        const bool branch_taken_0x1abc0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC0Cu;
            // 0x1abc10: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc0c) {
            ctx->pc = 0x1ABCB8u;
            goto label_1abcb8;
        }
    }
    ctx->pc = 0x1ABC14u;
    // 0x1abc14: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x1abc14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1abc18: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1ABC18u;
    {
        const bool branch_taken_0x1abc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abc18) {
            ctx->pc = 0x1ABC1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC18u;
            // 0x1abc1c: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABC58u;
            goto label_1abc58;
        }
    }
    ctx->pc = 0x1ABC20u;
    // 0x1abc20: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1abc20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1abc24: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1abc24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc28: 0x24a57300  addiu       $a1, $a1, 0x7300
    ctx->pc = 0x1abc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29440));
    // 0x1abc2c: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1ABC2Cu;
    SET_GPR_U32(ctx, 31, 0x1ABC34u);
    ctx->pc = 0x1ABC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC2Cu;
            // 0x1abc30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC34u; }
        if (ctx->pc != 0x1ABC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC34u; }
        if (ctx->pc != 0x1ABC34u) { return; }
    }
    ctx->pc = 0x1ABC34u;
label_1abc34:
    // 0x1abc34: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1abc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1abc38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1abc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1abc3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc40: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1abc40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc44: 0xc06abca  jal         func_1AAF28
    ctx->pc = 0x1ABC44u;
    SET_GPR_U32(ctx, 31, 0x1ABC4Cu);
    ctx->pc = 0x1ABC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC44u;
            // 0x1abc48: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AAF28u;
    if (runtime->hasFunction(0x1AAF28u)) {
        auto targetFn = runtime->lookupFunction(0x1AAF28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC4Cu; }
        if (ctx->pc != 0x1ABC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AAF28_0x1aaf28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC4Cu; }
        if (ctx->pc != 0x1ABC4Cu) { return; }
    }
    ctx->pc = 0x1ABC4Cu;
label_1abc4c:
    // 0x1abc4c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1ABC4Cu;
    {
        const bool branch_taken_0x1abc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC4Cu;
            // 0x1abc50: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc4c) {
            ctx->pc = 0x1ABCC8u;
            goto label_1abcc8;
        }
    }
    ctx->pc = 0x1ABC54u;
    // 0x1abc54: 0x0  nop
    ctx->pc = 0x1abc54u;
    // NOP
label_1abc58:
    // 0x1abc58: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1ABC58u;
    {
        const bool branch_taken_0x1abc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abc58) {
            ctx->pc = 0x1ABC5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC58u;
            // 0x1abc5c: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABCBCu;
            goto label_1abcbc;
        }
    }
    ctx->pc = 0x1ABC60u;
    // 0x1abc60: 0x8d6200a0  lw          $v0, 0xA0($t3)
    ctx->pc = 0x1abc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 160)));
    // 0x1abc64: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1ABC64u;
    {
        const bool branch_taken_0x1abc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abc64) {
            ctx->pc = 0x1ABC68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC64u;
            // 0x1abc68: 0x956200a0  lhu         $v0, 0xA0($t3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABCA0u;
            goto label_1abca0;
        }
    }
    ctx->pc = 0x1ABC6Cu;
    // 0x1abc6c: 0x856200a4  lh          $v0, 0xA4($t3)
    ctx->pc = 0x1abc6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 164)));
    // 0x1abc70: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1ABC70u;
    {
        const bool branch_taken_0x1abc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abc70) {
            ctx->pc = 0x1ABC74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC70u;
            // 0x1abc74: 0x956200a0  lhu         $v0, 0xA0($t3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABCA0u;
            goto label_1abca0;
        }
    }
    ctx->pc = 0x1ABC78u;
    // 0x1abc78: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1abc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1abc7c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1abc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1abc80: 0x9443e69c  lhu         $v1, -0x1964($v0)
    ctx->pc = 0x1abc80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960796)));
    // 0x1abc84: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1abc84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1abc88: 0xa56300a0  sh          $v1, 0xA0($t3)
    ctx->pc = 0x1abc88u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x1abc8c: 0x9482e69e  lhu         $v0, -0x1962($a0)
    ctx->pc = 0x1abc8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294960798)));
    // 0x1abc90: 0xa56200a2  sh          $v0, 0xA2($t3)
    ctx->pc = 0x1abc90u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x1abc94: 0x94a3e6a0  lhu         $v1, -0x1960($a1)
    ctx->pc = 0x1abc94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294960800)));
    // 0x1abc98: 0xa56300a4  sh          $v1, 0xA4($t3)
    ctx->pc = 0x1abc98u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 164), (uint16_t)GPR_U32(ctx, 3));
    // 0x1abc9c: 0x956200a0  lhu         $v0, 0xA0($t3)
    ctx->pc = 0x1abc9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 160)));
label_1abca0:
    // 0x1abca0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1abca0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1abca4: 0x956300a2  lhu         $v1, 0xA2($t3)
    ctx->pc = 0x1abca4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 162)));
    // 0x1abca8: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x1abca8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1abcac: 0x956200a4  lhu         $v0, 0xA4($t3)
    ctx->pc = 0x1abcacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 164)));
    // 0x1abcb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1ABCB0u;
    {
        const bool branch_taken_0x1abcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCB0u;
            // 0x1abcb4: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abcb0) {
            ctx->pc = 0x1ABCC4u;
            goto label_1abcc4;
        }
    }
    ctx->pc = 0x1ABCB8u;
label_1abcb8:
    // 0x1abcb8: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x1abcb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_1abcbc:
    // 0x1abcbc: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x1abcbcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1abcc0: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x1abcc0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
label_1abcc4:
    // 0x1abcc4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1abcc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1abcc8:
    // 0x1abcc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1abcc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abccc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1abcccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1abcd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1abcd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abcd4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1abcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1abcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABCD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCD8u;
            // 0x1abcdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABCE0u;
    ctx->pc = 0x1abce0u;
}
