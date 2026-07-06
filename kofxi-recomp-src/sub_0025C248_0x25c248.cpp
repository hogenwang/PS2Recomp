#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025C248
// Address: 0x25c248 - 0x25c8b8
void sub_0025C248_0x25c248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C248_0x25c248");
#endif

    switch (ctx->pc) {
        case 0x25c2fcu: goto label_25c2fc;
        case 0x25c344u: goto label_25c344;
        case 0x25c358u: goto label_25c358;
        case 0x25c3e4u: goto label_25c3e4;
        case 0x25c45cu: goto label_25c45c;
        case 0x25c46cu: goto label_25c46c;
        case 0x25c490u: goto label_25c490;
        case 0x25c4f0u: goto label_25c4f0;
        case 0x25c50cu: goto label_25c50c;
        case 0x25c51cu: goto label_25c51c;
        case 0x25c52cu: goto label_25c52c;
        case 0x25c5a4u: goto label_25c5a4;
        case 0x25c5bcu: goto label_25c5bc;
        case 0x25c5e4u: goto label_25c5e4;
        case 0x25c5f8u: goto label_25c5f8;
        case 0x25c60cu: goto label_25c60c;
        case 0x25c628u: goto label_25c628;
        case 0x25c64cu: goto label_25c64c;
        case 0x25c65cu: goto label_25c65c;
        case 0x25c6b0u: goto label_25c6b0;
        case 0x25c6e0u: goto label_25c6e0;
        case 0x25c6f0u: goto label_25c6f0;
        case 0x25c70cu: goto label_25c70c;
        case 0x25c71cu: goto label_25c71c;
        case 0x25c73cu: goto label_25c73c;
        case 0x25c744u: goto label_25c744;
        case 0x25c758u: goto label_25c758;
        case 0x25c76cu: goto label_25c76c;
        case 0x25c77cu: goto label_25c77c;
        case 0x25c784u: goto label_25c784;
        case 0x25c798u: goto label_25c798;
        case 0x25c7a0u: goto label_25c7a0;
        case 0x25c7d0u: goto label_25c7d0;
        case 0x25c84cu: goto label_25c84c;
        case 0x25c868u: goto label_25c868;
        case 0x25c884u: goto label_25c884;
        case 0x25c8a4u: goto label_25c8a4;
        default: break;
    }

    ctx->pc = 0x25c248u;

label_25c248:
    // 0x25c248: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x25c248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x25c24c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25c24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25c250: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25c250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25c254: 0xffa500a8  sd          $a1, 0xA8($sp)
    ctx->pc = 0x25c254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 5));
    // 0x25c258: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25c258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c25c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x25c25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x25c260: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25c260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25c264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25c264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25c268: 0xffa600b0  sd          $a2, 0xB0($sp)
    ctx->pc = 0x25c268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 6));
    // 0x25c26c: 0xffa700b8  sd          $a3, 0xB8($sp)
    ctx->pc = 0x25c26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 7));
    // 0x25c270: 0xffa800c0  sd          $t0, 0xC0($sp)
    ctx->pc = 0x25c270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 8));
    // 0x25c274: 0xffa900c8  sd          $t1, 0xC8($sp)
    ctx->pc = 0x25c274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 9));
    // 0x25c278: 0xffaa00d0  sd          $t2, 0xD0($sp)
    ctx->pc = 0x25c278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 10));
    // 0x25c27c: 0xffab00d8  sd          $t3, 0xD8($sp)
    ctx->pc = 0x25c27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 11));
    // 0x25c280: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x25c280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x25c284: 0x8fb200a8  lw          $s2, 0xA8($sp)
    ctx->pc = 0x25c284u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25c288: 0x96230012  lhu         $v1, 0x12($s1)
    ctx->pc = 0x25c288u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x25c28c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x25c28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25c290: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x25C290u;
    {
        const bool branch_taken_0x25c290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C290u;
            // 0x25c294: 0x8e340018  lw          $s4, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c290) {
            ctx->pc = 0x25C2ECu;
            goto label_25c2ec;
        }
    }
    ctx->pc = 0x25C298u;
    // 0x25c298: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x25c298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x25c29c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25C29Cu;
    {
        const bool branch_taken_0x25c29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C29Cu;
            // 0x25c2a0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c29c) {
            ctx->pc = 0x25C2C0u;
            goto label_25c2c0;
        }
    }
    ctx->pc = 0x25C2A4u;
    // 0x25c2a4: 0x2482ffe0  addiu       $v0, $a0, -0x20
    ctx->pc = 0x25c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x25c2a8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x25c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25c2ac: 0x2c42001c  sltiu       $v0, $v0, 0x1C
    ctx->pc = 0x25c2acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x25c2b0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x25C2B0u;
    {
        const bool branch_taken_0x25c2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c2b0) {
            ctx->pc = 0x25C2B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25C2B0u;
            // 0x25c2b4: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25C2D8u;
            goto label_25c2d8;
        }
    }
    ctx->pc = 0x25C2B8u;
    // 0x25c2b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25C2B8u;
    {
        const bool branch_taken_0x25c2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C2B8u;
            // 0x25c2bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c2b8) {
            ctx->pc = 0x25C2F0u;
            goto label_25c2f0;
        }
    }
    ctx->pc = 0x25C2C0u;
label_25c2c0:
    // 0x25c2c0: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x25c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x25c2c4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x25c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25c2c8: 0x2c42001c  sltiu       $v0, $v0, 0x1C
    ctx->pc = 0x25c2c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x25c2cc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x25C2CCu;
    {
        const bool branch_taken_0x25c2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c2cc) {
            ctx->pc = 0x25C2D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25C2CCu;
            // 0x25c2d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25C2F0u;
            goto label_25c2f0;
        }
    }
    ctx->pc = 0x25C2D4u;
    // 0x25c2d4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x25c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_25c2d8:
    // 0x25c2d8: 0x2482ffe4  addiu       $v0, $a0, -0x1C
    ctx->pc = 0x25c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967268));
    // 0x25c2dc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x25c2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x25c2e0: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x25c2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x25c2e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25C2E4u;
    {
        const bool branch_taken_0x25c2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C2E4u;
            // 0x25c2e8: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c2e4) {
            ctx->pc = 0x25C300u;
            goto label_25c300;
        }
    }
    ctx->pc = 0x25C2ECu;
label_25c2ec:
    // 0x25c2ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25c2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25c2f0:
    // 0x25c2f0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x25c2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x25c2f4: 0xc08aa1c  jal         func_22A870
    ctx->pc = 0x25C2F4u;
    SET_GPR_U32(ctx, 31, 0x25C2FCu);
    ctx->pc = 0x25C2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C2F4u;
            // 0x25c2f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A870u;
    if (runtime->hasFunction(0x22A870u)) {
        auto targetFn = runtime->lookupFunction(0x22A870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C2FCu; }
        if (ctx->pc != 0x25C2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A870_0x22a870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C2FCu; }
        if (ctx->pc != 0x25C2FCu) { return; }
    }
    ctx->pc = 0x25C2FCu;
label_25c2fc:
    // 0x25c2fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25c2fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25c300:
    // 0x25c300: 0x12200058  beqz        $s1, . + 4 + (0x58 << 2)
    ctx->pc = 0x25C300u;
    {
        const bool branch_taken_0x25c300 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C300u;
            // 0x25c304: 0x24100069  addiu       $s0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c300) {
            ctx->pc = 0x25C464u;
            goto label_25c464;
        }
    }
    ctx->pc = 0x25C308u;
    // 0x25c308: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x25c308u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x25c30c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x25c30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x25c310: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C310u;
    {
        const bool branch_taken_0x25c310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C310u;
            // 0x25c314: 0x2693001c  addiu       $s3, $s4, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c310) {
            ctx->pc = 0x25C324u;
            goto label_25c324;
        }
    }
    ctx->pc = 0x25C318u;
    // 0x25c318: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x25c318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x25c31c: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x25c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x25c320: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x25c320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_25c324:
    // 0x25c324: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x25c324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x25c328: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x25c328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x25c32c: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x25C32Cu;
    {
        const bool branch_taken_0x25c32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C32Cu;
            // 0x25c330: 0x2410007a  addiu       $s0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c32c) {
            ctx->pc = 0x25C464u;
            goto label_25c464;
        }
    }
    ctx->pc = 0x25C334u;
    // 0x25c334: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x25c334u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25c338: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x25c338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x25c33c: 0xc048c96  jal         func_123258
    ctx->pc = 0x25C33Cu;
    SET_GPR_U32(ctx, 31, 0x25C344u);
    ctx->pc = 0x25C340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C33Cu;
            // 0x25c340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C344u; }
        if (ctx->pc != 0x25C344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C344u; }
        if (ctx->pc != 0x25C344u) { return; }
    }
    ctx->pc = 0x25C344u;
label_25c344:
    // 0x25c344: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x25c344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x25c348: 0x26840008  addiu       $a0, $s4, 0x8
    ctx->pc = 0x25c348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x25c34c: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x25c34cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x25c350: 0xc08a262  jal         func_228988
    ctx->pc = 0x25C350u;
    SET_GPR_U32(ctx, 31, 0x25C358u);
    ctx->pc = 0x25C354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C350u;
            // 0x25c354: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C358u; }
        if (ctx->pc != 0x25C358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C358u; }
        if (ctx->pc != 0x25C358u) { return; }
    }
    ctx->pc = 0x25C358u;
label_25c358:
    // 0x25c358: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x25c358u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x25c35c: 0xa202000a  sb          $v0, 0xA($s0)
    ctx->pc = 0x25c35cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x25c360: 0xa203000b  sb          $v1, 0xB($s0)
    ctx->pc = 0x25c360u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x25c364: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x25c364u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x25c368: 0x8a420047  lwl         $v0, 0x47($s2)
    ctx->pc = 0x25c368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x25c36c: 0x9a420044  lwr         $v0, 0x44($s2)
    ctx->pc = 0x25c36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x25c370: 0xaa02000f  swl         $v0, 0xF($s0)
    ctx->pc = 0x25c370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25c374: 0xba02000c  swr         $v0, 0xC($s0)
    ctx->pc = 0x25c374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25c378: 0x8a42004b  lwl         $v0, 0x4B($s2)
    ctx->pc = 0x25c378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 75); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x25c37c: 0x9a420048  lwr         $v0, 0x48($s2)
    ctx->pc = 0x25c37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 72); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x25c380: 0xaa020013  swl         $v0, 0x13($s0)
    ctx->pc = 0x25c380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25c384: 0xba020010  swr         $v0, 0x10($s0)
    ctx->pc = 0x25c384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25c388: 0x9643001a  lhu         $v1, 0x1A($s2)
    ctx->pc = 0x25c388u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x25c38c: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x25c38cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x25c390: 0x3223a  dsrl        $a0, $v1, 8
    ctx->pc = 0x25c390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 8);
    // 0x25c394: 0xa2030014  sb          $v1, 0x14($s0)
    ctx->pc = 0x25c394u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x25c398: 0xa2040015  sb          $a0, 0x15($s0)
    ctx->pc = 0x25c398u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 4));
    // 0x25c39c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x25c39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x25c3a0: 0x9203000a  lbu         $v1, 0xA($s0)
    ctx->pc = 0x25c3a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x25c3a4: 0x96450018  lhu         $a1, 0x18($s2)
    ctx->pc = 0x25c3a4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x25c3a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25c3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25c3ac: 0xa200001a  sb          $zero, 0x1A($s0)
    ctx->pc = 0x25c3acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 0));
    // 0x25c3b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25c3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25c3b4: 0x51a3a  dsrl        $v1, $a1, 8
    ctx->pc = 0x25c3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) >> 8);
    // 0x25c3b8: 0x2223a  dsrl        $a0, $v0, 8
    ctx->pc = 0x25c3b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 8);
    // 0x25c3bc: 0xa2030017  sb          $v1, 0x17($s0)
    ctx->pc = 0x25c3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 3));
    // 0x25c3c0: 0xa2040019  sb          $a0, 0x19($s0)
    ctx->pc = 0x25c3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 4));
    // 0x25c3c4: 0xa2050016  sb          $a1, 0x16($s0)
    ctx->pc = 0x25c3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 5));
    // 0x25c3c8: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x25c3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x25c3cc: 0xa200001b  sb          $zero, 0x1B($s0)
    ctx->pc = 0x25c3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x25c3d0: 0x8cc216d0  lw          $v0, 0x16D0($a2)
    ctx->pc = 0x25c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5840)));
    // 0x25c3d4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25C3D4u;
    {
        const bool branch_taken_0x25c3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C3D4u;
            // 0x25c3d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c3d4) {
            ctx->pc = 0x25C40Cu;
            goto label_25c40c;
        }
    }
    ctx->pc = 0x25C3DCu;
    // 0x25c3dc: 0xc092d7e  jal         func_24B5F8
    ctx->pc = 0x25C3DCu;
    SET_GPR_U32(ctx, 31, 0x25C3E4u);
    ctx->pc = 0x25C3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C3DCu;
            // 0x25c3e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24B5F8u;
    if (runtime->hasFunction(0x24B5F8u)) {
        auto targetFn = runtime->lookupFunction(0x24B5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C3E4u; }
        if (ctx->pc != 0x25C3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024B5F8_0x24b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C3E4u; }
        if (ctx->pc != 0x25C3E4u) { return; }
    }
    ctx->pc = 0x25C3E4u;
label_25c3e4:
    // 0x25c3e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25c3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c3e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25c3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25c3ec: 0xa204001a  sb          $a0, 0x1A($s0)
    ctx->pc = 0x25c3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 4));
    // 0x25c3f0: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x25c3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x25c3f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25C3F4u;
    {
        const bool branch_taken_0x25c3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C3F4u;
            // 0x25c3f8: 0xa203001b  sb          $v1, 0x1B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c3f4) {
            ctx->pc = 0x25C40Cu;
            goto label_25c40c;
        }
    }
    ctx->pc = 0x25C3FCu;
    // 0x25c3fc: 0x348200ff  ori         $v0, $a0, 0xFF
    ctx->pc = 0x25c3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
    // 0x25c400: 0x346300ff  ori         $v1, $v1, 0xFF
    ctx->pc = 0x25c400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
    // 0x25c404: 0xa202001a  sb          $v0, 0x1A($s0)
    ctx->pc = 0x25c404u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x25c408: 0xa203001b  sb          $v1, 0x1B($s0)
    ctx->pc = 0x25c408u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 3));
label_25c40c:
    // 0x25c40c: 0x13123a  dsrl        $v0, $s3, 8
    ctx->pc = 0x25c40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) >> 8);
    // 0x25c410: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x25c410u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x25c414: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x25c414u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x25c418: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x25c418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x25c41c: 0x24a51708  addiu       $a1, $a1, 0x1708
    ctx->pc = 0x25c41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5896));
    // 0x25c420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25c420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c424: 0x92420040  lbu         $v0, 0x40($s2)
    ctx->pc = 0x25c424u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x25c428: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x25c428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x25c42c: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x25c42cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x25c430: 0x92430039  lbu         $v1, 0x39($s2)
    ctx->pc = 0x25c430u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 57)));
    // 0x25c434: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x25c434u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x25c438: 0xdca20040  ld          $v0, 0x40($a1)
    ctx->pc = 0x25c438u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x25c43c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x25c43cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25c440: 0xfca20040  sd          $v0, 0x40($a1)
    ctx->pc = 0x25c440u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 2));
    // 0x25c444: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x25c444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x25c448: 0x8e480050  lw          $t0, 0x50($s2)
    ctx->pc = 0x25c448u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x25c44c: 0x94670002  lhu         $a3, 0x2($v1)
    ctx->pc = 0x25c44cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x25c450: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x25c450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x25c454: 0xc0942d4  jal         func_250B50
    ctx->pc = 0x25C454u;
    SET_GPR_U32(ctx, 31, 0x25C45Cu);
    ctx->pc = 0x25C458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C454u;
            // 0x25c458: 0x30e70030  andi        $a3, $a3, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
    ctx->pc = 0x250B50u;
    if (runtime->hasFunction(0x250B50u)) {
        auto targetFn = runtime->lookupFunction(0x250B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C45Cu; }
        if (ctx->pc != 0x25C45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00250B50_0x250b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C45Cu; }
        if (ctx->pc != 0x25C45Cu) { return; }
    }
    ctx->pc = 0x25C45Cu;
label_25c45c:
    // 0x25c45c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25C45Cu;
    {
        const bool branch_taken_0x25c45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C45Cu;
            // 0x25c460: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c45c) {
            ctx->pc = 0x25C474u;
            goto label_25c474;
        }
    }
    ctx->pc = 0x25C464u;
label_25c464:
    // 0x25c464: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x25C464u;
    SET_GPR_U32(ctx, 31, 0x25C46Cu);
    ctx->pc = 0x25C468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C464u;
            // 0x25c468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C46Cu; }
        if (ctx->pc != 0x25C46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C46Cu; }
        if (ctx->pc != 0x25C46Cu) { return; }
    }
    ctx->pc = 0x25C46Cu;
label_25c46c:
    // 0x25c46c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25c46cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c470: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x25c470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_25c474:
    // 0x25c474: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x25c474u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25c478: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25c478u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25c47c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25c47cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c480: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25c480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25c484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c488: 0x3e00008  jr          $ra
    ctx->pc = 0x25C488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C488u;
            // 0x25c48c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C490u;
label_25c490:
    // 0x25c490: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25c490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25c494: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x25c494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x25c498: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x25c498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x25c49c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x25c49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x25c4a0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x25c4a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c4a4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x25c4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x25c4a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x25c4a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c4ac: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x25c4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x25c4b0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x25c4b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c4b4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x25c4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x25c4b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x25c4b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c4bc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x25c4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x25c4c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25c4c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c4c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25c4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25c4c8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x25c4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c4cc: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x25c4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x25c4d0: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25C4D0u;
    {
        const bool branch_taken_0x25c4d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x25C4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C4D0u;
            // 0x25c4d4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c4d0) {
            ctx->pc = 0x25C4F8u;
            goto label_25c4f8;
        }
    }
    ctx->pc = 0x25C4D8u;
    // 0x25c4d8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x25c4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x25c4dc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x25c4dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x25c4e0: 0x2c52824  and         $a1, $s6, $a1
    ctx->pc = 0x25c4e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
    // 0x25c4e4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x25c4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c4e8: 0xc0925fc  jal         func_2497F0
    ctx->pc = 0x25C4E8u;
    SET_GPR_U32(ctx, 31, 0x25C4F0u);
    ctx->pc = 0x25C4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C4E8u;
            // 0x25c4ec: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2497F0u;
    if (runtime->hasFunction(0x2497F0u)) {
        auto targetFn = runtime->lookupFunction(0x2497F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C4F0u; }
        if (ctx->pc != 0x25C4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002497F0_0x2497f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C4F0u; }
        if (ctx->pc != 0x25C4F0u) { return; }
    }
    ctx->pc = 0x25C4F0u;
label_25c4f0:
    // 0x25c4f0: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x25C4F0u;
    {
        const bool branch_taken_0x25c4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C4F0u;
            // 0x25c4f4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c4f0) {
            ctx->pc = 0x25C7A8u;
            goto label_25c7a8;
        }
    }
    ctx->pc = 0x25C4F8u;
label_25c4f8:
    // 0x25c4f8: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x25c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x25c4fc: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25C4FCu;
    {
        const bool branch_taken_0x25c4fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x25c4fc) {
            ctx->pc = 0x25C524u;
            goto label_25c524;
        }
    }
    ctx->pc = 0x25C504u;
    // 0x25c504: 0xc092892  jal         func_24A248
    ctx->pc = 0x25C504u;
    SET_GPR_U32(ctx, 31, 0x25C50Cu);
    ctx->pc = 0x25C508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C504u;
            // 0x25c508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24A248u;
    if (runtime->hasFunction(0x24A248u)) {
        auto targetFn = runtime->lookupFunction(0x24A248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C50Cu; }
        if (ctx->pc != 0x25C50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024A248_0x24a248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C50Cu; }
        if (ctx->pc != 0x25C50Cu) { return; }
    }
    ctx->pc = 0x25C50Cu;
label_25c50c:
    // 0x25c50c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25c50cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x25c510: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25c510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c514: 0xc0930c0  jal         func_24C300
    ctx->pc = 0x25C514u;
    SET_GPR_U32(ctx, 31, 0x25C51Cu);
    ctx->pc = 0x25C518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C514u;
            // 0x25c518: 0x248416e0  addiu       $a0, $a0, 0x16E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C300u;
    if (runtime->hasFunction(0x24C300u)) {
        auto targetFn = runtime->lookupFunction(0x24C300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C51Cu; }
        if (ctx->pc != 0x25C51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024C300_0x24c300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C51Cu; }
        if (ctx->pc != 0x25C51Cu) { return; }
    }
    ctx->pc = 0x25C51Cu;
label_25c51c:
    // 0x25c51c: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x25C51Cu;
    {
        const bool branch_taken_0x25c51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C51Cu;
            // 0x25c520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c51c) {
            ctx->pc = 0x25C7A4u;
            goto label_25c7a4;
        }
    }
    ctx->pc = 0x25C524u;
label_25c524:
    // 0x25c524: 0xc08c682  jal         func_231A08
    ctx->pc = 0x25C524u;
    SET_GPR_U32(ctx, 31, 0x25C52Cu);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C52Cu; }
        if (ctx->pc != 0x25C52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C52Cu; }
        if (ctx->pc != 0x25C52Cu) { return; }
    }
    ctx->pc = 0x25C52Cu;
label_25c52c:
    // 0x25c52c: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x25c52cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x25c530: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25C530u;
    {
        const bool branch_taken_0x25c530 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C530u;
            // 0x25c534: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c530) {
            ctx->pc = 0x25C548u;
            goto label_25c548;
        }
    }
    ctx->pc = 0x25C538u;
    // 0x25c538: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C538u;
    {
        const bool branch_taken_0x25c538 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C538u;
            // 0x25c53c: 0x2e620012  sltiu       $v0, $s3, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c538) {
            ctx->pc = 0x25C54Cu;
            goto label_25c54c;
        }
    }
    ctx->pc = 0x25C540u;
    // 0x25c540: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x25C540u;
    {
        const bool branch_taken_0x25c540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C540u;
            // 0x25c544: 0x24150016  addiu       $s5, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c540) {
            ctx->pc = 0x25C798u;
            goto label_25c798;
        }
    }
    ctx->pc = 0x25C548u;
label_25c548:
    // 0x25c548: 0x2e620012  sltiu       $v0, $s3, 0x12
    ctx->pc = 0x25c548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_25c54c:
    // 0x25c54c: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x25C54Cu;
    {
        const bool branch_taken_0x25c54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C54Cu;
            // 0x25c550: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c54c) {
            ctx->pc = 0x25C78Cu;
            goto label_25c78c;
        }
    }
    ctx->pc = 0x25C554u;
    // 0x25c554: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x25c554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x25c558: 0x24427080  addiu       $v0, $v0, 0x7080
    ctx->pc = 0x25c558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28800));
    // 0x25c55c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25c560: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25c560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c564: 0x800008  jr          $a0
    ctx->pc = 0x25C564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25C56Cu: goto label_25c56c;
            case 0x25C5D8u: goto label_25c5d8;
            case 0x25C5ECu: goto label_25c5ec;
            case 0x25C614u: goto label_25c614;
            case 0x25C654u: goto label_25c654;
            case 0x25C664u: goto label_25c664;
            case 0x25C714u: goto label_25c714;
            case 0x25C724u: goto label_25c724;
            case 0x25C72Cu: goto label_25c72c;
            case 0x25C74Cu: goto label_25c74c;
            case 0x25C760u: goto label_25c760;
            case 0x25C774u: goto label_25c774;
            case 0x25C77Cu: goto label_25c77c;
            case 0x25C78Cu: goto label_25c78c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25C56Cu;
label_25c56c:
    // 0x25c56c: 0x1600008a  bnez        $s0, . + 4 + (0x8A << 2)
    ctx->pc = 0x25C56Cu;
    {
        const bool branch_taken_0x25c56c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C56Cu;
            // 0x25c570: 0x2415007f  addiu       $s5, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c56c) {
            ctx->pc = 0x25C798u;
            goto label_25c798;
        }
    }
    ctx->pc = 0x25C574u;
    // 0x25c574: 0xde420088  ld          $v0, 0x88($s2)
    ctx->pc = 0x25c574u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x25c578: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25C578u;
    {
        const bool branch_taken_0x25c578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C578u;
            // 0x25c57c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c578) {
            ctx->pc = 0x25C590u;
            goto label_25c590;
        }
    }
    ctx->pc = 0x25C580u;
    // 0x25c580: 0xde420050  ld          $v0, 0x50($s2)
    ctx->pc = 0x25c580u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x25c584: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25C584u;
    {
        const bool branch_taken_0x25c584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C584u;
            // 0x25c588: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c584) {
            ctx->pc = 0x25C5B0u;
            goto label_25c5b0;
        }
    }
    ctx->pc = 0x25C58Cu;
    // 0x25c58c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_25c590:
    // 0x25c590: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x25c590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x25c594: 0x8c4516d8  lw          $a1, 0x16D8($v0)
    ctx->pc = 0x25c594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5848)));
    // 0x25c598: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25c598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c59c: 0xc08c25a  jal         func_230968
    ctx->pc = 0x25C59Cu;
    SET_GPR_U32(ctx, 31, 0x25C5A4u);
    ctx->pc = 0x25C5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C59Cu;
            // 0x25c5a0: 0x8c6616dc  lw          $a2, 0x16DC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5852)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230968u;
    if (runtime->hasFunction(0x230968u)) {
        auto targetFn = runtime->lookupFunction(0x230968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C5A4u; }
        if (ctx->pc != 0x25C5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230968_0x230968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C5A4u; }
        if (ctx->pc != 0x25C5A4u) { return; }
    }
    ctx->pc = 0x25C5A4u;
label_25c5a4:
    // 0x25c5a4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x25c5a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c5a8: 0x16a0007b  bnez        $s5, . + 4 + (0x7B << 2)
    ctx->pc = 0x25C5A8u;
    {
        const bool branch_taken_0x25c5a8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C5A8u;
            // 0x25c5ac: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c5a8) {
            ctx->pc = 0x25C798u;
            goto label_25c798;
        }
    }
    ctx->pc = 0x25C5B0u;
label_25c5b0:
    // 0x25c5b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25c5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c5b4: 0xc092e56  jal         func_24B958
    ctx->pc = 0x25C5B4u;
    SET_GPR_U32(ctx, 31, 0x25C5BCu);
    ctx->pc = 0x25C5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C5B4u;
            // 0x25c5b8: 0x24a516e0  addiu       $a1, $a1, 0x16E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24B958u;
    if (runtime->hasFunction(0x24B958u)) {
        auto targetFn = runtime->lookupFunction(0x24B958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C5BCu; }
        if (ctx->pc != 0x25C5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024B958_0x24b958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C5BCu; }
        if (ctx->pc != 0x25C5BCu) { return; }
    }
    ctx->pc = 0x25C5BCu;
label_25c5bc:
    // 0x25c5bc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x25c5bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c5c0: 0x16a00075  bnez        $s5, . + 4 + (0x75 << 2)
    ctx->pc = 0x25C5C0u;
    {
        const bool branch_taken_0x25c5c0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C5C0u;
            // 0x25c5c4: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c5c0) {
            ctx->pc = 0x25C798u;
            goto label_25c798;
        }
    }
    ctx->pc = 0x25C5C8u;
    // 0x25c5c8: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x25c5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x25c5cc: 0x90621010  lbu         $v0, 0x1010($v1)
    ctx->pc = 0x25c5ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4112)));
    // 0x25c5d0: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x25C5D0u;
    {
        const bool branch_taken_0x25c5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C5D0u;
            // 0x25c5d4: 0xa2020040  sb          $v0, 0x40($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c5d0) {
            ctx->pc = 0x25C798u;
            goto label_25c798;
        }
    }
    ctx->pc = 0x25C5D8u;
label_25c5d8:
    // 0x25c5d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c5dc: 0xc092e84  jal         func_24BA10
    ctx->pc = 0x25C5DCu;
    SET_GPR_U32(ctx, 31, 0x25C5E4u);
    ctx->pc = 0x25C5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C5DCu;
            // 0x25c5e0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24BA10u;
    if (runtime->hasFunction(0x24BA10u)) {
        auto targetFn = runtime->lookupFunction(0x24BA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C5E4u; }
        if (ctx->pc != 0x25C5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024BA10_0x24ba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C5E4u; }
        if (ctx->pc != 0x25C5E4u) { return; }
    }
    ctx->pc = 0x25C5E4u;
label_25c5e4:
    // 0x25c5e4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x25C5E4u;
    {
        const bool branch_taken_0x25c5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C5E4u;
            // 0x25c5e8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c5e4) {
            ctx->pc = 0x25C798u;
            goto label_25c798;
        }
    }
    ctx->pc = 0x25C5ECu;
label_25c5ec:
    // 0x25c5ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c5f0: 0xc092f2e  jal         func_24BCB8
    ctx->pc = 0x25C5F0u;
    SET_GPR_U32(ctx, 31, 0x25C5F8u);
    ctx->pc = 0x25C5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C5F0u;
            // 0x25c5f4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24BCB8u;
    if (runtime->hasFunction(0x24BCB8u)) {
        auto targetFn = runtime->lookupFunction(0x24BCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C5F8u; }
        if (ctx->pc != 0x25C5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024BCB8_0x24bcb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C5F8u; }
        if (ctx->pc != 0x25C5F8u) { return; }
    }
    ctx->pc = 0x25C5F8u;
label_25c5f8:
    // 0x25c5f8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x25c5f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c5fc: 0x16a00066  bnez        $s5, . + 4 + (0x66 << 2)
    ctx->pc = 0x25C5FCu;
    {
        const bool branch_taken_0x25c5fc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c5fc) {
            ctx->pc = 0x25C798u;
            goto label_25c798;
        }
    }
    ctx->pc = 0x25C604u;
    // 0x25c604: 0xc08c0ee  jal         func_2303B8
    ctx->pc = 0x25C604u;
    SET_GPR_U32(ctx, 31, 0x25C60Cu);
    ctx->pc = 0x25C608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C604u;
            // 0x25c608: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2303B8u;
    if (runtime->hasFunction(0x2303B8u)) {
        auto targetFn = runtime->lookupFunction(0x2303B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C60Cu; }
        if (ctx->pc != 0x25C60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002303B8_0x2303b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C60Cu; }
        if (ctx->pc != 0x25C60Cu) { return; }
    }
    ctx->pc = 0x25C60Cu;
label_25c60c:
    // 0x25c60c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x25C60Cu;
    {
        const bool branch_taken_0x25c60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c60c) {
            ctx->pc = 0x25C798u;
            goto label_25c798;
        }
    }
    ctx->pc = 0x25C614u;
label_25c614:
    // 0x25c614: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x25c614u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x25c618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c61c: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x25c61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x25c620: 0xc092fc0  jal         func_24BF00
    ctx->pc = 0x25C620u;
    SET_GPR_U32(ctx, 31, 0x25C628u);
    ctx->pc = 0x25C624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C620u;
            // 0x25c624: 0xa6420006  sh          $v0, 0x6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24BF00u;
    if (runtime->hasFunction(0x24BF00u)) {
        auto targetFn = runtime->lookupFunction(0x24BF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C628u; }
        if (ctx->pc != 0x25C628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024BF00_0x24bf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C628u; }
        if (ctx->pc != 0x25C628u) { return; }
    }
    ctx->pc = 0x25C628u;
label_25c628:
    // 0x25c628: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25c628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25c62c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c630: 0x244801d0  addiu       $t0, $v0, 0x1D0
    ctx->pc = 0x25c630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    // 0x25c634: 0x89030003  lwl         $v1, 0x3($t0)
    ctx->pc = 0x25c634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x25c638: 0x99030000  lwr         $v1, 0x0($t0)
    ctx->pc = 0x25c638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x25c63c: 0xaa030047  swl         $v1, 0x47($s0)
    ctx->pc = 0x25c63cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25c640: 0xba030044  swr         $v1, 0x44($s0)
    ctx->pc = 0x25c640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25c644: 0xc093234  jal         func_24C8D0
    ctx->pc = 0x25C644u;
    SET_GPR_U32(ctx, 31, 0x25C64Cu);
    ctx->pc = 0x25C648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C644u;
            // 0x25c648: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C8D0u;
    if (runtime->hasFunction(0x24C8D0u)) {
        auto targetFn = runtime->lookupFunction(0x24C8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C64Cu; }
        if (ctx->pc != 0x25C64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024C8D0_0x24c8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C64Cu; }
        if (ctx->pc != 0x25C64Cu) { return; }
    }
    ctx->pc = 0x25C64Cu;
label_25c64c:
    // 0x25c64c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x25C64Cu;
    {
        const bool branch_taken_0x25c64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c64c) {
            ctx->pc = 0x25C798u;
            goto label_25c798;
        }
    }
    ctx->pc = 0x25C654u;
label_25c654:
    // 0x25c654: 0xc08c1f6  jal         func_2307D8
    ctx->pc = 0x25C654u;
    SET_GPR_U32(ctx, 31, 0x25C65Cu);
    ctx->pc = 0x25C658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C654u;
            // 0x25c658: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2307D8u;
    if (runtime->hasFunction(0x2307D8u)) {
        auto targetFn = runtime->lookupFunction(0x2307D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C65Cu; }
        if (ctx->pc != 0x25C65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002307D8_0x2307d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C65Cu; }
        if (ctx->pc != 0x25C65Cu) { return; }
    }
    ctx->pc = 0x25C65Cu;
label_25c65c:
    // 0x25c65c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x25C65Cu;
    {
        const bool branch_taken_0x25c65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c65c) {
            ctx->pc = 0x25C798u;
            goto label_25c798;
        }
    }
    ctx->pc = 0x25C664u;
label_25c664:
    // 0x25c664: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25C664u;
    {
        const bool branch_taken_0x25c664 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c664) {
            ctx->pc = 0x25C680u;
            goto label_25c680;
        }
    }
    ctx->pc = 0x25C66Cu;
    // 0x25c66c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x25c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x25c670: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C670u;
    {
        const bool branch_taken_0x25c670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C670u;
            // 0x25c674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c670) {
            ctx->pc = 0x25C680u;
            goto label_25c680;
        }
    }
    ctx->pc = 0x25C678u;
    // 0x25c678: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x25C678u;
    {
        const bool branch_taken_0x25c678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C678u;
            // 0x25c67c: 0x24150016  addiu       $s5, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c678) {
            ctx->pc = 0x25C734u;
            goto label_25c734;
        }
    }
    ctx->pc = 0x25C680u;
label_25c680:
    // 0x25c680: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x25C680u;
    {
        const bool branch_taken_0x25c680 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C680u;
            // 0x25c684: 0x96420006  lhu         $v0, 0x6($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c680) {
            ctx->pc = 0x25C6C4u;
            goto label_25c6c4;
        }
    }
    ctx->pc = 0x25C688u;
    // 0x25c688: 0x8a030047  lwl         $v1, 0x47($s0)
    ctx->pc = 0x25c688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x25c68c: 0x9a030044  lwr         $v1, 0x44($s0)
    ctx->pc = 0x25c68cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x25c690: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x25c690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25c694: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x25c694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25c698: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x25c698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x25c69c: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x25C69Cu;
    {
        const bool branch_taken_0x25c69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C69Cu;
            // 0x25c6a0: 0x2415007f  addiu       $s5, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c69c) {
            ctx->pc = 0x25C73Cu;
            goto label_25c73c;
        }
    }
    ctx->pc = 0x25C6A4u;
    // 0x25c6a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c6a8: 0xc092f2e  jal         func_24BCB8
    ctx->pc = 0x25C6A8u;
    SET_GPR_U32(ctx, 31, 0x25C6B0u);
    ctx->pc = 0x25C6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C6A8u;
            // 0x25c6ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24BCB8u;
    if (runtime->hasFunction(0x24BCB8u)) {
        auto targetFn = runtime->lookupFunction(0x24BCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C6B0u; }
        if (ctx->pc != 0x25C6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024BCB8_0x24bcb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C6B0u; }
        if (ctx->pc != 0x25C6B0u) { return; }
    }
    ctx->pc = 0x25C6B0u;
label_25c6b0:
    // 0x25c6b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x25c6b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c6b4: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x25C6B4u;
    {
        const bool branch_taken_0x25c6b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C6B4u;
            // 0x25c6b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c6b4) {
            ctx->pc = 0x25C6D8u;
            goto label_25c6d8;
        }
    }
    ctx->pc = 0x25C6BCu;
    // 0x25c6bc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x25C6BCu;
    {
        const bool branch_taken_0x25c6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c6bc) {
            ctx->pc = 0x25C73Cu;
            goto label_25c73c;
        }
    }
    ctx->pc = 0x25C6C4u;
label_25c6c4:
    // 0x25c6c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x25c6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x25c6c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C6C8u;
    {
        const bool branch_taken_0x25c6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C6C8u;
            // 0x25c6cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c6c8) {
            ctx->pc = 0x25C6D8u;
            goto label_25c6d8;
        }
    }
    ctx->pc = 0x25C6D0u;
    // 0x25c6d0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x25C6D0u;
    {
        const bool branch_taken_0x25c6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C6D0u;
            // 0x25c6d4: 0x24150080  addiu       $s5, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c6d0) {
            ctx->pc = 0x25C73Cu;
            goto label_25c73c;
        }
    }
    ctx->pc = 0x25C6D8u;
label_25c6d8:
    // 0x25c6d8: 0xc097092  jal         func_25C248
    ctx->pc = 0x25C6D8u;
    SET_GPR_U32(ctx, 31, 0x25C6E0u);
    ctx->pc = 0x25C6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C6D8u;
            // 0x25c6dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C248u;
    goto label_25c248;
    ctx->pc = 0x25C6E0u;
label_25c6e0:
    // 0x25c6e0: 0x1280002d  beqz        $s4, . + 4 + (0x2D << 2)
    ctx->pc = 0x25C6E0u;
    {
        const bool branch_taken_0x25c6e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C6E0u;
            // 0x25c6e4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c6e0) {
            ctx->pc = 0x25C798u;
            goto label_25c798;
        }
    }
    ctx->pc = 0x25C6E8u;
    // 0x25c6e8: 0xc092fc0  jal         func_24BF00
    ctx->pc = 0x25C6E8u;
    SET_GPR_U32(ctx, 31, 0x25C6F0u);
    ctx->pc = 0x25C6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C6E8u;
            // 0x25c6ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24BF00u;
    if (runtime->hasFunction(0x24BF00u)) {
        auto targetFn = runtime->lookupFunction(0x24BF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C6F0u; }
        if (ctx->pc != 0x25C6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024BF00_0x24bf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C6F0u; }
        if (ctx->pc != 0x25C6F0u) { return; }
    }
    ctx->pc = 0x25C6F0u;
label_25c6f0:
    // 0x25c6f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c6f4: 0x8ba70003  lwl         $a3, 0x3($sp)
    ctx->pc = 0x25c6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x25c6f8: 0x9ba70000  lwr         $a3, 0x0($sp)
    ctx->pc = 0x25c6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x25c6fc: 0xaa070047  swl         $a3, 0x47($s0)
    ctx->pc = 0x25c6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25c700: 0xba070044  swr         $a3, 0x44($s0)
    ctx->pc = 0x25c700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25c704: 0xc093234  jal         func_24C8D0
    ctx->pc = 0x25C704u;
    SET_GPR_U32(ctx, 31, 0x25C70Cu);
    ctx->pc = 0x25C708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C704u;
            // 0x25c708: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C8D0u;
    if (runtime->hasFunction(0x24C8D0u)) {
        auto targetFn = runtime->lookupFunction(0x24C8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C70Cu; }
        if (ctx->pc != 0x25C70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024C8D0_0x24c8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C70Cu; }
        if (ctx->pc != 0x25C70Cu) { return; }
    }
    ctx->pc = 0x25C70Cu;
label_25c70c:
    // 0x25c70c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x25C70Cu;
    {
        const bool branch_taken_0x25c70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c70c) {
            ctx->pc = 0x25C798u;
            goto label_25c798;
        }
    }
    ctx->pc = 0x25C714u;
label_25c714:
    // 0x25c714: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25C714u;
    SET_GPR_U32(ctx, 31, 0x25C71Cu);
    ctx->pc = 0x25C718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C714u;
            // 0x25c718: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C71Cu; }
        if (ctx->pc != 0x25C71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C71Cu; }
        if (ctx->pc != 0x25C71Cu) { return; }
    }
    ctx->pc = 0x25C71Cu;
label_25c71c:
    // 0x25c71c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x25C71Cu;
    {
        const bool branch_taken_0x25c71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C71Cu;
            // 0x25c720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c71c) {
            ctx->pc = 0x25C7A4u;
            goto label_25c7a4;
        }
    }
    ctx->pc = 0x25C724u;
label_25c724:
    // 0x25c724: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x25C724u;
    {
        const bool branch_taken_0x25c724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C724u;
            // 0x25c728: 0x2415005f  addiu       $s5, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c724) {
            ctx->pc = 0x25C798u;
            goto label_25c798;
        }
    }
    ctx->pc = 0x25C72Cu;
label_25c72c:
    // 0x25c72c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25c72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c730: 0x2415005f  addiu       $s5, $zero, 0x5F
    ctx->pc = 0x25c730u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_25c734:
    // 0x25c734: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x25C734u;
    SET_GPR_U32(ctx, 31, 0x25C73Cu);
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C73Cu; }
        if (ctx->pc != 0x25C73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C73Cu; }
        if (ctx->pc != 0x25C73Cu) { return; }
    }
    ctx->pc = 0x25C73Cu;
label_25c73c:
    // 0x25c73c: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x25C73Cu;
    SET_GPR_U32(ctx, 31, 0x25C744u);
    ctx->pc = 0x25C740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C73Cu;
            // 0x25c740: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C744u; }
        if (ctx->pc != 0x25C744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C744u; }
        if (ctx->pc != 0x25C744u) { return; }
    }
    ctx->pc = 0x25C744u;
label_25c744:
    // 0x25c744: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25C744u;
    {
        const bool branch_taken_0x25c744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c744) {
            ctx->pc = 0x25C798u;
            goto label_25c798;
        }
    }
    ctx->pc = 0x25C74Cu;
label_25c74c:
    // 0x25c74c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c750: 0xc09300c  jal         func_24C030
    ctx->pc = 0x25C750u;
    SET_GPR_U32(ctx, 31, 0x25C758u);
    ctx->pc = 0x25C754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C750u;
            // 0x25c754: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C030u;
    if (runtime->hasFunction(0x24C030u)) {
        auto targetFn = runtime->lookupFunction(0x24C030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C758u; }
        if (ctx->pc != 0x25C758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024C030_0x24c030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C758u; }
        if (ctx->pc != 0x25C758u) { return; }
    }
    ctx->pc = 0x25C758u;
label_25c758:
    // 0x25c758: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25C758u;
    {
        const bool branch_taken_0x25c758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c758) {
            ctx->pc = 0x25C798u;
            goto label_25c798;
        }
    }
    ctx->pc = 0x25C760u;
label_25c760:
    // 0x25c760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c764: 0xc093028  jal         func_24C0A0
    ctx->pc = 0x25C764u;
    SET_GPR_U32(ctx, 31, 0x25C76Cu);
    ctx->pc = 0x25C768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C764u;
            // 0x25c768: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C0A0u;
    if (runtime->hasFunction(0x24C0A0u)) {
        auto targetFn = runtime->lookupFunction(0x24C0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C76Cu; }
        if (ctx->pc != 0x25C76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024C0A0_0x24c0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C76Cu; }
        if (ctx->pc != 0x25C76Cu) { return; }
    }
    ctx->pc = 0x25C76Cu;
label_25c76c:
    // 0x25c76c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25C76Cu;
    {
        const bool branch_taken_0x25c76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c76c) {
            ctx->pc = 0x25C798u;
            goto label_25c798;
        }
    }
    ctx->pc = 0x25C774u;
label_25c774:
    // 0x25c774: 0xc08c13c  jal         func_2304F0
    ctx->pc = 0x25C774u;
    SET_GPR_U32(ctx, 31, 0x25C77Cu);
    ctx->pc = 0x25C778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C774u;
            // 0x25c778: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2304F0u;
    if (runtime->hasFunction(0x2304F0u)) {
        auto targetFn = runtime->lookupFunction(0x2304F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C77Cu; }
        if (ctx->pc != 0x25C77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002304F0_0x2304f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C77Cu; }
        if (ctx->pc != 0x25C77Cu) { return; }
    }
    ctx->pc = 0x25C77Cu;
label_25c77c:
    // 0x25c77c: 0xc092fda  jal         func_24BF68
    ctx->pc = 0x25C77Cu;
    SET_GPR_U32(ctx, 31, 0x25C784u);
    ctx->pc = 0x25C780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C77Cu;
            // 0x25c780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24BF68u;
    if (runtime->hasFunction(0x24BF68u)) {
        auto targetFn = runtime->lookupFunction(0x24BF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C784u; }
        if (ctx->pc != 0x25C784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024BF68_0x24bf68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C784u; }
        if (ctx->pc != 0x25C784u) { return; }
    }
    ctx->pc = 0x25C784u;
label_25c784:
    // 0x25c784: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25C784u;
    {
        const bool branch_taken_0x25c784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c784) {
            ctx->pc = 0x25C798u;
            goto label_25c798;
        }
    }
    ctx->pc = 0x25C78Cu;
label_25c78c:
    // 0x25c78c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x25c78cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x25c790: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x25C790u;
    SET_GPR_U32(ctx, 31, 0x25C798u);
    ctx->pc = 0x25C794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C790u;
            // 0x25c794: 0x24847068  addiu       $a0, $a0, 0x7068 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C798u; }
        if (ctx->pc != 0x25C798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D780_0x22d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C798u; }
        if (ctx->pc != 0x25C798u) { return; }
    }
    ctx->pc = 0x25C798u;
label_25c798:
    // 0x25c798: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25C798u;
    SET_GPR_U32(ctx, 31, 0x25C7A0u);
    ctx->pc = 0x25C79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C798u;
            // 0x25c79c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C7A0u; }
        if (ctx->pc != 0x25C7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C7A0u; }
        if (ctx->pc != 0x25C7A0u) { return; }
    }
    ctx->pc = 0x25C7A0u;
label_25c7a0:
    // 0x25c7a0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x25c7a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25c7a4:
    // 0x25c7a4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25c7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_25c7a8:
    // 0x25c7a8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x25c7a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25c7ac: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x25c7acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25c7b0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x25c7b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25c7b4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x25c7b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c7b8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x25c7b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25c7bc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x25c7bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25c7c0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x25c7c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c7c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25c7c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x25C7C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C7C8u;
            // 0x25c7cc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C7D0u;
label_25c7d0:
    // 0x25c7d0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x25c7d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c7d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25c7d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25c7d8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x25c7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c7dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25c7e0: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x25c7e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c7e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c7e8: 0x11420003  beq         $t2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C7E8u;
    {
        const bool branch_taken_0x25c7e8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x25C7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C7E8u;
            // 0x25c7ec: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c7e8) {
            ctx->pc = 0x25C7F8u;
            goto label_25c7f8;
        }
    }
    ctx->pc = 0x25C7F0u;
    // 0x25c7f0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x25C7F0u;
    {
        const bool branch_taken_0x25c7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C7F0u;
            // 0x25c7f4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c7f0) {
            ctx->pc = 0x25C8ACu;
            goto label_25c8ac;
        }
    }
    ctx->pc = 0x25C7F8u;
label_25c7f8:
    // 0x25c7f8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x25c7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25c7fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25c800: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x25C800u;
    {
        const bool branch_taken_0x25c800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x25C804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C800u;
            // 0x25c804: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c800) {
            ctx->pc = 0x25C854u;
            goto label_25c854;
        }
    }
    ctx->pc = 0x25C808u;
    // 0x25c808: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25C808u;
    {
        const bool branch_taken_0x25c808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C808u;
            // 0x25c80c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c808) {
            ctx->pc = 0x25C820u;
            goto label_25c820;
        }
    }
    ctx->pc = 0x25C810u;
    // 0x25c810: 0x108a0009  beq         $a0, $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x25C810u;
    {
        const bool branch_taken_0x25c810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 10));
        ctx->pc = 0x25C814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C810u;
            // 0x25c814: 0x2402006d  addiu       $v0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c810) {
            ctx->pc = 0x25C838u;
            goto label_25c838;
        }
    }
    ctx->pc = 0x25C818u;
    // 0x25c818: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x25C818u;
    {
        const bool branch_taken_0x25c818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C818u;
            // 0x25c81c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c818) {
            ctx->pc = 0x25C8B0u;
            goto label_25c8b0;
        }
    }
    ctx->pc = 0x25C820u;
label_25c820:
    // 0x25c820: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25C820u;
    {
        const bool branch_taken_0x25c820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x25C824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C820u;
            // 0x25c824: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c820) {
            ctx->pc = 0x25C870u;
            goto label_25c870;
        }
    }
    ctx->pc = 0x25C828u;
    // 0x25c828: 0x10820018  beq         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25C828u;
    {
        const bool branch_taken_0x25c828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x25C82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C828u;
            // 0x25c82c: 0x2402006d  addiu       $v0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c828) {
            ctx->pc = 0x25C88Cu;
            goto label_25c88c;
        }
    }
    ctx->pc = 0x25C830u;
    // 0x25c830: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x25C830u;
    {
        const bool branch_taken_0x25c830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C830u;
            // 0x25c834: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c830) {
            ctx->pc = 0x25C8B0u;
            goto label_25c8b0;
        }
    }
    ctx->pc = 0x25C838u;
label_25c838:
    // 0x25c838: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x25c838u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x25c83c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x25c83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c840: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x25c840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c844: 0xc08c724  jal         func_231C90
    ctx->pc = 0x25C844u;
    SET_GPR_U32(ctx, 31, 0x25C84Cu);
    ctx->pc = 0x25C848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C844u;
            // 0x25c848: 0x250816d0  addiu       $t0, $t0, 0x16D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231C90u;
    if (runtime->hasFunction(0x231C90u)) {
        auto targetFn = runtime->lookupFunction(0x231C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C84Cu; }
        if (ctx->pc != 0x25C84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231C90_0x231c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C84Cu; }
        if (ctx->pc != 0x25C84Cu) { return; }
    }
    ctx->pc = 0x25C84Cu;
label_25c84c:
    // 0x25c84c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25C84Cu;
    {
        const bool branch_taken_0x25c84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C84Cu;
            // 0x25c850: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c84c) {
            ctx->pc = 0x25C8B0u;
            goto label_25c8b0;
        }
    }
    ctx->pc = 0x25C854u;
label_25c854:
    // 0x25c854: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x25c854u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x25c858: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x25c858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c85c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x25c85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c860: 0xc08c724  jal         func_231C90
    ctx->pc = 0x25C860u;
    SET_GPR_U32(ctx, 31, 0x25C868u);
    ctx->pc = 0x25C864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C860u;
            // 0x25c864: 0x250816d8  addiu       $t0, $t0, 0x16D8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231C90u;
    if (runtime->hasFunction(0x231C90u)) {
        auto targetFn = runtime->lookupFunction(0x231C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C868u; }
        if (ctx->pc != 0x25C868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231C90_0x231c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C868u; }
        if (ctx->pc != 0x25C868u) { return; }
    }
    ctx->pc = 0x25C868u;
label_25c868:
    // 0x25c868: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x25C868u;
    {
        const bool branch_taken_0x25c868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C868u;
            // 0x25c86c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c868) {
            ctx->pc = 0x25C8B0u;
            goto label_25c8b0;
        }
    }
    ctx->pc = 0x25C870u;
label_25c870:
    // 0x25c870: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x25c870u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x25c874: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x25c874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c878: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x25c878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c87c: 0xc08c724  jal         func_231C90
    ctx->pc = 0x25C87Cu;
    SET_GPR_U32(ctx, 31, 0x25C884u);
    ctx->pc = 0x25C880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C87Cu;
            // 0x25c880: 0x250816dc  addiu       $t0, $t0, 0x16DC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5852));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231C90u;
    if (runtime->hasFunction(0x231C90u)) {
        auto targetFn = runtime->lookupFunction(0x231C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C884u; }
        if (ctx->pc != 0x25C884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231C90_0x231c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C884u; }
        if (ctx->pc != 0x25C884u) { return; }
    }
    ctx->pc = 0x25C884u;
label_25c884:
    // 0x25c884: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25C884u;
    {
        const bool branch_taken_0x25c884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C884u;
            // 0x25c888: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c884) {
            ctx->pc = 0x25C8B0u;
            goto label_25c8b0;
        }
    }
    ctx->pc = 0x25C88Cu;
label_25c88c:
    // 0x25c88c: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x25c88cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x25c890: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x25c890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c894: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x25c894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c898: 0x24e71708  addiu       $a3, $a3, 0x1708
    ctx->pc = 0x25c898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5896));
    // 0x25c89c: 0xc08c832  jal         func_2320C8
    ctx->pc = 0x25C89Cu;
    SET_GPR_U32(ctx, 31, 0x25C8A4u);
    ctx->pc = 0x25C8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C89Cu;
            // 0x25c8a0: 0x24080048  addiu       $t0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2320C8u;
    if (runtime->hasFunction(0x2320C8u)) {
        auto targetFn = runtime->lookupFunction(0x2320C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C8A4u; }
        if (ctx->pc != 0x25C8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002320C8_0x2320c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C8A4u; }
        if (ctx->pc != 0x25C8A4u) { return; }
    }
    ctx->pc = 0x25C8A4u;
label_25c8a4:
    // 0x25c8a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25C8A4u;
    {
        const bool branch_taken_0x25c8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C8A4u;
            // 0x25c8a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c8a4) {
            ctx->pc = 0x25C8B0u;
            goto label_25c8b0;
        }
    }
    ctx->pc = 0x25C8ACu;
label_25c8ac:
    // 0x25c8ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25c8b0:
    // 0x25c8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x25C8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C8B0u;
            // 0x25c8b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C8B8u;
    ctx->pc = 0x25c8b8u;
}
