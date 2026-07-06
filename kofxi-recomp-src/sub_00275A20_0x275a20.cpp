#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00275A20
// Address: 0x275a20 - 0x275b38
void sub_00275A20_0x275a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275A20_0x275a20");
#endif

    switch (ctx->pc) {
        case 0x275a64u: goto label_275a64;
        case 0x275a88u: goto label_275a88;
        case 0x275ac4u: goto label_275ac4;
        case 0x275ad4u: goto label_275ad4;
        case 0x275ae0u: goto label_275ae0;
        case 0x275b1cu: goto label_275b1c;
        default: break;
    }

    ctx->pc = 0x275a20u;

    // 0x275a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x275a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x275a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x275a28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x275a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x275a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x275a30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x275a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x275a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x275a38: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x275a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x275a3c: 0x24635a84  addiu       $v1, $v1, 0x5A84
    ctx->pc = 0x275a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23172));
    // 0x275a40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x275a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275a44: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x275A44u;
    {
        const bool branch_taken_0x275a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275a44) {
            ctx->pc = 0x275A64u;
            goto label_275a64;
        }
    }
    ctx->pc = 0x275A4Cu;
    // 0x275a4c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x275a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x275a50: 0x24845a98  addiu       $a0, $a0, 0x5A98
    ctx->pc = 0x275a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23192));
    // 0x275a54: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x275a54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x275a58: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x275a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x275a5c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x275A5Cu;
    SET_GPR_U32(ctx, 31, 0x275A64u);
    ctx->pc = 0x275A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275A5Cu;
            // 0x275a60: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A64u; }
        if (ctx->pc != 0x275A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A64u; }
        if (ctx->pc != 0x275A64u) { return; }
    }
    ctx->pc = 0x275A64u;
label_275a64:
    // 0x275a64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x275A64u;
    {
        const bool branch_taken_0x275a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275a64) {
            ctx->pc = 0x275A98u;
            goto label_275a98;
        }
    }
    ctx->pc = 0x275A6Cu;
    // 0x275a6c: 0xffcbeb12  sd          $t3, -0x14EE($fp)
    ctx->pc = 0x275a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 4294961938), GPR_U64(ctx, 11));
    // 0x275a70: 0x26640448  addiu       $a0, $s3, 0x448
    ctx->pc = 0x275a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1096));
    // 0x275a74: 0x86d0f03b  lh          $s0, -0xFC5($s6)
    ctx->pc = 0x275a74u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4294963259)));
    // 0x275a78: 0x961820  add         $v1, $a0, $s6
    ctx->pc = 0x275a78u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x275a7c: 0xfee2339a  sd          $v0, 0x339A($s7)
    ctx->pc = 0x275a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 13210), GPR_U64(ctx, 2));
    // 0x275a80: 0xc477092  jal         func_11DC248
    ctx->pc = 0x275A80u;
    SET_GPR_U32(ctx, 31, 0x275A88u);
    ctx->pc = 0x11DC248u;
    {
        auto targetFn = runtime->lookupFunction(0x11DC248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A88u; }
        if (ctx->pc != 0x275A88u) { return; }
    }
    ctx->pc = 0x275A88u;
label_275a88:
    // 0x275a88: 0x44c240d7  .word       0x44C240D7                   # ctc1        $v0, $8 # 000000D7 <InstrIdType: R5900_COP1>
    ctx->pc = 0x275a88u;
    // CTC1 to FCR8 ignored
    // 0x275a8c: 0x0  nop
    ctx->pc = 0x275a8cu;
    // NOP
    // 0x275a90: 0x44c240e3  .word       0x44C240E3                   # ctc1        $v0, $8 # 000000E3 <InstrIdType: R5900_COP1>
    ctx->pc = 0x275a90u;
    // CTC1 to FCR8 ignored
    // 0x275a94: 0x0  nop
    ctx->pc = 0x275a94u;
    // NOP
label_275a98:
    // 0x275a98: 0xa86ba037  swl         $t3, -0x5FC9($v1)
    ctx->pc = 0x275a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294942775); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x275a9c: 0xa86bbc07  swl         $t3, -0x43F9($v1)
    ctx->pc = 0x275a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294949895); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x275aa0: 0xa923a817  swl         $v1, -0x57E9($t1)
    ctx->pc = 0x275aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294944791); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x275aa4: 0xe87ba831  swc2        $27, -0x57CF($v1)
    ctx->pc = 0x275aa4u;
    // Unhandled opcode: 0x3A
    // 0x275aa8: 0x887368a1  lwl         $s3, 0x68A1($v1)
    ctx->pc = 0x275aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26785); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 19) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 19, (int32_t)merged); }
    // 0x275aac: 0x8873a815  lwl         $s3, -0x57EB($v1)
    ctx->pc = 0x275aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294944789); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 19) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 19, (int32_t)merged); }
    // 0x275ab0: 0x88fbf091  lwl         $k1, -0xF6F($a3)
    ctx->pc = 0x275ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294963345); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 27) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 27, (int32_t)merged); }
    // 0x275ab4: 0x8af33091  lwl         $s3, 0x3091($s7)
    ctx->pc = 0x275ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 12433); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 19) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 19, (int32_t)merged); }
    // 0x275ab8: 0xc973a417  lwc2        $19, -0x5BE9($t3)
    ctx->pc = 0x275ab8u;
    // Unhandled opcode: 0x32
    // 0x275abc: 0xb63b011  j           func_D8EC044
    ctx->pc = 0x275ABCu;
    ctx->pc = 0x275AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275ABCu;
            // 0x275ac0: 0x8b33e8bd  lwl         $s3, -0x1743($t9) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 25), 4294961341); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 19) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 19, (int32_t)merged); }
        ctx->in_delay_slot = false;
    ctx->pc = 0xD8EC044u;
    {
        auto targetFn = runtime->lookupFunction(0xD8EC044u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x275AC4u;
label_275ac4:
    // 0x275ac4: 0xd5604bfd  ldc1        $f0, 0x4BFD($t3)
    ctx->pc = 0x275ac4u;
    // Unhandled opcode: 0x35
    // 0x275ac8: 0xa73a417  j           func_9CE905C
    ctx->pc = 0x275AC8u;
    ctx->pc = 0x275ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275AC8u;
            // 0x275acc: 0x1000000b  b           . + 4 + (0xB << 2) (Delay Slot)
        // Likely branch instruction at 0x275ACC - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x9CE905Cu;
    {
        auto targetFn = runtime->lookupFunction(0x9CE905Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x275AD0u;
    // 0x275ad0: 0x0  nop
    ctx->pc = 0x275ad0u;
    // NOP
label_275ad4:
    // 0x275ad4: 0x2574f458  addiu       $s4, $t3, -0xBA8
    ctx->pc = 0x275ad4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 11), 4294964312));
    // 0x275ad8: 0xcbfead9  jal         func_2FFAB64
    ctx->pc = 0x275AD8u;
    SET_GPR_U32(ctx, 31, 0x275AE0u);
    ctx->pc = 0x275ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275AD8u;
            // 0x275adc: 0xdce8b607  ld          $t0, -0x49F9($a3) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 4294948359)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FFAB64u;
    {
        auto targetFn = runtime->lookupFunction(0x2FFAB64u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275AE0u; }
        if (ctx->pc != 0x275AE0u) { return; }
    }
    ctx->pc = 0x275AE0u;
label_275ae0:
    // 0x275ae0: 0xfee55092  sd          $a1, 0x5092($s7)
    ctx->pc = 0x275ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 20626), GPR_U64(ctx, 5));
    // 0x275ae4: 0x849fcd4b  lh          $ra, -0x32B5($a0)
    ctx->pc = 0x275ae4u;
    SET_GPR_S32(ctx, 31, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294954315)));
    // 0x275ae8: 0x86de9a2b  lh          $fp, -0x65D5($s6)
    ctx->pc = 0x275ae8u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4294941227)));
    // 0x275aec: 0x44c27d04  .word       0x44C27D04                   # ctc1        $v0, $15 # 00000504 <InstrIdType: R5900_COP1>
    ctx->pc = 0x275aecu;
    // CTC1 to FCR15 ignored
    // 0x275af0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275af0u;
    // Unhandled SPECIAL instruction: 0x1
    // 0x275af4: 0x44c27d30  .word       0x44C27D30                   # ctc1        $v0, $15 # 00000530 <InstrIdType: R5900_COP1>
    ctx->pc = 0x275af4u;
    // CTC1 to FCR15 ignored
    // 0x275af8: 0x0  nop
    ctx->pc = 0x275af8u;
    // NOP
label_275afc:
    // 0x275afc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x275afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x275b00: 0x24425aec  addiu       $v0, $v0, 0x5AEC
    ctx->pc = 0x275b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23276));
    // 0x275b04: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x275b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x275b08: 0x24845acc  addiu       $a0, $a0, 0x5ACC
    ctx->pc = 0x275b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23244));
    // 0x275b0c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x275b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x275b10: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x275b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x275b14: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x275B14u;
    SET_GPR_U32(ctx, 31, 0x275B1Cu);
    ctx->pc = 0x275B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275B14u;
            // 0x275b18: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275B1Cu; }
        if (ctx->pc != 0x275B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275B1Cu; }
        if (ctx->pc != 0x275B1Cu) { return; }
    }
    ctx->pc = 0x275B1Cu;
label_275b1c:
    // 0x275b1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x275b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x275b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x275b24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x275b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275b28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x275b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x275B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275B2Cu;
            // 0x275b30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275B34u;
    // 0x275b34: 0x0  nop
    ctx->pc = 0x275b34u;
    // NOP
    ctx->pc = 0x275b38u;
}
