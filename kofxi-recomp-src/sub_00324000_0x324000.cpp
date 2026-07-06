#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00324000
// Address: 0x324000 - 0x324230
void sub_00324000_0x324000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324000_0x324000");
#endif

    switch (ctx->pc) {
        case 0x3240f0u: goto label_3240f0;
        case 0x324108u: goto label_324108;
        default: break;
    }

    ctx->pc = 0x324000u;

    // 0x324000: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x324000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x324004: 0x71c3c  dsll32      $v1, $a3, 16
    ctx->pc = 0x324004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
    // 0x324008: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x324008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x32400c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32400cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x324010: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x324010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x324014: 0x33843  sra         $a3, $v1, 1
    ctx->pc = 0x324014u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
    // 0x324018: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x324018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x32401c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x32401cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324020: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x324020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x324024: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x324024u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324028: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x324028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x32402c: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x32402cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324030: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x324030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x324034: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x324034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324038: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x324038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32403c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x32403cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x324040: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x324040u;
    {
        const bool branch_taken_0x324040 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x324044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324040u;
            // 0x324044: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x324040) {
            ctx->pc = 0x324050u;
            goto label_324050;
        }
    }
    ctx->pc = 0x324048u;
    // 0x324048: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x324048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32404c: 0x33843  sra         $a3, $v1, 1
    ctx->pc = 0x32404cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
label_324050:
    // 0x324050: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x324050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x324054: 0x81c3c  dsll32      $v1, $t0, 16
    ctx->pc = 0x324054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 16));
    // 0x324058: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x324058u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x32405c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32405cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x324060: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x324060u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x324064: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x324064u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
    // 0x324068: 0x48c3c  dsll32      $s1, $a0, 16
    ctx->pc = 0x324068u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) << (32 + 16));
    // 0x32406c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32406Cu;
    {
        const bool branch_taken_0x32406c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x324070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32406Cu;
            // 0x324070: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32406c) {
            ctx->pc = 0x32407Cu;
            goto label_32407c;
        }
    }
    ctx->pc = 0x324074u;
    // 0x324074: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x324074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x324078: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x324078u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
label_32407c:
    // 0x32407c: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x32407cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x324080: 0x97a40080  lhu         $a0, 0x80($sp)
    ctx->pc = 0x324080u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x324084: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x324084u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x324088: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x324088u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x32408c: 0x5843c  dsll32      $s0, $a1, 16
    ctx->pc = 0x32408cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 16));
    // 0x324090: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x324090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x324094: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x324094u;
    {
        const bool branch_taken_0x324094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x324098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324094u;
            // 0x324098: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324094) {
            ctx->pc = 0x3240E4u;
            goto label_3240e4;
        }
    }
    ctx->pc = 0x32409Cu;
    // 0x32409c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32409cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3240a0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3240A0u;
    {
        const bool branch_taken_0x3240a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3240a0) {
            ctx->pc = 0x3240B8u;
            goto label_3240b8;
        }
    }
    ctx->pc = 0x3240A8u;
    // 0x3240a8: 0x5080001b  beql        $a0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x3240A8u;
    {
        const bool branch_taken_0x3240a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3240a8) {
            ctx->pc = 0x3240ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3240A8u;
            // 0x3240ac: 0x3244ffff  andi        $a0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x324118u;
            goto label_324118;
        }
    }
    ctx->pc = 0x3240B0u;
    // 0x3240b0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3240B0u;
    {
        const bool branch_taken_0x3240b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3240b0) {
            ctx->pc = 0x324114u;
            goto label_324114;
        }
    }
    ctx->pc = 0x3240B8u;
label_3240b8:
    // 0x3240b8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3240b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x3240bc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3240bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3240c0: 0x8484db30  lh          $a0, -0x24D0($a0)
    ctx->pc = 0x3240c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294957872)));
    // 0x3240c4: 0x8463db2c  lh          $v1, -0x24D4($v1)
    ctx->pc = 0x3240c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957868)));
    // 0x3240c8: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3240c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x3240cc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3240ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3240d0: 0x48c3c  dsll32      $s1, $a0, 16
    ctx->pc = 0x3240d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3240d4: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x3240d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3240d8: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x3240d8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x3240dc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3240DCu;
    {
        const bool branch_taken_0x3240dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3240E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3240DCu;
            // 0x3240e0: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3240dc) {
            ctx->pc = 0x324114u;
            goto label_324114;
        }
    }
    ctx->pc = 0x3240E4u;
label_3240e4:
    // 0x3240e4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3240e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3240e8: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x3240E8u;
    SET_GPR_U32(ctx, 31, 0x3240F0u);
    ctx->pc = 0x3240ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3240E8u;
            // 0x3240ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3240F0u; }
        if (ctx->pc != 0x3240F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151AF0_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3240F0u; }
        if (ctx->pc != 0x3240F0u) { return; }
    }
    ctx->pc = 0x3240F0u;
label_3240f0:
    // 0x3240f0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3240f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3240f4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3240f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3240f8: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x3240f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3240fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3240fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324100: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x324100u;
    SET_GPR_U32(ctx, 31, 0x324108u);
    ctx->pc = 0x324104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324100u;
            // 0x324104: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (runtime->hasFunction(0x151AF0u)) {
        auto targetFn = runtime->lookupFunction(0x151AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324108u; }
        if (ctx->pc != 0x324108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151AF0_0x151af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324108u; }
        if (ctx->pc != 0x324108u) { return; }
    }
    ctx->pc = 0x324108u;
label_324108:
    // 0x324108: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x324108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32410c: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x32410cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x324110: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x324110u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_324114:
    // 0x324114: 0x3244ffff  andi        $a0, $s2, 0xFFFF
    ctx->pc = 0x324114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_324118:
    // 0x324118: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x324118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x32411c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x32411Cu;
    {
        const bool branch_taken_0x32411c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32411c) {
            ctx->pc = 0x324120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32411Cu;
            // 0x324120: 0x11343c  dsll32      $a2, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x324144u;
            goto label_324144;
        }
    }
    ctx->pc = 0x324124u;
    // 0x324124: 0x113c3c  dsll32      $a3, $s1, 16
    ctx->pc = 0x324124u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) << (32 + 16));
    // 0x324128: 0x141c3c  dsll32      $v1, $s4, 16
    ctx->pc = 0x324128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 16));
    // 0x32412c: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x32412cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x324130: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x324130u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x324134: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x324134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x324138: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x324138u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32413c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32413Cu;
    {
        const bool branch_taken_0x32413c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32413Cu;
            // 0x324140: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32413c) {
            ctx->pc = 0x32415Cu;
            goto label_32415c;
        }
    }
    ctx->pc = 0x324144u;
label_324144:
    // 0x324144: 0x141c3c  dsll32      $v1, $s4, 16
    ctx->pc = 0x324144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 16));
    // 0x324148: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x324148u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32414c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32414cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x324150: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x324150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x324154: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x324154u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x324158: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x324158u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_32415c:
    // 0x32415c: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x32415cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x324160: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x324160u;
    {
        const bool branch_taken_0x324160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x324160) {
            ctx->pc = 0x324164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x324160u;
            // 0x324164: 0x10243c  dsll32      $a0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x324188u;
            goto label_324188;
        }
    }
    ctx->pc = 0x324168u;
    // 0x324168: 0x102c3c  dsll32      $a1, $s0, 16
    ctx->pc = 0x324168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
    // 0x32416c: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x32416cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x324170: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x324170u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x324174: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x324174u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x324178: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x324178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x32417c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x32417cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x324180: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x324180u;
    {
        const bool branch_taken_0x324180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324180u;
            // 0x324184: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324180) {
            ctx->pc = 0x3241A0u;
            goto label_3241a0;
        }
    }
    ctx->pc = 0x324188u;
label_324188:
    // 0x324188: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x324188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x32418c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x32418cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x324190: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x324190u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x324194: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x324194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x324198: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x324198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32419c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x32419cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_3241a0:
    // 0x3241a0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3241a0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3241a4: 0x0  nop
    ctx->pc = 0x3241a4u;
    // NOP
    // 0x3241a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3241a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3241ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3241acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3241b0: 0x0  nop
    ctx->pc = 0x3241b0u;
    // NOP
    // 0x3241b4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3241b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3241b8: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x3241b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x3241bc: 0xe6a20004  swc1        $f2, 0x4($s5)
    ctx->pc = 0x3241bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x3241c0: 0xe6b40008  swc1        $f20, 0x8($s5)
    ctx->pc = 0x3241c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x3241c4: 0xe6a1001c  swc1        $f1, 0x1C($s5)
    ctx->pc = 0x3241c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
    // 0x3241c8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3241c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3241cc: 0x0  nop
    ctx->pc = 0x3241ccu;
    // NOP
    // 0x3241d0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3241d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3241d4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3241d4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3241d8: 0x0  nop
    ctx->pc = 0x3241d8u;
    // NOP
    // 0x3241dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3241dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3241e0: 0xe6a10020  swc1        $f1, 0x20($s5)
    ctx->pc = 0x3241e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
    // 0x3241e4: 0xe6b40024  swc1        $f20, 0x24($s5)
    ctx->pc = 0x3241e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
    // 0x3241e8: 0xe6a00038  swc1        $f0, 0x38($s5)
    ctx->pc = 0x3241e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x3241ec: 0xe6a2003c  swc1        $f2, 0x3C($s5)
    ctx->pc = 0x3241ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
    // 0x3241f0: 0xe6b40040  swc1        $f20, 0x40($s5)
    ctx->pc = 0x3241f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 64), bits); }
    // 0x3241f4: 0xe6a00054  swc1        $f0, 0x54($s5)
    ctx->pc = 0x3241f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 84), bits); }
    // 0x3241f8: 0xe6a10058  swc1        $f1, 0x58($s5)
    ctx->pc = 0x3241f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 88), bits); }
    // 0x3241fc: 0xe6b4005c  swc1        $f20, 0x5C($s5)
    ctx->pc = 0x3241fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 92), bits); }
    // 0x324200: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x324200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x324204: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x324204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x324208: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x324208u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32420c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x32420cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x324210: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x324210u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x324214: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x324214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324218: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x324218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32421c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32421cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324220: 0x3e00008  jr          $ra
    ctx->pc = 0x324220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324220u;
            // 0x324224: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x324228u;
    // 0x324228: 0x0  nop
    ctx->pc = 0x324228u;
    // NOP
    // 0x32422c: 0x0  nop
    ctx->pc = 0x32422cu;
    // NOP
    ctx->pc = 0x324230u;
}
