#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002745F8
// Address: 0x2745f8 - 0x274700
void sub_002745F8_0x2745f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002745F8_0x2745f8");
#endif

    switch (ctx->pc) {
        case 0x274640u: goto label_274640;
        case 0x274680u: goto label_274680;
        case 0x274688u: goto label_274688;
        case 0x27468cu: goto label_27468c;
        case 0x27469cu: goto label_27469c;
        case 0x2746a4u: goto label_2746a4;
        case 0x2746a8u: goto label_2746a8;
        case 0x2746e4u: goto label_2746e4;
        default: break;
    }

    ctx->pc = 0x2745f8u;

    // 0x2745f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2745f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2745fc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2745fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x274600: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x274600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x274604: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274608: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x274608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27460c: 0x245131a4  addiu       $s1, $v0, 0x31A4
    ctx->pc = 0x27460cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12708));
    // 0x274610: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x274610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x274614: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x274614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x274618: 0x24634660  addiu       $v1, $v1, 0x4660
    ctx->pc = 0x274618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18016));
    // 0x27461c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274620: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274620u;
    {
        const bool branch_taken_0x274620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274620) {
            ctx->pc = 0x274640u;
            goto label_274640;
        }
    }
    ctx->pc = 0x274628u;
    // 0x274628: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x27462c: 0x24844674  addiu       $a0, $a0, 0x4674
    ctx->pc = 0x27462cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18036));
    // 0x274630: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x274630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x274634: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x274634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x274638: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x274638u;
    SET_GPR_U32(ctx, 31, 0x274640u);
    ctx->pc = 0x27463Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274638u;
            // 0x27463c: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274640u; }
        if (ctx->pc != 0x274640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274640u; }
        if (ctx->pc != 0x274640u) { return; }
    }
    ctx->pc = 0x274640u;
label_274640:
    // 0x274640: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x274640u;
    {
        const bool branch_taken_0x274640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274640) {
            ctx->pc = 0x274674u;
            goto label_274674;
        }
    }
    ctx->pc = 0x274648u;
    // 0x274648: 0x123f820  add         $ra, $t1, $v1
    ctx->pc = 0x274648u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
    // 0x27464c: 0xdff377af  ld          $s3, 0x77AF($ra)
    ctx->pc = 0x27464cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 31), 30639)));
    // 0x274650: 0x86021a33  lh          $v0, 0x1A33($s0)
    ctx->pc = 0x274650u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6707)));
    // 0x274654: 0xa06821c1  sb          $t0, 0x21C1($v1)
    ctx->pc = 0x274654u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8641), (uint8_t)GPR_U32(ctx, 8));
    // 0x274658: 0x8d4ba075  lw          $t3, -0x5F8B($t2)
    ctx->pc = 0x274658u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294942837)));
    // 0x27465c: 0x24a7020  add         $t6, $s2, $t2
    ctx->pc = 0x27465cu;
    {     int32_t rs_val = GPR_S32(ctx, 18);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x274660: 0x0  nop
    ctx->pc = 0x274660u;
    // NOP
    // 0x274664: 0x89e91585  lwl         $t1, 0x1585($t7)
    ctx->pc = 0x274664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 5509); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x274668: 0x0  nop
    ctx->pc = 0x274668u;
    // NOP
    // 0x27466c: 0x89e915a5  lwl         $t1, 0x15A5($t7)
    ctx->pc = 0x27466cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 5541); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x274670: 0x0  nop
    ctx->pc = 0x274670u;
    // NOP
label_274674:
    // 0x274674: 0xbdf8edb7  cache       0x18, -0x1249($t7)
    ctx->pc = 0x274674u;
    // CACHE instruction (ignored)
    // 0x274678: 0x8df0f957  lw          $s0, -0x6A9($t7)
    ctx->pc = 0x274678u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294965591)));
    // 0x27467c: 0x8df07997  lw          $s0, 0x7997($t7)
    ctx->pc = 0x27467cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 31127)));
label_274680:
    // 0x274680: 0xbb9e117  j           func_EE7845C
    ctx->pc = 0x274680u;
    ctx->pc = 0x274684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274680u;
            // 0x274684: 0xd6a7917  jal         func_5A9E45C (Delay Slot)
        // JAL 0x5A9E45C - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0xEE7845Cu;
    {
        auto targetFn = runtime->lookupFunction(0xEE7845Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x274688u;
label_274688:
    // 0x274688: 0x294a6517  slti        $t2, $t2, 0x6517
    ctx->pc = 0x274688u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)25879) ? 1 : 0);
label_27468c:
    // 0x27468c: 0xe1a9eee8  sc          $t1, -0x1118($t5)
    ctx->pc = 0x27468cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294962920); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 9)); SET_GPR_S32(ctx, 9, 1); } else { SET_GPR_S32(ctx, 9, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x274690: 0xb7ae117  j           func_DEB845C
    ctx->pc = 0x274690u;
    ctx->pc = 0x274694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274690u;
            // 0x274694: 0x1000000b  b           . + 4 + (0xB << 2) (Delay Slot)
        // Likely branch instruction at 0x274694 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0xDEB845Cu;
    {
        auto targetFn = runtime->lookupFunction(0xDEB845Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x274698u;
    // 0x274698: 0x0  nop
    ctx->pc = 0x274698u;
    // NOP
label_27469c:
    // 0x27469c: 0xcba1ed0  jal         func_2E87B40
    ctx->pc = 0x27469Cu;
    SET_GPR_U32(ctx, 31, 0x2746A4u);
    ctx->pc = 0x2746A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27469Cu;
            // 0x2746a0: 0xcea15c0  jal         func_3A85700 (Delay Slot)
        // JAL 0x3A85700 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E87B40u;
    {
        auto targetFn = runtime->lookupFunction(0x2E87B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2746A4u; }
        if (ctx->pc != 0x2746A4u) { return; }
    }
    ctx->pc = 0x2746A4u;
label_2746a4:
    // 0x2746a4: 0xa1de9a91  sb          $fp, -0x656F($t6)
    ctx->pc = 0x2746a4u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 4294941329), (uint8_t)GPR_U32(ctx, 30));
label_2746a8:
    // 0x2746a8: 0xa22f4199  sb          $t7, 0x4199($s1)
    ctx->pc = 0x2746a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16793), (uint8_t)GPR_U32(ctx, 15));
    // 0x2746ac: 0xffdfcd22  sd          $ra, -0x32DE($fp)
    ctx->pc = 0x2746acu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 4294954274), GPR_U64(ctx, 31));
    // 0x2746b0: 0xdddde4c7  ld          $sp, -0x1B39($t6)
    ctx->pc = 0x2746b0u;
    SET_GPR_U64(ctx, 29, READ64(ADD32(GPR_U32(ctx, 14), 4294960327)));
    // 0x2746b4: 0x89e58519  lwl         $a1, -0x7AE7($t7)
    ctx->pc = 0x2746b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294935833); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x2746b8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2746b8u;
    // Unhandled SPECIAL instruction: 0x1
    // 0x2746bc: 0x89e58539  lwl         $a1, -0x7AC7($t7)
    ctx->pc = 0x2746bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294935865); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x2746c0: 0x0  nop
    ctx->pc = 0x2746c0u;
    // NOP
label_2746c4:
    // 0x2746c4: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2746c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2746c8: 0x244246b4  addiu       $v0, $v0, 0x46B4
    ctx->pc = 0x2746c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18100));
    // 0x2746cc: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2746ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x2746d0: 0x24844694  addiu       $a0, $a0, 0x4694
    ctx->pc = 0x2746d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18068));
    // 0x2746d4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2746d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2746d8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2746d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2746dc: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x2746DCu;
    SET_GPR_U32(ctx, 31, 0x2746E4u);
    ctx->pc = 0x2746E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2746DCu;
            // 0x2746e0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2746E4u; }
        if (ctx->pc != 0x2746E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2746E4u; }
        if (ctx->pc != 0x2746E4u) { return; }
    }
    ctx->pc = 0x2746E4u;
label_2746e4:
    // 0x2746e4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2746e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2746e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2746e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2746ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2746ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2746f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2746f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2746f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2746F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2746F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2746F4u;
            // 0x2746f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2746FCu;
    // 0x2746fc: 0x0  nop
    ctx->pc = 0x2746fcu;
    // NOP
    ctx->pc = 0x274700u;
}
