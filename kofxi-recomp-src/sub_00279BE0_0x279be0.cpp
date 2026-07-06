#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00279BE0
// Address: 0x279be0 - 0x279d80
void sub_00279BE0_0x279be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279BE0_0x279be0");
#endif

    switch (ctx->pc) {
        case 0x279c00u: goto label_279c00;
        case 0x279c50u: goto label_279c50;
        case 0x279c60u: goto label_279c60;
        case 0x279ca8u: goto label_279ca8;
        case 0x279cbcu: goto label_279cbc;
        case 0x279d14u: goto label_279d14;
        case 0x279d68u: goto label_279d68;
        default: break;
    }

    ctx->pc = 0x279be0u;

    // 0x279be0: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x279be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x279be4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279be4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x279be8: 0x8c6253d0  lw          $v0, 0x53D0($v1)
    ctx->pc = 0x279be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21456)));
    // 0x279bec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x279becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x279bf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x279bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279bf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x279bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x279bf8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x279BF8u;
    {
        const bool branch_taken_0x279bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279BF8u;
            // 0x279bfc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279bf8) {
            ctx->pc = 0x279C20u;
            goto label_279c20;
        }
    }
    ctx->pc = 0x279C00u;
label_279c00:
    // 0x279c00: 0x0  nop
    ctx->pc = 0x279c00u;
    // NOP
    // 0x279c04: 0x0  nop
    ctx->pc = 0x279c04u;
    // NOP
    // 0x279c08: 0x0  nop
    ctx->pc = 0x279c08u;
    // NOP
    // 0x279c0c: 0x0  nop
    ctx->pc = 0x279c0cu;
    // NOP
    // 0x279c10: 0x0  nop
    ctx->pc = 0x279c10u;
    // NOP
    // 0x279c14: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x279C14u;
    {
        const bool branch_taken_0x279c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279c14) {
            ctx->pc = 0x279C00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279c00;
        }
    }
    ctx->pc = 0x279C1Cu;
    // 0x279c1c: 0x0  nop
    ctx->pc = 0x279c1cu;
    // NOP
label_279c20:
    // 0x279c20: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x279c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x279c24: 0x8c63538c  lw          $v1, 0x538C($v1)
    ctx->pc = 0x279c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21388)));
    // 0x279c28: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x279c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x279c2c: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x279c2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x279c30: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x279C30u;
    {
        const bool branch_taken_0x279c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279C30u;
            // 0x279c34: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c30) {
            ctx->pc = 0x279C64u;
            goto label_279c64;
        }
    }
    ctx->pc = 0x279C38u;
    // 0x279c38: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x279c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x279c3c: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x279c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x279c40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x279C40u;
    {
        const bool branch_taken_0x279c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279c40) {
            ctx->pc = 0x279C58u;
            goto label_279c58;
        }
    }
    ctx->pc = 0x279C48u;
    // 0x279c48: 0xc09e618  jal         func_279860
    ctx->pc = 0x279C48u;
    SET_GPR_U32(ctx, 31, 0x279C50u);
    ctx->pc = 0x279C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279C48u;
            // 0x279c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279860u;
    if (runtime->hasFunction(0x279860u)) {
        auto targetFn = runtime->lookupFunction(0x279860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279C50u; }
        if (ctx->pc != 0x279C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279860_0x279860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279C50u; }
        if (ctx->pc != 0x279C50u) { return; }
    }
    ctx->pc = 0x279C50u;
label_279c50:
    // 0x279c50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x279C50u;
    {
        const bool branch_taken_0x279c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279C50u;
            // 0x279c54: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c50) {
            ctx->pc = 0x279C64u;
            goto label_279c64;
        }
    }
    ctx->pc = 0x279C58u;
label_279c58:
    // 0x279c58: 0xc09e594  jal         func_279650
    ctx->pc = 0x279C58u;
    SET_GPR_U32(ctx, 31, 0x279C60u);
    ctx->pc = 0x279C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279C58u;
            // 0x279c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279650u;
    if (runtime->hasFunction(0x279650u)) {
        auto targetFn = runtime->lookupFunction(0x279650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279C60u; }
        if (ctx->pc != 0x279C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279650_0x279650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279C60u; }
        if (ctx->pc != 0x279C60u) { return; }
    }
    ctx->pc = 0x279C60u;
label_279c60:
    // 0x279c60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x279c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279c64:
    // 0x279c64: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x279c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
    // 0x279c68: 0x8c4353cc  lw          $v1, 0x53CC($v0)
    ctx->pc = 0x279c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21452)));
    // 0x279c6c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x279C6Cu;
    {
        const bool branch_taken_0x279c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279C6Cu;
            // 0x279c70: 0x3c0201c3  lui         $v0, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c6c) {
            ctx->pc = 0x279D48u;
            goto label_279d48;
        }
    }
    ctx->pc = 0x279C74u;
    // 0x279c74: 0x16200035  bnez        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x279C74u;
    {
        const bool branch_taken_0x279c74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x279C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279C74u;
            // 0x279c78: 0x8c4353e0  lw          $v1, 0x53E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c74) {
            ctx->pc = 0x279D4Cu;
            goto label_279d4c;
        }
    }
    ctx->pc = 0x279C7Cu;
    // 0x279c7c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x279c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x279c80: 0x24639cc8  addiu       $v1, $v1, -0x6338
    ctx->pc = 0x279c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941896));
    // 0x279c84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x279c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279c88: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x279C88u;
    {
        const bool branch_taken_0x279c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279c88) {
            ctx->pc = 0x279CA8u;
            goto label_279ca8;
        }
    }
    ctx->pc = 0x279C90u;
    // 0x279c90: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x279c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x279c94: 0x24849cdc  addiu       $a0, $a0, -0x6324
    ctx->pc = 0x279c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941916));
    // 0x279c98: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x279c98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x279c9c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x279c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x279ca0: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x279CA0u;
    SET_GPR_U32(ctx, 31, 0x279CA8u);
    ctx->pc = 0x279CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279CA0u;
            // 0x279ca4: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279CA8u; }
        if (ctx->pc != 0x279CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279CA8u; }
        if (ctx->pc != 0x279CA8u) { return; }
    }
    ctx->pc = 0x279CA8u;
label_279ca8:
    // 0x279ca8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x279CA8u;
    {
        const bool branch_taken_0x279ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279ca8) {
            ctx->pc = 0x279CDCu;
            goto label_279cdc;
        }
    }
    ctx->pc = 0x279CB0u;
    // 0x279cb0: 0x36e7820  add         $t7, $k1, $t6
    ctx->pc = 0x279cb0u;
    {     int32_t rs_val = GPR_S32(ctx, 27);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
    // 0x279cb4: 0xcb0421a  jal         func_2C10868
    ctx->pc = 0x279CB4u;
    SET_GPR_U32(ctx, 31, 0x279CBCu);
    ctx->pc = 0x279CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279CB4u;
            // 0x279cb8: 0x8dbf82c5  lw          $ra, -0x7D3B($t5) (Delay Slot)
        SET_GPR_S32(ctx, 31, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294935237)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C10868u;
    {
        auto targetFn = runtime->lookupFunction(0x2C10868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279CBCu; }
        if (ctx->pc != 0x279CBCu) { return; }
    }
    ctx->pc = 0x279CBCu;
label_279cbc:
    // 0x279cbc: 0xa20550d1  sb          $a1, 0x50D1($s0)
    ctx->pc = 0x279cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20689), (uint8_t)GPR_U32(ctx, 5));
    // 0x279cc0: 0x19f6820  add         $t5, $t4, $ra
    ctx->pc = 0x279cc0u;
    {     int32_t rs_val = GPR_S32(ctx, 12);     int32_t rt_val = GPR_S32(ctx, 31);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
    // 0x279cc4: 0x8cc707a5  lw          $a3, 0x7A5($a2)
    ctx->pc = 0x279cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1957)));
    // 0x279cc8: 0x0  nop
    ctx->pc = 0x279cc8u;
    // NOP
    // 0x279ccc: 0xa8a71a7b  swl         $a3, 0x1A7B($a1)
    ctx->pc = 0x279cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 6779); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x279cd0: 0x980d2578  lwr         $t5, 0x2578($zero)
    ctx->pc = 0x279cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 9592); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x279cd4: 0xa8a71a43  swl         $a3, 0x1A43($a1)
    ctx->pc = 0x279cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 6723); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x279cd8: 0x0  nop
    ctx->pc = 0x279cd8u;
    // NOP
label_279cdc:
    // 0x279cdc: 0xf8ec1509  sqc2        $vf12, 0x1509($a3)
    ctx->pc = 0x279cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 5385), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x279ce0: 0xf8ed1709  sqc2        $vf13, 0x1709($a3)
    ctx->pc = 0x279ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 5897), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x279ce4: 0xf8ed1709  sqc2        $vf13, 0x1709($a3)
    ctx->pc = 0x279ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 5897), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x279ce8: 0xf8ed1709  sqc2        $vf13, 0x1709($a3)
    ctx->pc = 0x279ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 5897), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x279cec: 0x75613ae4  .word       0x75613AE4                   # INVALID     $t3, $at, 0x3AE4 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x279cecu;
    // Unhandled opcode: 0x1D
    // 0x279cf0: 0xd6617a25  ldc1        $f1, 0x7A25($s3)
    ctx->pc = 0x279cf0u;
    // Unhandled opcode: 0x35
    // 0x279cf4: 0x3ce0fbc4  .word       0x3CE0FBC4                   # lui         $zero, 0xFBC4 # 00E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x279cf4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)64452 << 16));
    // 0x279cf8: 0xd5613ba4  ldc1        $f1, 0x3BA4($t3)
    ctx->pc = 0x279cf8u;
    // Unhandled opcode: 0x35
    // 0x279cfc: 0x38e1970c  xori        $at, $a3, 0x970C
    ctx->pc = 0x279cfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)38668);
    // 0x279d00: 0xf8ed1709  sqc2        $vf13, 0x1709($a3)
    ctx->pc = 0x279d00u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 5897), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x279d04: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x279d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x279d08: 0x24849cec  addiu       $a0, $a0, -0x6314
    ctx->pc = 0x279d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941932));
    // 0x279d0c: 0xc09e572  jal         func_2795C8
    ctx->pc = 0x279D0Cu;
    SET_GPR_U32(ctx, 31, 0x279D14u);
    ctx->pc = 0x279D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279D0Cu;
            // 0x279d10: 0xf8ed1709  sqc2        $vf13, 0x1709($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 5897), _mm_castps_si128(ctx->vu0_vf[13]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2795C8u;
    if (runtime->hasFunction(0x2795C8u)) {
        auto targetFn = runtime->lookupFunction(0x2795C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D14u; }
        if (ctx->pc != 0x279D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002795C8_0x2795c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D14u; }
        if (ctx->pc != 0x279D14u) { return; }
    }
    ctx->pc = 0x279D14u;
label_279d14:
    // 0x279d14: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x279D14u;
    {
        const bool branch_taken_0x279d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279d14) {
            ctx->pc = 0x279D44u;
            goto label_279d44;
        }
    }
    ctx->pc = 0x279D1Cu;
    // 0x279d1c: 0xff876bf2  sd          $a3, 0x6BF2($gp)
    ctx->pc = 0x279d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 27634), GPR_U64(ctx, 7));
    // 0x279d20: 0xffb3daaa  sd          $s3, -0x2556($sp)
    ctx->pc = 0x279d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4294957738), GPR_U64(ctx, 19));
    // 0x279d24: 0xfd1d80c2  sd          $sp, -0x7F3E($t0)
    ctx->pc = 0x279d24u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 4294934722), GPR_U64(ctx, 29));
    // 0x279d28: 0xa277f721  sb          $s7, -0x8DF($s3)
    ctx->pc = 0x279d28u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4294965025), (uint8_t)GPR_U32(ctx, 23));
    // 0x279d2c: 0x26a3e750  addiu       $v1, $s5, -0x18B0
    ctx->pc = 0x279d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294960976));
    // 0x279d30: 0x8fc922ed  lw          $t1, 0x22ED($fp)
    ctx->pc = 0x279d30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8941)));
    // 0x279d34: 0xa8a71ab7  swl         $a3, 0x1AB7($a1)
    ctx->pc = 0x279d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 6839); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x279d38: 0x980d2579  lwr         $t5, 0x2579($zero)
    ctx->pc = 0x279d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 9593); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x279d3c: 0xa8a71a8f  swl         $a3, 0x1A8F($a1)
    ctx->pc = 0x279d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 6799); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x279d40: 0x0  nop
    ctx->pc = 0x279d40u;
    // NOP
label_279d44:
    // 0x279d44: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x279d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
label_279d48:
    // 0x279d48: 0x8c4353e0  lw          $v1, 0x53E0($v0)
    ctx->pc = 0x279d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21472)));
label_279d4c:
    // 0x279d4c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x279D4Cu;
    {
        const bool branch_taken_0x279d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279D4Cu;
            // 0x279d50: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d4c) {
            ctx->pc = 0x279D6Cu;
            goto label_279d6c;
        }
    }
    ctx->pc = 0x279D54u;
    // 0x279d54: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x279D54u;
    {
        const bool branch_taken_0x279d54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x279D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279D54u;
            // 0x279d58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d54) {
            ctx->pc = 0x279D6Cu;
            goto label_279d6c;
        }
    }
    ctx->pc = 0x279D5Cu;
    // 0x279d5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d60: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x279D60u;
    SET_GPR_U32(ctx, 31, 0x279D68u);
    ctx->pc = 0x279D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279D60u;
            // 0x279d64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D68u; }
        if (ctx->pc != 0x279D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D68u; }
        if (ctx->pc != 0x279D68u) { return; }
    }
    ctx->pc = 0x279D68u;
label_279d68:
    // 0x279d68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x279d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_279d6c:
    // 0x279d6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x279d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279d70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x279d70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x279d74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x279d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279d78: 0x3e00008  jr          $ra
    ctx->pc = 0x279D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279D78u;
            // 0x279d7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279D80u;
    ctx->pc = 0x279d80u;
}
