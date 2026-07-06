#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EEEB0
// Address: 0x2eeeb0 - 0x2ef1d0
void sub_002EEEB0_0x2eeeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEEB0_0x2eeeb0");
#endif

    switch (ctx->pc) {
        case 0x2eeefcu: goto label_2eeefc;
        case 0x2eef30u: goto label_2eef30;
        case 0x2eef54u: goto label_2eef54;
        case 0x2eef80u: goto label_2eef80;
        case 0x2eef94u: goto label_2eef94;
        case 0x2eef9cu: goto label_2eef9c;
        case 0x2eefa4u: goto label_2eefa4;
        case 0x2eefb8u: goto label_2eefb8;
        case 0x2eefc0u: goto label_2eefc0;
        case 0x2eefe4u: goto label_2eefe4;
        case 0x2eeff0u: goto label_2eeff0;
        case 0x2ef040u: goto label_2ef040;
        case 0x2ef058u: goto label_2ef058;
        case 0x2ef06cu: goto label_2ef06c;
        case 0x2ef078u: goto label_2ef078;
        case 0x2ef080u: goto label_2ef080;
        case 0x2ef0acu: goto label_2ef0ac;
        case 0x2ef0c0u: goto label_2ef0c0;
        case 0x2ef0ecu: goto label_2ef0ec;
        case 0x2ef0f4u: goto label_2ef0f4;
        case 0x2ef124u: goto label_2ef124;
        case 0x2ef130u: goto label_2ef130;
        case 0x2ef144u: goto label_2ef144;
        case 0x2ef158u: goto label_2ef158;
        case 0x2ef164u: goto label_2ef164;
        case 0x2ef184u: goto label_2ef184;
        case 0x2ef190u: goto label_2ef190;
        case 0x2ef198u: goto label_2ef198;
        case 0x2ef1bcu: goto label_2ef1bc;
        default: break;
    }

    ctx->pc = 0x2eeeb0u;

    // 0x2eeeb0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2eeeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2eeeb4: 0x240e0008  addiu       $t6, $zero, 0x8
    ctx->pc = 0x2eeeb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2eeeb8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2eeeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2eeebc: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2eeebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2eeec0: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x2eeec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x2eeec4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2eeec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeec8: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x2eeec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x2eeecc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2eeeccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeed0: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x2eeed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x2eeed4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2eeed4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeed8: 0xafae0070  sw          $t6, 0x70($sp)
    ctx->pc = 0x2eeed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 14));
    // 0x2eeedc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2eeedcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeee0: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x2eeee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x2eeee4: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x2eeee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x2eeee8: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2eeee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2eeeec: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x2eeeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2eeef0: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x2eeef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x2eeef4: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EEEF4u;
    SET_GPR_U32(ctx, 31, 0x2EEEFCu);
    ctx->pc = 0x2EEEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEEF4u;
            // 0x2eeef8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (runtime->hasFunction(0x2ED908u)) {
        auto targetFn = runtime->lookupFunction(0x2ED908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEEFCu; }
        if (ctx->pc != 0x2EEEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED908_0x2ed908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEEFCu; }
        if (ctx->pc != 0x2EEEFCu) { return; }
    }
    ctx->pc = 0x2EEEFCu;
label_2eeefc:
    // 0x2eeefc: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2eeefcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2eef00: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2eef00u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eef04: 0x25ee0f38  addiu       $t6, $t7, 0xF38
    ctx->pc = 0x2eef04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3896));
    // 0x2eef08: 0x8ded0f38  lw          $t5, 0xF38($t7)
    ctx->pc = 0x2eef08u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 3896)));
    // 0x2eef0c: 0x95cc0004  lhu         $t4, 0x4($t6)
    ctx->pc = 0x2eef0cu;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x2eef10: 0xafad0050  sw          $t5, 0x50($sp)
    ctx->pc = 0x2eef10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 13));
    // 0x2eef14: 0x240f0009  addiu       $t7, $zero, 0x9
    ctx->pc = 0x2eef14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2eef18: 0x168f0009  bne         $s4, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EEF18u;
    {
        const bool branch_taken_0x2eef18 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EEF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEF18u;
            // 0x2eef1c: 0xa7ac0054  sh          $t4, 0x54($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef18) {
            ctx->pc = 0x2EEF40u;
            goto label_2eef40;
        }
    }
    ctx->pc = 0x2EEF20u;
    // 0x2eef20: 0x240e000b  addiu       $t6, $zero, 0xB
    ctx->pc = 0x2eef20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2eef24: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2eef24u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2eef28: 0xafae0070  sw          $t6, 0x70($sp)
    ctx->pc = 0x2eef28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 14));
    // 0x2eef2c: 0x8ded0f40  lw          $t5, 0xF40($t7)
    ctx->pc = 0x2eef2cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 3904)));
label_2eef30:
    // 0x2eef30: 0x25ee0f40  addiu       $t6, $t7, 0xF40
    ctx->pc = 0x2eef30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3904));
    // 0x2eef34: 0x91cc0004  lbu         $t4, 0x4($t6)
    ctx->pc = 0x2eef34u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x2eef38: 0xafad0050  sw          $t5, 0x50($sp)
    ctx->pc = 0x2eef38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 13));
    // 0x2eef3c: 0xa3ac0054  sb          $t4, 0x54($sp)
    ctx->pc = 0x2eef3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 84), (uint8_t)GPR_U32(ctx, 12));
label_2eef40:
    // 0x2eef40: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x2eef40u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2eef44: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x2eef44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2eef48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2eef48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eef4c: 0xc049c48  jal         func_127120
    ctx->pc = 0x2EEF4Cu;
    SET_GPR_U32(ctx, 31, 0x2EEF54u);
    ctx->pc = 0x2EEF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEF4Cu;
            // 0x2eef50: 0x27be0010  addiu       $fp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEF54u; }
        if (ctx->pc != 0x2EEF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEF54u; }
        if (ctx->pc != 0x2EEF54u) { return; }
    }
    ctx->pc = 0x2EEF54u;
label_2eef54:
    // 0x2eef54: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2eef54u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x2eef58: 0x97a80008  lhu         $t0, 0x8($sp)
    ctx->pc = 0x2eef58u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eef5c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2eef5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eef60: 0xae6f0000  sw          $t7, 0x0($s3)
    ctx->pc = 0x2eef60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
    // 0x2eef64: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2eef64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2eef68: 0xa6680008  sh          $t0, 0x8($s3)
    ctx->pc = 0x2eef68u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 8));
    // 0x2eef6c: 0x24a510f0  addiu       $a1, $a1, 0x10F0
    ctx->pc = 0x2eef6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4336));
    // 0x2eef70: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2eef70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eef74: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2eef74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2eef78: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x2EEF78u;
    SET_GPR_U32(ctx, 31, 0x2EEF80u);
    ctx->pc = 0x2EEF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEF78u;
            // 0x2eef7c: 0x92470000  lbu         $a3, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEF80u; }
        if (ctx->pc != 0x2EEF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEF80u; }
        if (ctx->pc != 0x2EEF80u) { return; }
    }
    ctx->pc = 0x2EEF80u;
label_2eef80:
    // 0x2eef80: 0x262410d8  addiu       $a0, $s1, 0x10D8
    ctx->pc = 0x2eef80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4312));
    // 0x2eef84: 0x24050969  addiu       $a1, $zero, 0x969
    ctx->pc = 0x2eef84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2409));
    // 0x2eef88: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2eef88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eef8c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EEF8Cu;
    SET_GPR_U32(ctx, 31, 0x2EEF94u);
    ctx->pc = 0x2EEF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEF8Cu;
            // 0x2eef90: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEF94u; }
        if (ctx->pc != 0x2EEF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEF94u; }
        if (ctx->pc != 0x2EEF94u) { return; }
    }
    ctx->pc = 0x2EEF94u;
label_2eef94:
    // 0x2eef94: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EEF94u;
    SET_GPR_U32(ctx, 31, 0x2EEF9Cu);
    ctx->pc = 0x2EEF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEF94u;
            // 0x2eef98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (runtime->hasFunction(0x2ED908u)) {
        auto targetFn = runtime->lookupFunction(0x2ED908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEF9Cu; }
        if (ctx->pc != 0x2EEF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED908_0x2ed908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEF9Cu; }
        if (ctx->pc != 0x2EEF9Cu) { return; }
    }
    ctx->pc = 0x2EEF9Cu;
label_2eef9c:
    // 0x2eef9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EEF9Cu;
    {
        const bool branch_taken_0x2eef9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEF9Cu;
            // 0x2eefa0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef9c) {
            ctx->pc = 0x2EEFC8u;
            goto label_2eefc8;
        }
    }
    ctx->pc = 0x2EEFA4u;
label_2eefa4:
    // 0x2eefa4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2eefa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eefa8: 0x2405096c  addiu       $a1, $zero, 0x96C
    ctx->pc = 0x2eefa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2412));
    // 0x2eefac: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2eefacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2eefb0: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2EEFB0u;
    SET_GPR_U32(ctx, 31, 0x2EEFB8u);
    ctx->pc = 0x2EEFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEFB0u;
            // 0x2eefb4: 0x262410d8  addiu       $a0, $s1, 0x10D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (runtime->hasFunction(0x2F1C78u)) {
        auto targetFn = runtime->lookupFunction(0x2F1C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEFB8u; }
        if (ctx->pc != 0x2EEFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1C78_0x2f1c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEFB8u; }
        if (ctx->pc != 0x2EEFB8u) { return; }
    }
    ctx->pc = 0x2EEFB8u;
label_2eefb8:
    // 0x2eefb8: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EEFB8u;
    SET_GPR_U32(ctx, 31, 0x2EEFC0u);
    ctx->pc = 0x2EEFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEFB8u;
            // 0x2eefbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (runtime->hasFunction(0x2ED908u)) {
        auto targetFn = runtime->lookupFunction(0x2ED908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEFC0u; }
        if (ctx->pc != 0x2EEFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED908_0x2ed908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEFC0u; }
        if (ctx->pc != 0x2EEFC0u) { return; }
    }
    ctx->pc = 0x2EEFC0u;
label_2eefc0:
    // 0x2eefc0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EEFC0u;
    {
        const bool branch_taken_0x2eefc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEFC0u;
            // 0x2eefc4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eefc0) {
            ctx->pc = 0x2EEFA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eefa4;
        }
    }
    ctx->pc = 0x2EEFC8u;
label_2eefc8:
    // 0x2eefc8: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2eefc8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2eefcc: 0x2405096e  addiu       $a1, $zero, 0x96E
    ctx->pc = 0x2eefccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2414));
    // 0x2eefd0: 0x25f510d8  addiu       $s5, $t7, 0x10D8
    ctx->pc = 0x2eefd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 15), 4312));
    // 0x2eefd4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2eefd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eefd8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2eefd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eefdc: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2EEFDCu;
    SET_GPR_U32(ctx, 31, 0x2EEFE4u);
    ctx->pc = 0x2EEFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEFDCu;
            // 0x2eefe0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (runtime->hasFunction(0x2F1C78u)) {
        auto targetFn = runtime->lookupFunction(0x2F1C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEFE4u; }
        if (ctx->pc != 0x2EEFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1C78_0x2f1c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEFE4u; }
        if (ctx->pc != 0x2EEFE4u) { return; }
    }
    ctx->pc = 0x2EEFE4u;
label_2eefe4:
    // 0x2eefe4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2eefe4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eefe8: 0xc0bb5fc  jal         func_2ED7F0
    ctx->pc = 0x2EEFE8u;
    SET_GPR_U32(ctx, 31, 0x2EEFF0u);
    ctx->pc = 0x2EEFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEFE8u;
            // 0x2eefec: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED7F0u;
    if (runtime->hasFunction(0x2ED7F0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEFF0u; }
        if (ctx->pc != 0x2EEFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED7F0_0x2ed7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEFF0u; }
        if (ctx->pc != 0x2EEFF0u) { return; }
    }
    ctx->pc = 0x2EEFF0u;
label_2eeff0:
    // 0x2eeff0: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2eeff0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2eeff4: 0x904b0000  lbu         $t3, 0x0($v0)
    ctx->pc = 0x2eeff4u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2eeff8: 0x25f1eca8  addiu       $s1, $t7, -0x1358
    ctx->pc = 0x2eeff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2eeffc: 0x97ad0006  lhu         $t5, 0x6($sp)
    ctx->pc = 0x2eeffcu;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x2ef000: 0x962c001a  lhu         $t4, 0x1A($s1)
    ctx->pc = 0x2ef000u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x2ef004: 0x1765804  sllv        $t3, $s6, $t3
    ctx->pc = 0x2ef004u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 22), GPR_U32(ctx, 11) & 0x1F));
    // 0x2ef008: 0x97ae0008  lhu         $t6, 0x8($sp)
    ctx->pc = 0x2ef008u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ef00c: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x2ef00cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x2ef010: 0x962f0018  lhu         $t7, 0x18($s1)
    ctx->pc = 0x2ef010u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2ef014: 0xc6400  sll         $t4, $t4, 16
    ctx->pc = 0x2ef014u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x2ef018: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x2ef018u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x2ef01c: 0x1ec7821  addu        $t7, $t7, $t4
    ctx->pc = 0x2ef01cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x2ef020: 0x1cf702a  slt         $t6, $t6, $t7
    ctx->pc = 0x2ef020u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x2ef024: 0x15c0003f  bnez        $t6, . + 4 + (0x3F << 2)
    ctx->pc = 0x2EF024u;
    {
        const bool branch_taken_0x2ef024 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF024u;
            // 0x2ef028: 0xae2b003c  sw          $t3, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef024) {
            ctx->pc = 0x2EF124u;
            goto label_2ef124;
        }
    }
    ctx->pc = 0x2EF02Cu;
    // 0x2ef02c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ef02cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef030: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2ef030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef034: 0x24050973  addiu       $a1, $zero, 0x973
    ctx->pc = 0x2ef034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2419));
    // 0x2ef038: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2EF038u;
    SET_GPR_U32(ctx, 31, 0x2EF040u);
    ctx->pc = 0x2EF03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF038u;
            // 0x2ef03c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (runtime->hasFunction(0x2F1C78u)) {
        auto targetFn = runtime->lookupFunction(0x2F1C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF040u; }
        if (ctx->pc != 0x2EF040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1C78_0x2f1c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF040u; }
        if (ctx->pc != 0x2EF040u) { return; }
    }
    ctx->pc = 0x2EF040u;
label_2ef040:
    // 0x2ef040: 0x26301458  addiu       $s0, $s1, 0x1458
    ctx->pc = 0x2ef040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5208));
    // 0x2ef044: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x2ef044u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ef048: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ef048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef04c: 0x24050974  addiu       $a1, $zero, 0x974
    ctx->pc = 0x2ef04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2420));
    // 0x2ef050: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EF050u;
    SET_GPR_U32(ctx, 31, 0x2EF058u);
    ctx->pc = 0x2EF054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF050u;
            // 0x2ef054: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (runtime->hasFunction(0x2F1BD8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF058u; }
        if (ctx->pc != 0x2EF058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1BD8_0x2f1bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF058u; }
        if (ctx->pc != 0x2EF058u) { return; }
    }
    ctx->pc = 0x2EF058u;
label_2ef058:
    // 0x2ef058: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ef058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef05c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2ef05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ef060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef064: 0xc0bc200  jal         func_2F0800
    ctx->pc = 0x2EF064u;
    SET_GPR_U32(ctx, 31, 0x2EF06Cu);
    ctx->pc = 0x2EF068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF064u;
            // 0x2ef068: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0800u;
    if (runtime->hasFunction(0x2F0800u)) {
        auto targetFn = runtime->lookupFunction(0x2F0800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF06Cu; }
        if (ctx->pc != 0x2EF06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0800_0x2f0800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF06Cu; }
        if (ctx->pc != 0x2EF06Cu) { return; }
    }
    ctx->pc = 0x2EF06Cu;
label_2ef06c:
    // 0x2ef06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef070: 0xc0bc280  jal         func_2F0A00
    ctx->pc = 0x2EF070u;
    SET_GPR_U32(ctx, 31, 0x2EF078u);
    ctx->pc = 0x2EF074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF070u;
            // 0x2ef074: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A00u;
    if (runtime->hasFunction(0x2F0A00u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF078u; }
        if (ctx->pc != 0x2EF078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A00_0x2f0a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF078u; }
        if (ctx->pc != 0x2EF078u) { return; }
    }
    ctx->pc = 0x2EF078u;
label_2ef078:
    // 0x2ef078: 0xc0bc778  jal         func_2F1DE0
    ctx->pc = 0x2EF078u;
    SET_GPR_U32(ctx, 31, 0x2EF080u);
    ctx->pc = 0x2F1DE0u;
    if (runtime->hasFunction(0x2F1DE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF080u; }
        if (ctx->pc != 0x2EF080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1DE0_0x2f1de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF080u; }
        if (ctx->pc != 0x2EF080u) { return; }
    }
    ctx->pc = 0x2EF080u;
label_2ef080:
    // 0x2ef080: 0x8e29003c  lw          $t1, 0x3C($s1)
    ctx->pc = 0x2ef080u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2ef084: 0x561004  sllv        $v0, $s6, $v0
    ctx->pc = 0x2ef084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ef088: 0x96680008  lhu         $t0, 0x8($s3)
    ctx->pc = 0x2ef088u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2ef08c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2ef08cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2ef090: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x2ef090u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x2ef094: 0x24a51110  addiu       $a1, $a1, 0x1110
    ctx->pc = 0x2ef094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4368));
    // 0x2ef098: 0xae29003c  sw          $t1, 0x3C($s1)
    ctx->pc = 0x2ef098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 9));
    // 0x2ef09c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2ef09cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ef0a0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2ef0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef0a4: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x2EF0A4u;
    SET_GPR_U32(ctx, 31, 0x2EF0ACu);
    ctx->pc = 0x2EF0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF0A4u;
            // 0x2ef0a8: 0x92e70000  lbu         $a3, 0x0($s7) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF0ACu; }
        if (ctx->pc != 0x2EF0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF0ACu; }
        if (ctx->pc != 0x2EF0ACu) { return; }
    }
    ctx->pc = 0x2EF0ACu;
label_2ef0ac:
    // 0x2ef0ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ef0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef0b0: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2ef0b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef0b4: 0x2405097a  addiu       $a1, $zero, 0x97A
    ctx->pc = 0x2ef0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2426));
    // 0x2ef0b8: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EF0B8u;
    SET_GPR_U32(ctx, 31, 0x2EF0C0u);
    ctx->pc = 0x2EF0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF0B8u;
            // 0x2ef0bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF0C0u; }
        if (ctx->pc != 0x2EF0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF0C0u; }
        if (ctx->pc != 0x2EF0C0u) { return; }
    }
    ctx->pc = 0x2EF0C0u;
label_2ef0c0:
    // 0x2ef0c0: 0x8e2e003c  lw          $t6, 0x3C($s1)
    ctx->pc = 0x2ef0c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2ef0c4: 0x8e2f0040  lw          $t7, 0x40($s1)
    ctx->pc = 0x2ef0c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2ef0c8: 0x15cf000b  bne         $t6, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x2EF0C8u;
    {
        const bool branch_taken_0x2ef0c8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EF0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF0C8u;
            // 0x2ef0cc: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef0c8) {
            ctx->pc = 0x2EF0F8u;
            goto label_2ef0f8;
        }
    }
    ctx->pc = 0x2EF0D0u;
    // 0x2ef0d0: 0x966f0008  lhu         $t7, 0x8($s3)
    ctx->pc = 0x2ef0d0u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2ef0d4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ef0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ef0d8: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2ef0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x2ef0dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ef0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef0e0: 0xa66f0004  sh          $t7, 0x4($s3)
    ctx->pc = 0x2ef0e0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 15));
    // 0x2ef0e4: 0x24e71138  addiu       $a3, $a3, 0x1138
    ctx->pc = 0x2ef0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4408));
    // 0x2ef0e8: 0x2405097e  addiu       $a1, $zero, 0x97E
    ctx->pc = 0x2ef0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2430));
label_2ef0ec:
    // 0x2ef0ec: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EF0ECu;
    SET_GPR_U32(ctx, 31, 0x2EF0F4u);
    ctx->pc = 0x2EF0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF0ECu;
            // 0x2ef0f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF0F4u; }
        if (ctx->pc != 0x2EF0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF0F4u; }
        if (ctx->pc != 0x2EF0F4u) { return; }
    }
    ctx->pc = 0x2EF0F4u;
label_2ef0f4:
    // 0x2ef0f4: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2ef0f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2ef0f8:
    // 0x2ef0f8: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x2ef0f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2ef0fc: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2ef0fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ef100: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x2ef100u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2ef104: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x2ef104u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ef108: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x2ef108u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2ef10c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2ef10cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ef110: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x2ef110u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2ef114: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x2ef114u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ef118: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x2ef118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2ef11c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF11Cu;
            // 0x2ef120: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EF124u;
label_2ef124:
    // 0x2ef124: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2ef124u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ef128: 0xc0bb5fc  jal         func_2ED7F0
    ctx->pc = 0x2EF128u;
    SET_GPR_U32(ctx, 31, 0x2EF130u);
    ctx->pc = 0x2EF12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF128u;
            // 0x2ef12c: 0x26301458  addiu       $s0, $s1, 0x1458 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED7F0u;
    if (runtime->hasFunction(0x2ED7F0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF130u; }
        if (ctx->pc != 0x2EF130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED7F0_0x2ed7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF130u; }
        if (ctx->pc != 0x2EF130u) { return; }
    }
    ctx->pc = 0x2EF130u;
label_2ef130:
    // 0x2ef130: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ef130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef134: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ef134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef138: 0x24050982  addiu       $a1, $zero, 0x982
    ctx->pc = 0x2ef138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2434));
    // 0x2ef13c: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2EF13Cu;
    SET_GPR_U32(ctx, 31, 0x2EF144u);
    ctx->pc = 0x2EF140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF13Cu;
            // 0x2ef140: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (runtime->hasFunction(0x2F1C78u)) {
        auto targetFn = runtime->lookupFunction(0x2F1C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF144u; }
        if (ctx->pc != 0x2EF144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1C78_0x2f1c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF144u; }
        if (ctx->pc != 0x2EF144u) { return; }
    }
    ctx->pc = 0x2EF144u;
label_2ef144:
    // 0x2ef144: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x2ef144u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ef148: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ef148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ef14c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ef14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef150: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EF150u;
    SET_GPR_U32(ctx, 31, 0x2EF158u);
    ctx->pc = 0x2EF154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF150u;
            // 0x2ef154: 0x24050983  addiu       $a1, $zero, 0x983 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2435));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (runtime->hasFunction(0x2F1BD8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF158u; }
        if (ctx->pc != 0x2EF158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1BD8_0x2f1bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF158u; }
        if (ctx->pc != 0x2EF158u) { return; }
    }
    ctx->pc = 0x2EF158u;
label_2ef158:
    // 0x2ef158: 0x96240018  lhu         $a0, 0x18($s1)
    ctx->pc = 0x2ef158u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2ef15c: 0xc0bc190  jal         func_2F0640
    ctx->pc = 0x2EF15Cu;
    SET_GPR_U32(ctx, 31, 0x2EF164u);
    ctx->pc = 0x2EF160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF15Cu;
            // 0x2ef160: 0x8e25004c  lw          $a1, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0640u;
    if (runtime->hasFunction(0x2F0640u)) {
        auto targetFn = runtime->lookupFunction(0x2F0640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF164u; }
        if (ctx->pc != 0x2EF164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0640_0x2f0640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF164u; }
        if (ctx->pc != 0x2EF164u) { return; }
    }
    ctx->pc = 0x2EF164u;
label_2ef164:
    // 0x2ef164: 0xa6620008  sh          $v0, 0x8($s3)
    ctx->pc = 0x2ef164u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ef168: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ef168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef16c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2ef16cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ef170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef174: 0x962f001a  lhu         $t7, 0x1A($s1)
    ctx->pc = 0x2ef174u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x2ef178: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2ef178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ef17c: 0xc0bc200  jal         func_2F0800
    ctx->pc = 0x2EF17Cu;
    SET_GPR_U32(ctx, 31, 0x2EF184u);
    ctx->pc = 0x2EF180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF17Cu;
            // 0x2ef180: 0xa66f0006  sh          $t7, 0x6($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0800u;
    if (runtime->hasFunction(0x2F0800u)) {
        auto targetFn = runtime->lookupFunction(0x2F0800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF184u; }
        if (ctx->pc != 0x2EF184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0800_0x2f0800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF184u; }
        if (ctx->pc != 0x2EF184u) { return; }
    }
    ctx->pc = 0x2EF184u;
label_2ef184:
    // 0x2ef184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef188: 0xc0bc280  jal         func_2F0A00
    ctx->pc = 0x2EF188u;
    SET_GPR_U32(ctx, 31, 0x2EF190u);
    ctx->pc = 0x2EF18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF188u;
            // 0x2ef18c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A00u;
    if (runtime->hasFunction(0x2F0A00u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF190u; }
        if (ctx->pc != 0x2EF190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A00_0x2f0a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF190u; }
        if (ctx->pc != 0x2EF190u) { return; }
    }
    ctx->pc = 0x2EF190u;
label_2ef190:
    // 0x2ef190: 0xc0bc778  jal         func_2F1DE0
    ctx->pc = 0x2EF190u;
    SET_GPR_U32(ctx, 31, 0x2EF198u);
    ctx->pc = 0x2F1DE0u;
    if (runtime->hasFunction(0x2F1DE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF198u; }
        if (ctx->pc != 0x2EF198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1DE0_0x2f1de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF198u; }
        if (ctx->pc != 0x2EF198u) { return; }
    }
    ctx->pc = 0x2EF198u;
label_2ef198:
    // 0x2ef198: 0x561004  sllv        $v0, $s6, $v0
    ctx->pc = 0x2ef198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ef19c: 0x96680008  lhu         $t0, 0x8($s3)
    ctx->pc = 0x2ef19cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2ef1a0: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x2ef1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x2ef1a4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2ef1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2ef1a8: 0x24a51148  addiu       $a1, $a1, 0x1148
    ctx->pc = 0x2ef1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4424));
    // 0x2ef1ac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2ef1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef1b0: 0x92e70000  lbu         $a3, 0x0($s7)
    ctx->pc = 0x2ef1b0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2ef1b4: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x2EF1B4u;
    SET_GPR_U32(ctx, 31, 0x2EF1BCu);
    ctx->pc = 0x2EF1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF1B4u;
            // 0x2ef1b8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF1BCu; }
        if (ctx->pc != 0x2EF1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF1BCu; }
        if (ctx->pc != 0x2EF1BCu) { return; }
    }
    ctx->pc = 0x2EF1BCu;
label_2ef1bc:
    // 0x2ef1bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ef1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef1c0: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2ef1c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef1c4: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
    ctx->pc = 0x2EF1C4u;
    {
        const bool branch_taken_0x2ef1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF1C4u;
            // 0x2ef1c8: 0x2405098a  addiu       $a1, $zero, 0x98A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef1c4) {
            ctx->pc = 0x2EF0ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef0ec;
        }
    }
    ctx->pc = 0x2EF1CCu;
    // 0x2ef1cc: 0x0  nop
    ctx->pc = 0x2ef1ccu;
    // NOP
    ctx->pc = 0x2ef1d0u;
}
