#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB0C8
// Address: 0x2db0c8 - 0x2db298
void sub_002DB0C8_0x2db0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB0C8_0x2db0c8");
#endif

    switch (ctx->pc) {
        case 0x2db100u: goto label_2db100;
        case 0x2db118u: goto label_2db118;
        case 0x2db11cu: goto label_2db11c;
        case 0x2db148u: goto label_2db148;
        case 0x2db198u: goto label_2db198;
        case 0x2db1b0u: goto label_2db1b0;
        case 0x2db1e8u: goto label_2db1e8;
        case 0x2db280u: goto label_2db280;
        default: break;
    }

    ctx->pc = 0x2db0c8u;

    // 0x2db0c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2db0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2db0cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2db0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2db0d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2db0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2db0d4: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2db0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2db0d8: 0x2463b120  addiu       $v1, $v1, -0x4EE0
    ctx->pc = 0x2db0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947104));
    // 0x2db0dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2db0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db0e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB0E0u;
    {
        const bool branch_taken_0x2db0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db0e0) {
            ctx->pc = 0x2DB100u;
            goto label_2db100;
        }
    }
    ctx->pc = 0x2DB0E8u;
    // 0x2db0e8: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2db0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2db0ec: 0x2484b134  addiu       $a0, $a0, -0x4ECC
    ctx->pc = 0x2db0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947124));
    // 0x2db0f0: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2db0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db0f4: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2db0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2db0f8: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DB0F8u;
    SET_GPR_U32(ctx, 31, 0x2DB100u);
    ctx->pc = 0x2DB0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB0F8u;
            // 0x2db0fc: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB100u; }
        if (ctx->pc != 0x2DB100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB100u; }
        if (ctx->pc != 0x2DB100u) { return; }
    }
    ctx->pc = 0x2DB100u;
label_2db100:
    // 0x2db100: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DB100u;
    {
        const bool branch_taken_0x2db100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db100) {
            ctx->pc = 0x2DB134u;
            goto label_2db134;
        }
    }
    ctx->pc = 0x2DB108u;
    // 0x2db108: 0xde4a6ea7  ld          $t2, 0x6EA7($s2)
    ctx->pc = 0x2db108u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 18), 28327)));
    // 0x2db10c: 0xfe4739c2  sd          $a3, 0x39C2($s2)
    ctx->pc = 0x2db10cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 14786), GPR_U64(ctx, 7));
    // 0x2db110: 0xce623de  jal         func_3988F78
    ctx->pc = 0x2DB110u;
    SET_GPR_U32(ctx, 31, 0x2DB118u);
    ctx->pc = 0x2DB114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB110u;
            // 0x2db114: 0xc6c355a  jal         func_1B0D568 (Delay Slot)
        // JAL 0x1B0D568 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x3988F78u;
    {
        auto targetFn = runtime->lookupFunction(0x3988F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB118u; }
        if (ctx->pc != 0x2DB118u) { return; }
    }
    ctx->pc = 0x2DB118u;
label_2db118:
    // 0x2db118: 0x8dd0740d  lw          $s0, 0x740D($t6)
    ctx->pc = 0x2db118u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 29709)));
label_2db11c:
    // 0x2db11c: 0x1233020  add         $a2, $t1, $v1
    ctx->pc = 0x2db11cu;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x2db120: 0x0  nop
    ctx->pc = 0x2db120u;
    // NOP
    // 0x2db124: 0xf2d27ebe  scd         $s2, 0x7EBE($s6)
    ctx->pc = 0x2db124u;
    // Unhandled opcode: 0x3C
    // 0x2db128: 0xc712dca2  lwc1        $f18, -0x235E($t8)
    ctx->pc = 0x2db128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294958242)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2db12c: 0xf2d27eaa  scd         $s2, 0x7EAA($s6)
    ctx->pc = 0x2db12cu;
    // Unhandled opcode: 0x3C
    // 0x2db130: 0x0  nop
    ctx->pc = 0x2db130u;
    // NOP
label_2db134:
    // 0x2db134: 0xccaa4331  pref        0x0A, 0x4331($a1)
    ctx->pc = 0x2db134u;
    // PREF instruction (ignored)
    // 0x2db138: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2db138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2db13c: 0x8c6298b0  lw          $v0, -0x6750($v1)
    ctx->pc = 0x2db13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940848)));
    // 0x2db140: 0x995ccc0  j           func_6573300
    ctx->pc = 0x2DB140u;
    ctx->pc = 0x2DB144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB140u;
            // 0x2db144: 0x8d9564d3  lw          $s5, 0x64D3($t4) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 25811)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x6573300u;
    {
        auto targetFn = runtime->lookupFunction(0x6573300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2DB148u;
label_2db148:
    // 0x2db148: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DB148u;
    {
        const bool branch_taken_0x2db148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db148) {
            ctx->pc = 0x2DB178u;
            goto label_2db178;
        }
    }
    ctx->pc = 0x2DB150u;
    // 0x2db150: 0xfe634e12  sd          $v1, 0x4E12($s3)
    ctx->pc = 0x2db150u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 19986), GPR_U64(ctx, 3));
    // 0x2db154: 0x2174820  add         $t1, $s0, $s7
    ctx->pc = 0x2db154u;
    {     int32_t rs_val = GPR_S32(ctx, 16);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x2db158: 0x8dd3458d  lw          $s3, 0x458D($t6)
    ctx->pc = 0x2db158u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 17805)));
    // 0x2db15c: 0xa0e44fa1  sb          $a0, 0x4FA1($a3)
    ctx->pc = 0x2db15cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 20385), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db160: 0x8f0a6efd  lw          $t2, 0x6EFD($t8)
    ctx->pc = 0x2db160u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 28413)));
    // 0x2db164: 0x871ae11b  lh          $k0, -0x1EE5($t8)
    ctx->pc = 0x2db164u;
    SET_GPR_S32(ctx, 26, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 4294959387)));
    // 0x2db168: 0xfebe72d2  sd          $fp, 0x72D2($s5)
    ctx->pc = 0x2db168u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 29394), GPR_U64(ctx, 30));
    // 0x2db16c: 0xc712dca3  lwc1        $f18, -0x235D($t8)
    ctx->pc = 0x2db16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294958243)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2db170: 0xfebe72c6  sd          $fp, 0x72C6($s5)
    ctx->pc = 0x2db170u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 29382), GPR_U64(ctx, 30));
    // 0x2db174: 0x0  nop
    ctx->pc = 0x2db174u;
    // NOP
label_2db178:
    // 0x2db178: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2db178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2db17c: 0x2442b168  addiu       $v0, $v0, -0x4E98
    ctx->pc = 0x2db17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947176));
    // 0x2db180: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2db180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2db184: 0x2484b148  addiu       $a0, $a0, -0x4EB8
    ctx->pc = 0x2db184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947144));
    // 0x2db188: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2db188u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db18c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2db18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2db190: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DB190u;
    SET_GPR_U32(ctx, 31, 0x2DB198u);
    ctx->pc = 0x2DB194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB190u;
            // 0x2db194: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB198u; }
        if (ctx->pc != 0x2DB198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB198u; }
        if (ctx->pc != 0x2DB198u) { return; }
    }
    ctx->pc = 0x2DB198u;
label_2db198:
    // 0x2db198: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2db198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db19c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2db19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2db1a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2db1a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB1A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB1A4u;
            // 0x2db1a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB1ACu;
    // 0x2db1ac: 0x0  nop
    ctx->pc = 0x2db1acu;
    // NOP
label_2db1b0:
    // 0x2db1b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2db1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2db1b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2db1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2db1b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2db1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2db1bc: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2db1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2db1c0: 0x2463b208  addiu       $v1, $v1, -0x4DF8
    ctx->pc = 0x2db1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947336));
    // 0x2db1c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2db1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db1c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB1C8u;
    {
        const bool branch_taken_0x2db1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db1c8) {
            ctx->pc = 0x2DB1E8u;
            goto label_2db1e8;
        }
    }
    ctx->pc = 0x2DB1D0u;
    // 0x2db1d0: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2db1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2db1d4: 0x2484b21c  addiu       $a0, $a0, -0x4DE4
    ctx->pc = 0x2db1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947356));
    // 0x2db1d8: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2db1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db1dc: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2db1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2db1e0: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DB1E0u;
    SET_GPR_U32(ctx, 31, 0x2DB1E8u);
    ctx->pc = 0x2DB1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB1E0u;
            // 0x2db1e4: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB1E8u; }
        if (ctx->pc != 0x2DB1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB1E8u; }
        if (ctx->pc != 0x2DB1E8u) { return; }
    }
    ctx->pc = 0x2DB1E8u;
label_2db1e8:
    // 0x2db1e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DB1E8u;
    {
        const bool branch_taken_0x2db1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db1e8) {
            ctx->pc = 0x2DB21Cu;
            goto label_2db21c;
        }
    }
    ctx->pc = 0x2DB1F0u;
    // 0x2db1f0: 0x8fd0297d  lw          $s0, 0x297D($fp)
    ctx->pc = 0x2db1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10621)));
    // 0x2db1f4: 0xa3088489  sb          $t0, -0x7B77($t8)
    ctx->pc = 0x2db1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 4294935689), (uint8_t)GPR_U32(ctx, 8));
    // 0x2db1f8: 0xde3f9bff  ld          $ra, -0x6401($s1)
    ctx->pc = 0x2db1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 17), 4294941695)));
    // 0x2db1fc: 0x87c89d43  lh          $t0, -0x62BD($fp)
    ctx->pc = 0x2db1fcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294942019)));
    // 0x2db200: 0xfc69d092  sd          $t1, -0x2F6E($v1)
    ctx->pc = 0x2db200u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294955154), GPR_U64(ctx, 9));
    // 0x2db204: 0x8c423405  lw          $v0, 0x3405($v0)
    ctx->pc = 0x2db204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13317)));
    // 0x2db208: 0x0  nop
    ctx->pc = 0x2db208u;
    // NOP
    // 0x2db20c: 0x32282052  andi        $t0, $s1, 0x2052
    ctx->pc = 0x2db20cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8274);
    // 0x2db210: 0xc712e09c  lwc1        $f18, -0x1F64($t8)
    ctx->pc = 0x2db210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294959260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2db214: 0x32282046  andi        $t0, $s1, 0x2046
    ctx->pc = 0x2db214u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8262);
    // 0x2db218: 0x0  nop
    ctx->pc = 0x2db218u;
    // NOP
label_2db21c:
    // 0x2db21c: 0xa1154174  sb          $s5, 0x4174($t0)
    ctx->pc = 0x2db21cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 16756), (uint8_t)GPR_U32(ctx, 21));
    // 0x2db220: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2db220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2db224: 0x8c6298b0  lw          $v0, -0x6750($v1)
    ctx->pc = 0x2db224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940848)));
    // 0x2db228: 0x45640a8b  .word       0x45640A8B                   # INVALID     $t3, $a0, 0xA8B # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2db228u;
    // Unhandled FPU instruction: format 0xB, function 0xB
    // 0x2db22c: 0x6985088b  ldl         $a1, 0x88B($t4)
    ctx->pc = 0x2db22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 2187); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2db230: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DB230u;
    {
        const bool branch_taken_0x2db230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db230) {
            ctx->pc = 0x2DB260u;
            goto label_2db260;
        }
    }
    ctx->pc = 0x2DB238u;
    // 0x2db238: 0x878202c3  lh          $v0, 0x2C3($gp)
    ctx->pc = 0x2db238u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 707)));
    // 0x2db23c: 0xa097dec1  sb          $s7, -0x213F($a0)
    ctx->pc = 0x2db23cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294958785), (uint8_t)GPR_U32(ctx, 23));
    // 0x2db240: 0x8d0c3eb5  lw          $t4, 0x3EB5($t0)
    ctx->pc = 0x2db240u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16053)));
    // 0x2db244: 0xffec3e2a  sd          $t4, 0x3E2A($ra)
    ctx->pc = 0x2db244u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 15914), GPR_U64(ctx, 12));
    // 0x2db248: 0xff10297a  sd          $s0, 0x297A($t8)
    ctx->pc = 0x2db248u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 10618), GPR_U64(ctx, 16));
    // 0x2db24c: 0x272fbda8  addiu       $t7, $t9, -0x4258
    ctx->pc = 0x2db24cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 25), 4294950312));
    // 0x2db250: 0x32282250  andi        $t0, $s1, 0x2250
    ctx->pc = 0x2db250u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8784);
    // 0x2db254: 0xc712e09d  lwc1        $f18, -0x1F63($t8)
    ctx->pc = 0x2db254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294959261)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2db258: 0x32282244  andi        $t0, $s1, 0x2244
    ctx->pc = 0x2db258u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8772);
    // 0x2db25c: 0x0  nop
    ctx->pc = 0x2db25cu;
    // NOP
label_2db260:
    // 0x2db260: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2db260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2db264: 0x2442b250  addiu       $v0, $v0, -0x4DB0
    ctx->pc = 0x2db264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947408));
    // 0x2db268: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2db268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2db26c: 0x2484b230  addiu       $a0, $a0, -0x4DD0
    ctx->pc = 0x2db26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947376));
    // 0x2db270: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2db270u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db274: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2db274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2db278: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DB278u;
    SET_GPR_U32(ctx, 31, 0x2DB280u);
    ctx->pc = 0x2DB27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB278u;
            // 0x2db27c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB280u; }
        if (ctx->pc != 0x2DB280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB280u; }
        if (ctx->pc != 0x2DB280u) { return; }
    }
    ctx->pc = 0x2DB280u;
label_2db280:
    // 0x2db280: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2db280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db284: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2db284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2db288: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2db288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db28c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB28Cu;
            // 0x2db290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB294u;
    // 0x2db294: 0x0  nop
    ctx->pc = 0x2db294u;
    // NOP
    ctx->pc = 0x2db298u;
}
