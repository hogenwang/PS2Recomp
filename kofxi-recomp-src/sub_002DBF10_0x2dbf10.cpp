#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DBF10
// Address: 0x2dbf10 - 0x2dc028
void sub_002DBF10_0x2dbf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBF10_0x2dbf10");
#endif

    switch (ctx->pc) {
        case 0x2dbf50u: goto label_2dbf50;
        case 0x2dbf64u: goto label_2dbf64;
        case 0x2dc010u: goto label_2dc010;
        default: break;
    }

    ctx->pc = 0x2dbf10u;

    // 0x2dbf10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dbf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dbf14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dbf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dbf18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dbf18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dbf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dbf20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dbf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dbf24: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2dbf24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2dbf28: 0x2463bf70  addiu       $v1, $v1, -0x4090
    ctx->pc = 0x2dbf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950768));
    // 0x2dbf2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dbf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dbf30: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBF30u;
    {
        const bool branch_taken_0x2dbf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbf30) {
            ctx->pc = 0x2DBF50u;
            goto label_2dbf50;
        }
    }
    ctx->pc = 0x2DBF38u;
    // 0x2dbf38: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dbf38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dbf3c: 0x2484bf84  addiu       $a0, $a0, -0x407C
    ctx->pc = 0x2dbf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950788));
    // 0x2dbf40: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2dbf40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dbf44: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2dbf44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2dbf48: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DBF48u;
    SET_GPR_U32(ctx, 31, 0x2DBF50u);
    ctx->pc = 0x2DBF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBF48u;
            // 0x2dbf4c: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF50u; }
        if (ctx->pc != 0x2DBF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF50u; }
        if (ctx->pc != 0x2DBF50u) { return; }
    }
    ctx->pc = 0x2DBF50u;
label_2dbf50:
    // 0x2dbf50: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DBF50u;
    {
        const bool branch_taken_0x2dbf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbf50) {
            ctx->pc = 0x2DBF84u;
            goto label_2dbf84;
        }
    }
    ctx->pc = 0x2DBF58u;
    // 0x2dbf58: 0x84a24d13  lh          $v0, 0x4D13($a1)
    ctx->pc = 0x2dbf58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 19731)));
    // 0x2dbf5c: 0xc708acb  jal         func_1C22B2C
    ctx->pc = 0x2DBF5Cu;
    SET_GPR_U32(ctx, 31, 0x2DBF64u);
    ctx->pc = 0x2DBF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBF5Cu;
            // 0x2dbf60: 0x847dfd4b  lh          $sp, -0x2B5($v1) (Delay Slot)
        SET_GPR_S32(ctx, 29, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294966603)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B2Cu;
    {
        auto targetFn = runtime->lookupFunction(0x1C22B2Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF64u; }
        if (ctx->pc != 0x2DBF64u) { return; }
    }
    ctx->pc = 0x2DBF64u;
label_2dbf64:
    // 0x2dbf64: 0x8c4e0efd  lw          $t6, 0xEFD($v0)
    ctx->pc = 0x2dbf64u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3837)));
    // 0x2dbf68: 0x8ff762bd  lw          $s7, 0x62BD($ra)
    ctx->pc = 0x2dbf68u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 31), 25277)));
    // 0x2dbf6c: 0x870b2443  lh          $t3, 0x2443($t8)
    ctx->pc = 0x2dbf6cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 9283)));
    // 0x2dbf70: 0x0  nop
    ctx->pc = 0x2dbf70u;
    // NOP
    // 0x2dbf74: 0xac9b167d  sw          $k1, 0x167D($a0)
    ctx->pc = 0x2dbf74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5757), GPR_U32(ctx, 27));
    // 0x2dbf78: 0xc712f1f2  lwc1        $f18, -0xE0E($t8)
    ctx->pc = 0x2dbf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294963698)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dbf7c: 0xac9b1641  sw          $k1, 0x1641($a0)
    ctx->pc = 0x2dbf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5697), GPR_U32(ctx, 27));
    // 0x2dbf80: 0x0  nop
    ctx->pc = 0x2dbf80u;
    // NOP
label_2dbf84:
    // 0x2dbf84: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2dbf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2dbf88: 0x8c4498b0  lw          $a0, -0x6750($v0)
    ctx->pc = 0x2dbf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940848)));
    // 0x2dbf8c: 0x185e9c28  .word       0x185E9C28                   # blez        $v0, . + 4 + (-0x63D8 << 2) # 001E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DBF8Cu;
    {
        const bool branch_taken_0x2dbf8c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2DBF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBF8Cu;
            // 0x2dbf90: 0x18765c2a  .word       0x18765C2A                   # blez        $v1, . + 4 + (0x5C2A << 2) # 00160000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2DBF90 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf8c) {
            ctx->pc = 0x2C3030u;
            return;
        }
    }
    ctx->pc = 0x2DBF94u;
    // 0x2dbf94: 0x53ba9fd4  beql        $sp, $k0, . + 4 + (-0x602C << 2)
    ctx->pc = 0x2DBF94u;
    {
        const bool branch_taken_0x2dbf94 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 26));
        if (branch_taken_0x2dbf94) {
            ctx->pc = 0x2DBF98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBF94u;
            // 0x2dbf98: 0x14ee0ca8  bne         $a3, $t6, . + 4 + (0xCA8 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DBF98 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3EE8u;
            return;
        }
    }
    ctx->pc = 0x2DBF9Cu;
    // 0x2dbf9c: 0x3a69fd4  .word       0x03A69FD4                   # dsllv       $s3, $a2, $sp # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dbf9cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) << (GPR_U32(ctx, 29) & 0x3F));
    // 0x2dbfa0: 0x4de0448  .word       0x04DE0448                   # INVALID     $a2, $fp, 0x448 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2dbfa0u;
    // Unhandled REGIMM instruction: 0x1E
    // 0x2dbfa4: 0x45e9c2a  .word       0x045E9C2A                   # INVALID     $v0, $fp, -0x63D6 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2dbfa4u;
    // Unhandled REGIMM instruction: 0x1E
    // 0x2dbfa8: 0x1cdabc2a  .word       0x1CDABC2A                   # bgtz        $a2, . + 4 + (-0x43D6 << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DBFA8u;
    {
        const bool branch_taken_0x2dbfa8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x2DBFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBFA8u;
            // 0x2dbfac: 0x145a0c28  bne         $v0, $k0, . + 4 + (0xC28 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DBFAC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbfa8) {
            ctx->pc = 0x2CB054u;
            return;
        }
    }
    ctx->pc = 0x2DBFB0u;
    // 0x2dbfb0: 0x145a0c28  bne         $v0, $k0, . + 4 + (0xC28 << 2)
    ctx->pc = 0x2DBFB0u;
    {
        const bool branch_taken_0x2dbfb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 26));
        ctx->pc = 0x2DBFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBFB0u;
            // 0x2dbfb4: 0x17b25fd5  bne         $sp, $s2, . + 4 + (0x5FD5 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DBFB4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbfb0) {
            ctx->pc = 0x2DF054u;
            return;
        }
    }
    ctx->pc = 0x2DBFB8u;
    // 0x2dbfb8: 0x80588c29  lb          $t8, -0x73D7($v0)
    ctx->pc = 0x2dbfb8u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294937641)));
    // 0x2dbfbc: 0x50da9c28  beql        $a2, $k0, . + 4 + (-0x63D8 << 2)
    ctx->pc = 0x2DBFBCu;
    {
        const bool branch_taken_0x2dbfbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 26));
        if (branch_taken_0x2dbfbc) {
            ctx->pc = 0x2DBFC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBFBCu;
            // 0x2dbfc0: 0x1000000b  b           . + 4 + (0xB << 2) (Delay Slot)
        // Likely branch instruction at 0x2DBFC0 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3060u;
            return;
        }
    }
    ctx->pc = 0x2DBFC4u;
    // 0x2dbfc4: 0x0  nop
    ctx->pc = 0x2dbfc4u;
    // NOP
    // 0x2dbfc8: 0x26643660  addiu       $a0, $s3, 0x3660
    ctx->pc = 0x2dbfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 13920));
    // 0x2dbfcc: 0xffb9ae02  sd          $t9, -0x51FE($sp)
    ctx->pc = 0x2dbfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4294946306), GPR_U64(ctx, 25));
    // 0x2dbfd0: 0x3951020  add         $v0, $gp, $s5
    ctx->pc = 0x2dbfd0u;
    {     int32_t rs_val = GPR_S32(ctx, 28);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x2dbfd4: 0x255f8208  addiu       $ra, $t2, -0x7DF8
    ctx->pc = 0x2dbfd4u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 10), 4294935048));
    // 0x2dbfd8: 0xdf0954c7  ld          $t1, 0x54C7($t8)
    ctx->pc = 0x2dbfd8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 24), 21703)));
    // 0x2dbfdc: 0x8d17c5d5  lw          $s7, -0x3A2B($t0)
    ctx->pc = 0x2dbfdcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294952405)));
    // 0x2dbfe0: 0xac9b16d7  sw          $k1, 0x16D7($a0)
    ctx->pc = 0x2dbfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5847), GPR_U32(ctx, 27));
    // 0x2dbfe4: 0xc712f1f3  lwc1        $f18, -0xE0D($t8)
    ctx->pc = 0x2dbfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294963699)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dbfe8: 0xac9b16eb  sw          $k1, 0x16EB($a0)
    ctx->pc = 0x2dbfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5867), GPR_U32(ctx, 27));
    // 0x2dbfec: 0x0  nop
    ctx->pc = 0x2dbfecu;
    // NOP
label_2dbff0:
    // 0x2dbff0: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dbff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2dbff4: 0x2442bfe0  addiu       $v0, $v0, -0x4020
    ctx->pc = 0x2dbff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950880));
    // 0x2dbff8: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dbff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dbffc: 0x2484bfc0  addiu       $a0, $a0, -0x4040
    ctx->pc = 0x2dbffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950848));
    // 0x2dc000: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2dc000u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dc004: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2dc004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dc008: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DC008u;
    SET_GPR_U32(ctx, 31, 0x2DC010u);
    ctx->pc = 0x2DC00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC008u;
            // 0x2dc00c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC010u; }
        if (ctx->pc != 0x2DC010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC010u; }
        if (ctx->pc != 0x2DC010u) { return; }
    }
    ctx->pc = 0x2DC010u;
label_2dc010:
    // 0x2dc010: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dc010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dc014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc018: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dc018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dc01c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dc01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc020: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC020u;
            // 0x2dc024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DC028u;
    ctx->pc = 0x2dc028u;
}
