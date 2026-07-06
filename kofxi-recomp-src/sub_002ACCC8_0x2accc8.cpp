#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ACCC8
// Address: 0x2accc8 - 0x2acdd0
void sub_002ACCC8_0x2accc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACCC8_0x2accc8");
#endif

    switch (ctx->pc) {
        case 0x2accecu: goto label_2accec;
        case 0x2acd64u: goto label_2acd64;
        case 0x2acd7cu: goto label_2acd7c;
        case 0x2acda4u: goto label_2acda4;
        case 0x2acdb4u: goto label_2acdb4;
        default: break;
    }

    ctx->pc = 0x2accc8u;

    // 0x2accc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2accc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2acccc: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x2accccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2accd0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2accd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2accd4: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x2accd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2accd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2accd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2accdc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2accdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2acce0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2acce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2acce4: 0xc0ab498  jal         func_2AD260
    ctx->pc = 0x2ACCE4u;
    SET_GPR_U32(ctx, 31, 0x2ACCECu);
    ctx->pc = 0x2ACCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACCE4u;
            // 0x2acce8: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD260u;
    if (runtime->hasFunction(0x2AD260u)) {
        auto targetFn = runtime->lookupFunction(0x2AD260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACCECu; }
        if (ctx->pc != 0x2ACCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD260_0x2ad260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACCECu; }
        if (ctx->pc != 0x2ACCECu) { return; }
    }
    ctx->pc = 0x2ACCECu;
label_2accec:
    // 0x2accec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2accecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2accf0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2accf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2accf4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ACCF4u;
    {
        const bool branch_taken_0x2accf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2accf4) {
            ctx->pc = 0x2ACCF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACCF4u;
            // 0x2accf8: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ACD0Cu;
            goto label_2acd0c;
        }
    }
    ctx->pc = 0x2ACCFCu;
    // 0x2accfc: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x2accfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2acd00: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2acd00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2acd04: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2ACD04u;
    {
        const bool branch_taken_0x2acd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD04u;
            // 0x2acd08: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd04) {
            ctx->pc = 0x2ACDBCu;
            goto label_2acdbc;
        }
    }
    ctx->pc = 0x2ACD0Cu;
label_2acd0c:
    // 0x2acd0c: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x2acd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2acd10: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ACD10u;
    {
        const bool branch_taken_0x2acd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acd10) {
            ctx->pc = 0x2ACD14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD10u;
            // 0x2acd14: 0xac600100  sw          $zero, 0x100($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ACD2Cu;
            goto label_2acd2c;
        }
    }
    ctx->pc = 0x2ACD18u;
    // 0x2acd18: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x2acd18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2acd1c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2acd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2acd20: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x2acd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x2acd24: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2ACD24u;
    {
        const bool branch_taken_0x2acd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD24u;
            // 0x2acd28: 0x2406009a  addiu       $a2, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd24) {
            ctx->pc = 0x2ACD58u;
            goto label_2acd58;
        }
    }
    ctx->pc = 0x2ACD2Cu;
label_2acd2c:
    // 0x2acd2c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2acd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2acd30: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x2acd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2acd34: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2acd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2acd38: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x2acd38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2acd3c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2acd3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd40: 0x1045000a  beq         $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2ACD40u;
    {
        const bool branch_taken_0x2acd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2ACD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD40u;
            // 0x2acd44: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd40) {
            ctx->pc = 0x2ACD6Cu;
            goto label_2acd6c;
        }
    }
    ctx->pc = 0x2ACD48u;
    // 0x2acd48: 0x24110032  addiu       $s1, $zero, 0x32
    ctx->pc = 0x2acd48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2acd4c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2acd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2acd50: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x2acd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x2acd54: 0x2406006f  addiu       $a2, $zero, 0x6F
    ctx->pc = 0x2acd54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_2acd58:
    // 0x2acd58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2acd58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd5c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2ACD5Cu;
    SET_GPR_U32(ctx, 31, 0x2ACD64u);
    ctx->pc = 0x2ACD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD5Cu;
            // 0x2acd60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACD64u; }
        if (ctx->pc != 0x2ACD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACD64u; }
        if (ctx->pc != 0x2ACD64u) { return; }
    }
    ctx->pc = 0x2ACD64u;
label_2acd64:
    // 0x2acd64: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2ACD64u;
    {
        const bool branch_taken_0x2acd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD64u;
            // 0x2acd68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd64) {
            ctx->pc = 0x2ACDA8u;
            goto label_2acda8;
        }
    }
    ctx->pc = 0x2ACD6Cu;
label_2acd6c:
    // 0x2acd6c: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x2acd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2acd70: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2acd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd74: 0xc049c22  jal         func_127088
    ctx->pc = 0x2ACD74u;
    SET_GPR_U32(ctx, 31, 0x2ACD7Cu);
    ctx->pc = 0x2ACD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD74u;
            // 0x2acd78: 0x24a50128  addiu       $a1, $a1, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (runtime->hasFunction(0x127088u)) {
        auto targetFn = runtime->lookupFunction(0x127088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACD7Cu; }
        if (ctx->pc != 0x2ACD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127088_0x127088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACD7Cu; }
        if (ctx->pc != 0x2ACD7Cu) { return; }
    }
    ctx->pc = 0x2ACD7Cu;
label_2acd7c:
    // 0x2acd7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACD7Cu;
    {
        const bool branch_taken_0x2acd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD7Cu;
            // 0x2acd80: 0x24110033  addiu       $s1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd7c) {
            ctx->pc = 0x2ACD8Cu;
            goto label_2acd8c;
        }
    }
    ctx->pc = 0x2ACD84u;
    // 0x2acd84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2ACD84u;
    {
        const bool branch_taken_0x2acd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD84u;
            // 0x2acd88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd84) {
            ctx->pc = 0x2ACDB8u;
            goto label_2acdb8;
        }
    }
    ctx->pc = 0x2ACD8Cu;
label_2acd8c:
    // 0x2acd8c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2acd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2acd90: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x2acd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x2acd94: 0x24060095  addiu       $a2, $zero, 0x95
    ctx->pc = 0x2acd94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x2acd98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2acd98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd9c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2ACD9Cu;
    SET_GPR_U32(ctx, 31, 0x2ACDA4u);
    ctx->pc = 0x2ACDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD9Cu;
            // 0x2acda0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACDA4u; }
        if (ctx->pc != 0x2ACDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACDA4u; }
        if (ctx->pc != 0x2ACDA4u) { return; }
    }
    ctx->pc = 0x2ACDA4u;
label_2acda4:
    // 0x2acda4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2acda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2acda8:
    // 0x2acda8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2acda8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acdac: 0xc0adb7e  jal         func_2B6DF8
    ctx->pc = 0x2ACDACu;
    SET_GPR_U32(ctx, 31, 0x2ACDB4u);
    ctx->pc = 0x2ACDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACDACu;
            // 0x2acdb0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (runtime->hasFunction(0x2B6DF8u)) {
        auto targetFn = runtime->lookupFunction(0x2B6DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACDB4u; }
        if (ctx->pc != 0x2ACDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6DF8_0x2b6df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACDB4u; }
        if (ctx->pc != 0x2ACDB4u) { return; }
    }
    ctx->pc = 0x2ACDB4u;
label_2acdb4:
    // 0x2acdb4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2acdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2acdb8:
    // 0x2acdb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2acdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2acdbc:
    // 0x2acdbc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2acdbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2acdc0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2acdc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acdc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACDC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACDC4u;
            // 0x2acdc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ACDCCu;
    // 0x2acdcc: 0x0  nop
    ctx->pc = 0x2acdccu;
    // NOP
    ctx->pc = 0x2acdd0u;
}
