#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BADA0
// Address: 0x1bada0 - 0x1baf08
void sub_001BADA0_0x1bada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BADA0_0x1bada0");
#endif

    switch (ctx->pc) {
        case 0x1bada0u: goto label_1bada0;
        case 0x1bada4u: goto label_1bada4;
        case 0x1bada8u: goto label_1bada8;
        case 0x1badacu: goto label_1badac;
        case 0x1badb0u: goto label_1badb0;
        case 0x1badb4u: goto label_1badb4;
        case 0x1badb8u: goto label_1badb8;
        case 0x1badbcu: goto label_1badbc;
        case 0x1badc0u: goto label_1badc0;
        case 0x1badc4u: goto label_1badc4;
        case 0x1badc8u: goto label_1badc8;
        case 0x1badccu: goto label_1badcc;
        case 0x1badd0u: goto label_1badd0;
        case 0x1badd4u: goto label_1badd4;
        case 0x1badd8u: goto label_1badd8;
        case 0x1baddcu: goto label_1baddc;
        case 0x1bade0u: goto label_1bade0;
        case 0x1bade4u: goto label_1bade4;
        case 0x1bade8u: goto label_1bade8;
        case 0x1badecu: goto label_1badec;
        case 0x1badf0u: goto label_1badf0;
        case 0x1badf4u: goto label_1badf4;
        case 0x1badf8u: goto label_1badf8;
        case 0x1badfcu: goto label_1badfc;
        case 0x1bae00u: goto label_1bae00;
        case 0x1bae04u: goto label_1bae04;
        case 0x1bae08u: goto label_1bae08;
        case 0x1bae0cu: goto label_1bae0c;
        case 0x1bae10u: goto label_1bae10;
        case 0x1bae14u: goto label_1bae14;
        case 0x1bae18u: goto label_1bae18;
        case 0x1bae1cu: goto label_1bae1c;
        case 0x1bae20u: goto label_1bae20;
        case 0x1bae24u: goto label_1bae24;
        case 0x1bae28u: goto label_1bae28;
        case 0x1bae2cu: goto label_1bae2c;
        case 0x1bae30u: goto label_1bae30;
        case 0x1bae34u: goto label_1bae34;
        case 0x1bae38u: goto label_1bae38;
        case 0x1bae3cu: goto label_1bae3c;
        case 0x1bae40u: goto label_1bae40;
        case 0x1bae44u: goto label_1bae44;
        case 0x1bae48u: goto label_1bae48;
        case 0x1bae4cu: goto label_1bae4c;
        case 0x1bae50u: goto label_1bae50;
        case 0x1bae54u: goto label_1bae54;
        case 0x1bae58u: goto label_1bae58;
        case 0x1bae5cu: goto label_1bae5c;
        case 0x1bae60u: goto label_1bae60;
        case 0x1bae64u: goto label_1bae64;
        case 0x1bae68u: goto label_1bae68;
        case 0x1bae6cu: goto label_1bae6c;
        case 0x1bae70u: goto label_1bae70;
        case 0x1bae74u: goto label_1bae74;
        case 0x1bae78u: goto label_1bae78;
        case 0x1bae7cu: goto label_1bae7c;
        case 0x1bae80u: goto label_1bae80;
        case 0x1bae84u: goto label_1bae84;
        case 0x1bae88u: goto label_1bae88;
        case 0x1bae8cu: goto label_1bae8c;
        case 0x1bae90u: goto label_1bae90;
        case 0x1bae94u: goto label_1bae94;
        case 0x1bae98u: goto label_1bae98;
        case 0x1bae9cu: goto label_1bae9c;
        case 0x1baea0u: goto label_1baea0;
        case 0x1baea4u: goto label_1baea4;
        case 0x1baea8u: goto label_1baea8;
        case 0x1baeacu: goto label_1baeac;
        case 0x1baeb0u: goto label_1baeb0;
        case 0x1baeb4u: goto label_1baeb4;
        case 0x1baeb8u: goto label_1baeb8;
        case 0x1baebcu: goto label_1baebc;
        case 0x1baec0u: goto label_1baec0;
        case 0x1baec4u: goto label_1baec4;
        case 0x1baec8u: goto label_1baec8;
        case 0x1baeccu: goto label_1baecc;
        case 0x1baed0u: goto label_1baed0;
        case 0x1baed4u: goto label_1baed4;
        case 0x1baed8u: goto label_1baed8;
        case 0x1baedcu: goto label_1baedc;
        case 0x1baee0u: goto label_1baee0;
        case 0x1baee4u: goto label_1baee4;
        case 0x1baee8u: goto label_1baee8;
        case 0x1baeecu: goto label_1baeec;
        case 0x1baef0u: goto label_1baef0;
        case 0x1baef4u: goto label_1baef4;
        case 0x1baef8u: goto label_1baef8;
        case 0x1baefcu: goto label_1baefc;
        case 0x1baf00u: goto label_1baf00;
        case 0x1baf04u: goto label_1baf04;
        default: break;
    }

    ctx->pc = 0x1bada0u;

label_1bada0:
    // 0x1bada0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bada0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1bada4:
    // 0x1bada4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bada4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1bada8:
    // 0x1bada8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bada8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1badac:
    // 0x1badac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1badacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1badb0:
    // 0x1badb0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1badb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1badb4:
    // 0x1badb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1badb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1badb8:
    // 0x1badb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1badb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1badbc:
    // 0x1badbc: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_1badc0:
    if (ctx->pc == 0x1BADC0u) {
        ctx->pc = 0x1BADC0u;
            // 0x1badc0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->pc = 0x1BADC4u;
        goto label_1badc4;
    }
    ctx->pc = 0x1BADBCu;
    {
        const bool branch_taken_0x1badbc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BADC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BADBCu;
            // 0x1badc0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1badbc) {
            ctx->pc = 0x1BADE8u;
            goto label_1bade8;
        }
    }
    ctx->pc = 0x1BADC4u;
label_1badc4:
    // 0x1badc4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1badc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1badc8:
    // 0x1badc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1badc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1badcc:
    // 0x1badcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1badccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1badd0:
    // 0x1badd0: 0x248485d0  addiu       $a0, $a0, -0x7A30
    ctx->pc = 0x1badd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936016));
label_1badd4:
    // 0x1badd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1badd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1badd8:
    // 0x1badd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1badd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1baddc:
    // 0x1baddc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1baddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bade0:
    // 0x1bade0: 0x806ba0a  j           func_1AE828
label_1bade4:
    if (ctx->pc == 0x1BADE4u) {
        ctx->pc = 0x1BADE4u;
            // 0x1bade4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1BADE8u;
        goto label_1bade8;
    }
    ctx->pc = 0x1BADE0u;
    ctx->pc = 0x1BADE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BADE0u;
            // 0x1bade4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BADE8u;
label_1bade8:
    // 0x1bade8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1bade8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1badec:
    // 0x1badec: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1badf0:
    if (ctx->pc == 0x1BADF0u) {
        ctx->pc = 0x1BADF0u;
            // 0x1badf0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BADF4u;
        goto label_1badf4;
    }
    ctx->pc = 0x1BADECu;
    {
        const bool branch_taken_0x1badec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BADF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BADECu;
            // 0x1badf0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1badec) {
            ctx->pc = 0x1BAE08u;
            goto label_1bae08;
        }
    }
    ctx->pc = 0x1BADF4u;
label_1badf4:
    // 0x1badf4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1badf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1badf8:
    // 0x1badf8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1badf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1badfc:
    // 0x1badfc: 0x40f809  jalr        $v0
label_1bae00:
    if (ctx->pc == 0x1BAE00u) {
        ctx->pc = 0x1BAE00u;
            // 0x1bae00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BAE04u;
        goto label_1bae04;
    }
    ctx->pc = 0x1BADFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BAE04u);
        ctx->pc = 0x1BAE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BADFCu;
            // 0x1bae00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BAE04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE04u; }
            if (ctx->pc != 0x1BAE04u) { return; }
        }
        }
    }
    ctx->pc = 0x1BAE04u;
label_1bae04:
    // 0x1bae04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bae04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bae08:
    // 0x1bae08: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x1bae08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1bae0c:
    // 0x1bae0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bae10:
    // 0x1bae10: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
label_1bae14:
    if (ctx->pc == 0x1BAE14u) {
        ctx->pc = 0x1BAE14u;
            // 0x1bae14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BAE18u;
        goto label_1bae18;
    }
    ctx->pc = 0x1BAE10u;
    {
        const bool branch_taken_0x1bae10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE10u;
            // 0x1bae14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae10) {
            ctx->pc = 0x1BAEACu;
            goto label_1baeac;
        }
    }
    ctx->pc = 0x1BAE18u;
label_1bae18:
    // 0x1bae18: 0x8223006c  lb          $v1, 0x6C($s1)
    ctx->pc = 0x1bae18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 108)));
label_1bae1c:
    // 0x1bae1c: 0x54620024  bnel        $v1, $v0, . + 4 + (0x24 << 2)
label_1bae20:
    if (ctx->pc == 0x1BAE20u) {
        ctx->pc = 0x1BAE20u;
            // 0x1bae20: 0xa233006c  sb          $s3, 0x6C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
        ctx->pc = 0x1BAE24u;
        goto label_1bae24;
    }
    ctx->pc = 0x1BAE1Cu;
    {
        const bool branch_taken_0x1bae1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bae1c) {
            ctx->pc = 0x1BAE20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE1Cu;
            // 0x1bae20: 0xa233006c  sb          $s3, 0x6C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BAEB0u;
            goto label_1baeb0;
        }
    }
    ctx->pc = 0x1BAE24u;
label_1bae24:
    // 0x1bae24: 0x56600022  bnel        $s3, $zero, . + 4 + (0x22 << 2)
label_1bae28:
    if (ctx->pc == 0x1BAE28u) {
        ctx->pc = 0x1BAE28u;
            // 0x1bae28: 0xa233006c  sb          $s3, 0x6C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
        ctx->pc = 0x1BAE2Cu;
        goto label_1bae2c;
    }
    ctx->pc = 0x1BAE24u;
    {
        const bool branch_taken_0x1bae24 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bae24) {
            ctx->pc = 0x1BAE28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE24u;
            // 0x1bae28: 0xa233006c  sb          $s3, 0x6C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BAEB0u;
            goto label_1baeb0;
        }
    }
    ctx->pc = 0x1BAE2Cu;
label_1bae2c:
    // 0x1bae2c: 0xc06d82e  jal         func_1B60B8
label_1bae30:
    if (ctx->pc == 0x1BAE30u) {
        ctx->pc = 0x1BAE30u;
            // 0x1bae30: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x1BAE34u;
        goto label_1bae34;
    }
    ctx->pc = 0x1BAE2Cu;
    SET_GPR_U32(ctx, 31, 0x1BAE34u);
    ctx->pc = 0x1BAE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE2Cu;
            // 0x1bae30: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B60B8u;
    if (runtime->hasFunction(0x1B60B8u)) {
        auto targetFn = runtime->lookupFunction(0x1B60B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE34u; }
        if (ctx->pc != 0x1BAE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B60B8_0x1b60b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE34u; }
        if (ctx->pc != 0x1BAE34u) { return; }
    }
    ctx->pc = 0x1BAE34u;
label_1bae34:
    // 0x1bae34: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1bae34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1bae38:
    // 0x1bae38: 0xc06d8d2  jal         func_1B6348
label_1bae3c:
    if (ctx->pc == 0x1BAE3Cu) {
        ctx->pc = 0x1BAE3Cu;
            // 0x1bae3c: 0x509021  addu        $s2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->pc = 0x1BAE40u;
        goto label_1bae40;
    }
    ctx->pc = 0x1BAE38u;
    SET_GPR_U32(ctx, 31, 0x1BAE40u);
    ctx->pc = 0x1BAE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE38u;
            // 0x1bae3c: 0x509021  addu        $s2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6348u;
    if (runtime->hasFunction(0x1B6348u)) {
        auto targetFn = runtime->lookupFunction(0x1B6348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE40u; }
        if (ctx->pc != 0x1BAE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6348_0x1b6348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE40u; }
        if (ctx->pc != 0x1BAE40u) { return; }
    }
    ctx->pc = 0x1BAE40u;
label_1bae40:
    // 0x1bae40: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1bae40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1bae44:
    // 0x1bae44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bae44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bae48:
    // 0x1bae48: 0x260207ff  addiu       $v0, $s0, 0x7FF
    ctx->pc = 0x1bae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2047));
label_1bae4c:
    // 0x1bae4c: 0x26050ffe  addiu       $a1, $s0, 0xFFE
    ctx->pc = 0x1bae4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4094));
label_1bae50:
    // 0x1bae50: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1bae50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_1bae54:
    // 0x1bae54: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1bae54u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_1bae58:
    // 0x1bae58: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x1bae58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_1bae5c:
    // 0x1bae5c: 0xc06d8e4  jal         func_1B6390
label_1bae60:
    if (ctx->pc == 0x1BAE60u) {
        ctx->pc = 0x1BAE60u;
            // 0x1bae60: 0x282c0  sll         $s0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
        ctx->pc = 0x1BAE64u;
        goto label_1bae64;
    }
    ctx->pc = 0x1BAE5Cu;
    SET_GPR_U32(ctx, 31, 0x1BAE64u);
    ctx->pc = 0x1BAE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE5Cu;
            // 0x1bae60: 0x282c0  sll         $s0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6390u;
    if (runtime->hasFunction(0x1B6390u)) {
        auto targetFn = runtime->lookupFunction(0x1B6390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE64u; }
        if (ctx->pc != 0x1BAE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6390_0x1b6390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE64u; }
        if (ctx->pc != 0x1BAE64u) { return; }
    }
    ctx->pc = 0x1BAE64u;
label_1bae64:
    // 0x1bae64: 0x244307ff  addiu       $v1, $v0, 0x7FF
    ctx->pc = 0x1bae64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
label_1bae68:
    // 0x1bae68: 0x24420ffe  addiu       $v0, $v0, 0xFFE
    ctx->pc = 0x1bae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4094));
label_1bae6c:
    // 0x1bae6c: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x1bae6cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_1bae70:
    // 0x1bae70: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x1bae70u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_1bae74:
    // 0x1bae74: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x1bae74u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_1bae78:
    // 0x1bae78: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x1bae78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_1bae7c:
    // 0x1bae7c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1bae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1bae80:
    // 0x1bae80: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
label_1bae84:
    if (ctx->pc == 0x1BAE84u) {
        ctx->pc = 0x1BAE84u;
            // 0x1bae84: 0x2501023  subu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->pc = 0x1BAE88u;
        goto label_1bae88;
    }
    ctx->pc = 0x1BAE80u;
    {
        const bool branch_taken_0x1bae80 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1BAE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE80u;
            // 0x1bae84: 0x2501023  subu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae80) {
            ctx->pc = 0x1BAE90u;
            goto label_1bae90;
        }
    }
    ctx->pc = 0x1BAE88u;
label_1bae88:
    // 0x1bae88: 0x10000008  b           . + 4 + (0x8 << 2)
label_1bae8c:
    if (ctx->pc == 0x1BAE8Cu) {
        ctx->pc = 0x1BAE8Cu;
            // 0x1bae8c: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
        ctx->pc = 0x1BAE90u;
        goto label_1bae90;
    }
    ctx->pc = 0x1BAE88u;
    {
        const bool branch_taken_0x1bae88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE88u;
            // 0x1bae8c: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae88) {
            ctx->pc = 0x1BAEACu;
            goto label_1baeac;
        }
    }
    ctx->pc = 0x1BAE90u;
label_1bae90:
    // 0x1bae90: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1bae94:
    if (ctx->pc == 0x1BAE94u) {
        ctx->pc = 0x1BAE94u;
            // 0x1bae94: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1BAE98u;
        goto label_1bae98;
    }
    ctx->pc = 0x1BAE90u;
    {
        const bool branch_taken_0x1bae90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bae90) {
            ctx->pc = 0x1BAE94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE90u;
            // 0x1bae94: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BAE98u;
            goto label_1bae98;
        }
    }
    ctx->pc = 0x1BAE98u;
label_1bae98:
    // 0x1bae98: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1bae98u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bae9c:
    // 0x1bae9c: 0x1012  mflo        $v0
    ctx->pc = 0x1bae9cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1baea0:
    // 0x1baea0: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1baea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1baea4:
    // 0x1baea4: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1baea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1baea8:
    // 0x1baea8: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x1baea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_1baeac:
    // 0x1baeac: 0xa233006c  sb          $s3, 0x6C($s1)
    ctx->pc = 0x1baeacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
label_1baeb0:
    // 0x1baeb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1baeb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1baeb4:
    // 0x1baeb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1baeb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1baeb8:
    // 0x1baeb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1baeb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1baebc:
    // 0x1baebc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1baebcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1baec0:
    // 0x1baec0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1baec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1baec4:
    // 0x1baec4: 0x3e00008  jr          $ra
label_1baec8:
    if (ctx->pc == 0x1BAEC8u) {
        ctx->pc = 0x1BAEC8u;
            // 0x1baec8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1BAECCu;
        goto label_1baecc;
    }
    ctx->pc = 0x1BAEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAEC4u;
            // 0x1baec8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAECCu;
label_1baecc:
    // 0x1baecc: 0x0  nop
    ctx->pc = 0x1baeccu;
    // NOP
label_1baed0:
    // 0x1baed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1baed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1baed4:
    // 0x1baed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1baed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1baed8:
    // 0x1baed8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1baed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1baedc:
    // 0x1baedc: 0xc06b49a  jal         func_1AD268
label_1baee0:
    if (ctx->pc == 0x1BAEE0u) {
        ctx->pc = 0x1BAEE0u;
            // 0x1baee0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BAEE4u;
        goto label_1baee4;
    }
    ctx->pc = 0x1BAEDCu;
    SET_GPR_U32(ctx, 31, 0x1BAEE4u);
    ctx->pc = 0x1BAEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAEDCu;
            // 0x1baee0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAEE4u; }
        if (ctx->pc != 0x1BAEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAEE4u; }
        if (ctx->pc != 0x1BAEE4u) { return; }
    }
    ctx->pc = 0x1BAEE4u;
label_1baee4:
    // 0x1baee4: 0xc06ebc2  jal         func_1BAF08
label_1baee8:
    if (ctx->pc == 0x1BAEE8u) {
        ctx->pc = 0x1BAEE8u;
            // 0x1baee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BAEECu;
        goto label_1baeec;
    }
    ctx->pc = 0x1BAEE4u;
    SET_GPR_U32(ctx, 31, 0x1BAEECu);
    ctx->pc = 0x1BAEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAEE4u;
            // 0x1baee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BAF08u;
    if (runtime->hasFunction(0x1BAF08u)) {
        auto targetFn = runtime->lookupFunction(0x1BAF08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAEECu; }
        if (ctx->pc != 0x1BAEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAF08_0x1baf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAEECu; }
        if (ctx->pc != 0x1BAEECu) { return; }
    }
    ctx->pc = 0x1BAEECu;
label_1baeec:
    // 0x1baeec: 0xc06b49c  jal         func_1AD270
label_1baef0:
    if (ctx->pc == 0x1BAEF0u) {
        ctx->pc = 0x1BAEF0u;
            // 0x1baef0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BAEF4u;
        goto label_1baef4;
    }
    ctx->pc = 0x1BAEECu;
    SET_GPR_U32(ctx, 31, 0x1BAEF4u);
    ctx->pc = 0x1BAEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAEECu;
            // 0x1baef0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAEF4u; }
        if (ctx->pc != 0x1BAEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAEF4u; }
        if (ctx->pc != 0x1BAEF4u) { return; }
    }
    ctx->pc = 0x1BAEF4u;
label_1baef4:
    // 0x1baef4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1baef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1baef8:
    // 0x1baef8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1baef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1baefc:
    // 0x1baefc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1baefcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1baf00:
    // 0x1baf00: 0x3e00008  jr          $ra
label_1baf04:
    if (ctx->pc == 0x1BAF04u) {
        ctx->pc = 0x1BAF04u;
            // 0x1baf04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BAF08u;
        goto label_fallthrough_0x1baf00;
    }
    ctx->pc = 0x1BAF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF00u;
            // 0x1baf04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1baf00:
    ctx->pc = 0x1BAF08u;
    ctx->pc = 0x1baf08u;
}
