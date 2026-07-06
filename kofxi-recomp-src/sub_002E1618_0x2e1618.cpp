#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E1618
// Address: 0x2e1618 - 0x2e1730
void sub_002E1618_0x2e1618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1618_0x2e1618");
#endif

    switch (ctx->pc) {
        case 0x2e166cu: goto label_2e166c;
        case 0x2e16b4u: goto label_2e16b4;
        case 0x2e16d8u: goto label_2e16d8;
        case 0x2e16dcu: goto label_2e16dc;
        case 0x2e1710u: goto label_2e1710;
        default: break;
    }

    ctx->pc = 0x2e1618u;

    // 0x2e1618: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e1618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e161c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e161cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1620: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e1620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1624: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e1624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e1628: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2e1628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e162c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e162cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e1630: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e1630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1634: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e1634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e1638: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e1638u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e163c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e163cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e1640: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e1640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e1644: 0x2463168c  addiu       $v1, $v1, 0x168C
    ctx->pc = 0x2e1644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5772));
    // 0x2e1648: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e1648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e164c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E164Cu;
    {
        const bool branch_taken_0x2e164c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e164c) {
            ctx->pc = 0x2E166Cu;
            goto label_2e166c;
        }
    }
    ctx->pc = 0x2E1654u;
    // 0x2e1654: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e1654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e1658: 0x248416a0  addiu       $a0, $a0, 0x16A0
    ctx->pc = 0x2e1658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5792));
    // 0x2e165c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e165cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e1660: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e1660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e1664: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E1664u;
    SET_GPR_U32(ctx, 31, 0x2E166Cu);
    ctx->pc = 0x2E1668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1664u;
            // 0x2e1668: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E166Cu; }
        if (ctx->pc != 0x2E166Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E166Cu; }
        if (ctx->pc != 0x2E166Cu) { return; }
    }
    ctx->pc = 0x2E166Cu;
label_2e166c:
    // 0x2e166c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E166Cu;
    {
        const bool branch_taken_0x2e166c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e166c) {
            ctx->pc = 0x2E16A0u;
            goto label_2e16a0;
        }
    }
    ctx->pc = 0x2E1674u;
    // 0x2e1674: 0xfecf73aa  sd          $t7, 0x73AA($s6)
    ctx->pc = 0x2e1674u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 29610), GPR_U64(ctx, 15));
    // 0x2e1678: 0x8f938f7d  lw          $s3, -0x7083($gp)
    ctx->pc = 0x2e1678u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938493)));
    // 0x2e167c: 0x855e81e3  lh          $fp, -0x7E1D($t2)
    ctx->pc = 0x2e167cu;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4294935011)));
    // 0x2e1680: 0xa3e70759  sb          $a3, 0x759($ra)
    ctx->pc = 0x2e1680u;
    WRITE8(ADD32(GPR_U32(ctx, 31), 1881), (uint8_t)GPR_U32(ctx, 7));
    // 0x2e1684: 0x8656f6eb  lh          $s6, -0x915($s2)
    ctx->pc = 0x2e1684u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294964971)));
    // 0x2e1688: 0xdd8ab8af  ld          $t2, -0x4751($t4)
    ctx->pc = 0x2e1688u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 12), 4294949039)));
    // 0x2e168c: 0x0  nop
    ctx->pc = 0x2e168cu;
    // NOP
    // 0x2e1690: 0x84bf7c41  lh          $ra, 0x7C41($a1)
    ctx->pc = 0x2e1690u;
    SET_GPR_S32(ctx, 31, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 31809)));
    // 0x2e1694: 0xca0c8610  lwc2        $12, -0x79F0($s0)
    ctx->pc = 0x2e1694u;
    // Unhandled opcode: 0x32
    // 0x2e1698: 0x84bf7c61  lh          $ra, 0x7C61($a1)
    ctx->pc = 0x2e1698u;
    SET_GPR_S32(ctx, 31, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 31841)));
    // 0x2e169c: 0x0  nop
    ctx->pc = 0x2e169cu;
    // NOP
label_2e16a0:
    // 0x2e16a0: 0xcfb66feb  pref        0x16, 0x6FEB($sp)
    ctx->pc = 0x2e16a0u;
    // PREF instruction (ignored)
    // 0x2e16a4: 0x57aacf77  bnel        $sp, $t2, . + 4 + (-0x3089 << 2)
    ctx->pc = 0x2E16A4u;
    {
        const bool branch_taken_0x2e16a4 = (GPR_U64(ctx, 29) != GPR_U64(ctx, 10));
        if (branch_taken_0x2e16a4) {
            ctx->pc = 0x2E16A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E16A4u;
            // 0x2e16a8: 0x572ace57  bnel        $t9, $t2, . + 4 + (-0x31A9 << 2) (Delay Slot)
        // Likely branch instruction at 0x2E16A8 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D5484u;
            return;
        }
    }
    ctx->pc = 0x2E16ACu;
    // 0x2e16ac: 0xc0b8126  jal         func_2E0498
    ctx->pc = 0x2E16ACu;
    SET_GPR_U32(ctx, 31, 0x2E16B4u);
    ctx->pc = 0x2E16B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E16ACu;
            // 0x2e16b0: 0x57aace37  bnel        $sp, $t2, . + 4 + (-0x31C9 << 2) (Delay Slot)
        // Likely branch instruction at 0x2E16B0 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0498u;
    if (runtime->hasFunction(0x2E0498u)) {
        auto targetFn = runtime->lookupFunction(0x2E0498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E16B4u; }
        if (ctx->pc != 0x2E16B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0498_0x2e0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E16B4u; }
        if (ctx->pc != 0x2E16B4u) { return; }
    }
    ctx->pc = 0x2E16B4u;
label_2e16b4:
    // 0x2e16b4: 0xcfba6ffb  pref        0x1A, 0x6FFB($sp)
    ctx->pc = 0x2e16b4u;
    // PREF instruction (ignored)
    // 0x2e16b8: 0xffbe6eff  sd          $fp, 0x6EFF($sp)
    ctx->pc = 0x2e16b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 28415), GPR_U64(ctx, 30));
    // 0x2e16bc: 0x5d364edf  .word       0x5D364EDF                   # bgtzl       $t1, . + 4 + (0x4EDF << 2) # 00160000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E16BCu;
    {
        const bool branch_taken_0x2e16bc = (GPR_S32(ctx, 9) > 0);
        if (branch_taken_0x2e16bc) {
            ctx->pc = 0x2E16C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E16BCu;
            // 0x2e16c0: 0x1000000b  b           . + 4 + (0xB << 2) (Delay Slot)
        // Likely branch instruction at 0x2E16C0 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F523Cu;
            return;
        }
    }
    ctx->pc = 0x2E16C4u;
    // 0x2e16c4: 0x0  nop
    ctx->pc = 0x2e16c4u;
    // NOP
    // 0x2e16c8: 0x84ecba3b  lh          $t4, -0x45C5($a3)
    ctx->pc = 0x2e16c8u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294949435)));
    // 0x2e16cc: 0x8e6d0d15  lw          $t5, 0xD15($s3)
    ctx->pc = 0x2e16ccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3349)));
    // 0x2e16d0: 0xcbf8127  jal         func_2FE049C
    ctx->pc = 0x2E16D0u;
    SET_GPR_U32(ctx, 31, 0x2E16D8u);
    ctx->pc = 0x2E16D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E16D0u;
            // 0x2e16d4: 0xc8a4e5f  jal         func_229397C (Delay Slot)
        // JAL 0x229397C - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE049Cu;
    {
        auto targetFn = runtime->lookupFunction(0x2FE049Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E16D8u; }
        if (ctx->pc != 0x2E16D8u) { return; }
    }
    ctx->pc = 0x2E16D8u;
label_2e16d8:
    // 0x2e16d8: 0xdd94904f  ld          $s4, -0x6FB1($t4)
    ctx->pc = 0x2e16d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 12), 4294938703)));
label_2e16dc:
    // 0x2e16dc: 0xa234a971  sb          $s4, -0x568F($s1)
    ctx->pc = 0x2e16dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294945137), (uint8_t)GPR_U32(ctx, 20));
    // 0x2e16e0: 0x84b14c7f  lh          $s1, 0x4C7F($a1)
    ctx->pc = 0x2e16e0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 19583)));
    // 0x2e16e4: 0xca0c8611  lwc2        $12, -0x79EF($s0)
    ctx->pc = 0x2e16e4u;
    // Unhandled opcode: 0x32
    // 0x2e16e8: 0x84b14c5f  lh          $s1, 0x4C5F($a1)
    ctx->pc = 0x2e16e8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 19551)));
    // 0x2e16ec: 0x0  nop
    ctx->pc = 0x2e16ecu;
    // NOP
label_2e16f0:
    // 0x2e16f0: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e16f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e16f4: 0x244216e0  addiu       $v0, $v0, 0x16E0
    ctx->pc = 0x2e16f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5856));
    // 0x2e16f8: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e16f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e16fc: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x2e16fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
    // 0x2e1700: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2e1700u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e1704: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e1704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e1708: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E1708u;
    SET_GPR_U32(ctx, 31, 0x2E1710u);
    ctx->pc = 0x2E170Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1708u;
            // 0x2e170c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1710u; }
        if (ctx->pc != 0x2E1710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1710u; }
        if (ctx->pc != 0x2E1710u) { return; }
    }
    ctx->pc = 0x2E1710u;
label_2e1710:
    // 0x2e1710: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e1710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1718: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e1718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e171c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e171cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1720: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e1720u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e1724: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e1724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1728: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E172Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1728u;
            // 0x2e172c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E1730u;
    ctx->pc = 0x2e1730u;
}
