#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CFA38
// Address: 0x2cfa38 - 0x2cfb68
void sub_002CFA38_0x2cfa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFA38_0x2cfa38");
#endif

    switch (ctx->pc) {
        case 0x2cfa38u: goto label_2cfa38;
        case 0x2cfa3cu: goto label_2cfa3c;
        case 0x2cfa40u: goto label_2cfa40;
        case 0x2cfa44u: goto label_2cfa44;
        case 0x2cfa48u: goto label_2cfa48;
        case 0x2cfa4cu: goto label_2cfa4c;
        case 0x2cfa50u: goto label_2cfa50;
        case 0x2cfa54u: goto label_2cfa54;
        case 0x2cfa58u: goto label_2cfa58;
        case 0x2cfa5cu: goto label_2cfa5c;
        case 0x2cfa60u: goto label_2cfa60;
        case 0x2cfa64u: goto label_2cfa64;
        case 0x2cfa68u: goto label_2cfa68;
        case 0x2cfa6cu: goto label_2cfa6c;
        case 0x2cfa70u: goto label_2cfa70;
        case 0x2cfa74u: goto label_2cfa74;
        case 0x2cfa78u: goto label_2cfa78;
        case 0x2cfa7cu: goto label_2cfa7c;
        case 0x2cfa80u: goto label_2cfa80;
        case 0x2cfa84u: goto label_2cfa84;
        case 0x2cfa88u: goto label_2cfa88;
        case 0x2cfa8cu: goto label_2cfa8c;
        case 0x2cfa90u: goto label_2cfa90;
        case 0x2cfa94u: goto label_2cfa94;
        case 0x2cfa98u: goto label_2cfa98;
        case 0x2cfa9cu: goto label_2cfa9c;
        case 0x2cfaa0u: goto label_2cfaa0;
        case 0x2cfaa4u: goto label_2cfaa4;
        case 0x2cfaa8u: goto label_2cfaa8;
        case 0x2cfaacu: goto label_2cfaac;
        case 0x2cfab0u: goto label_2cfab0;
        case 0x2cfab4u: goto label_2cfab4;
        case 0x2cfab8u: goto label_2cfab8;
        case 0x2cfabcu: goto label_2cfabc;
        case 0x2cfac0u: goto label_2cfac0;
        case 0x2cfac4u: goto label_2cfac4;
        case 0x2cfac8u: goto label_2cfac8;
        case 0x2cfaccu: goto label_2cfacc;
        case 0x2cfad0u: goto label_2cfad0;
        case 0x2cfad4u: goto label_2cfad4;
        case 0x2cfad8u: goto label_2cfad8;
        case 0x2cfadcu: goto label_2cfadc;
        case 0x2cfae0u: goto label_2cfae0;
        case 0x2cfae4u: goto label_2cfae4;
        case 0x2cfae8u: goto label_2cfae8;
        case 0x2cfaecu: goto label_2cfaec;
        case 0x2cfaf0u: goto label_2cfaf0;
        case 0x2cfaf4u: goto label_2cfaf4;
        case 0x2cfaf8u: goto label_2cfaf8;
        case 0x2cfafcu: goto label_2cfafc;
        case 0x2cfb00u: goto label_2cfb00;
        case 0x2cfb04u: goto label_2cfb04;
        case 0x2cfb08u: goto label_2cfb08;
        case 0x2cfb0cu: goto label_2cfb0c;
        case 0x2cfb10u: goto label_2cfb10;
        case 0x2cfb14u: goto label_2cfb14;
        case 0x2cfb18u: goto label_2cfb18;
        case 0x2cfb1cu: goto label_2cfb1c;
        case 0x2cfb20u: goto label_2cfb20;
        case 0x2cfb24u: goto label_2cfb24;
        case 0x2cfb28u: goto label_2cfb28;
        case 0x2cfb2cu: goto label_2cfb2c;
        case 0x2cfb30u: goto label_2cfb30;
        case 0x2cfb34u: goto label_2cfb34;
        case 0x2cfb38u: goto label_2cfb38;
        case 0x2cfb3cu: goto label_2cfb3c;
        case 0x2cfb40u: goto label_2cfb40;
        case 0x2cfb44u: goto label_2cfb44;
        case 0x2cfb48u: goto label_2cfb48;
        case 0x2cfb4cu: goto label_2cfb4c;
        case 0x2cfb50u: goto label_2cfb50;
        case 0x2cfb54u: goto label_2cfb54;
        case 0x2cfb58u: goto label_2cfb58;
        case 0x2cfb5cu: goto label_2cfb5c;
        case 0x2cfb60u: goto label_2cfb60;
        case 0x2cfb64u: goto label_2cfb64;
        default: break;
    }

    ctx->pc = 0x2cfa38u;

label_2cfa38:
    // 0x2cfa38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cfa38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cfa3c:
    // 0x2cfa3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cfa3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2cfa40:
    // 0x2cfa40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cfa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2cfa44:
    // 0x2cfa44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cfa44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cfa48:
    // 0x2cfa48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cfa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2cfa4c:
    // 0x2cfa4c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2cfa4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cfa50:
    // 0x2cfa50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cfa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2cfa54:
    // 0x2cfa54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cfa54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cfa58:
    // 0x2cfa58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cfa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cfa5c:
    // 0x2cfa5c: 0xc0b3eda  jal         func_2CFB68
label_2cfa60:
    if (ctx->pc == 0x2CFA60u) {
        ctx->pc = 0x2CFA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA5Cu;
        // 0x2cfa60: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFA64u;
        goto label_2cfa64;
    }
    ctx->pc = 0x2CFA5Cu;
    SET_GPR_U32(ctx, 31, 0x2CFA64u);
    ctx->pc = 0x2CFA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFA5Cu;
    // 0x2cfa60: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFB68u, 0x2CFA5Cu, 0x2CFA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFA64u;
label_2cfa64:
    // 0x2cfa64: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2cfa64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cfa68:
    // 0x2cfa68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cfa68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cfa6c:
    // 0x2cfa6c: 0xc0b60c0  jal         func_2D8300
label_2cfa70:
    if (ctx->pc == 0x2CFA70u) {
        ctx->pc = 0x2CFA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA6Cu;
        // 0x2cfa70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFA74u;
        goto label_2cfa74;
    }
    ctx->pc = 0x2CFA6Cu;
    SET_GPR_U32(ctx, 31, 0x2CFA74u);
    ctx->pc = 0x2CFA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFA6Cu;
    // 0x2cfa70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8300u, 0x2CFA6Cu, 0x2CFA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFA74u;
label_2cfa74:
    // 0x2cfa74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2cfa74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cfa78:
    // 0x2cfa78: 0x24020206  addiu       $v0, $zero, 0x206
    ctx->pc = 0x2cfa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
label_2cfa7c:
    // 0x2cfa7c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2cfa80:
    if (ctx->pc == 0x2CFA80u) {
        ctx->pc = 0x2CFA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA7Cu;
        // 0x2cfa80: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFA84u;
        goto label_2cfa84;
    }
    ctx->pc = 0x2CFA7Cu;
    {
        const bool branch_taken_0x2cfa7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CFA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA7Cu;
        // 0x2cfa80: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfa7c) {
            ctx->pc = 0x2CFA98u;
            goto label_2cfa98;
        }
    }
    ctx->pc = 0x2CFA84u;
label_2cfa84:
    // 0x2cfa84: 0x56000012  bnel        $s0, $zero, . + 4 + (0x12 << 2)
label_2cfa88:
    if (ctx->pc == 0x2CFA88u) {
        ctx->pc = 0x2CFA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA84u;
        // 0x2cfa88: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFA8Cu;
        goto label_2cfa8c;
    }
    ctx->pc = 0x2CFA84u;
    {
        const bool branch_taken_0x2cfa84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfa84) {
            ctx->pc = 0x2CFA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFA84u;
            // 0x2cfa88: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFAD0u;
            goto label_2cfad0;
        }
    }
    ctx->pc = 0x2CFA8Cu;
label_2cfa8c:
    // 0x2cfa8c: 0x10000011  b           . + 4 + (0x11 << 2)
label_2cfa90:
    if (ctx->pc == 0x2CFA90u) {
        ctx->pc = 0x2CFA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA8Cu;
        // 0x2cfa90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFA94u;
        goto label_2cfa94;
    }
    ctx->pc = 0x2CFA8Cu;
    {
        const bool branch_taken_0x2cfa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA8Cu;
        // 0x2cfa90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfa8c) {
            ctx->pc = 0x2CFAD4u;
            goto label_2cfad4;
        }
    }
    ctx->pc = 0x2CFA94u;
label_2cfa94:
    // 0x2cfa94: 0x0  nop
    ctx->pc = 0x2cfa94u;
    // NOP
label_2cfa98:
    // 0x2cfa98: 0x5600000b  bnel        $s0, $zero, . + 4 + (0xB << 2)
label_2cfa9c:
    if (ctx->pc == 0x2CFA9Cu) {
        ctx->pc = 0x2CFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA98u;
        // 0x2cfa9c: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFAA0u;
        goto label_2cfaa0;
    }
    ctx->pc = 0x2CFA98u;
    {
        const bool branch_taken_0x2cfa98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfa98) {
            ctx->pc = 0x2CFA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFA98u;
            // 0x2cfa9c: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFAC8u;
            goto label_2cfac8;
        }
    }
    ctx->pc = 0x2CFAA0u;
label_2cfaa0:
    // 0x2cfaa0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cfaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cfaa4:
    // 0x2cfaa4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cfaa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2cfaa8:
    // 0x2cfaa8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cfaa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cfaac:
    // 0x2cfaac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cfaacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2cfab0:
    // 0x2cfab0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cfab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cfab4:
    // 0x2cfab4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cfab4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cfab8:
    // 0x2cfab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cfab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cfabc:
    // 0x2cfabc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cfabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cfac0:
    // 0x2cfac0: 0x80b3e2e  j           func_2CF8B8
label_2cfac4:
    if (ctx->pc == 0x2CFAC4u) {
        ctx->pc = 0x2CFAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFAC0u;
        // 0x2cfac4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFAC8u;
        goto label_2cfac8;
    }
    ctx->pc = 0x2CFAC0u;
    ctx->pc = 0x2CFAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFAC0u;
    // 0x2cfac4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF8B8u;
    sub_002CF8B8_0x2cf8b8(rdram, ctx, runtime); return;
    ctx->pc = 0x2CFAC8u;
label_2cfac8:
    // 0x2cfac8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cfac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cfacc:
    // 0x2cfacc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2cfaccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2cfad0:
    // 0x2cfad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cfad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cfad4:
    // 0x2cfad4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cfad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2cfad8:
    // 0x2cfad8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cfad8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cfadc:
    // 0x2cfadc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cfadcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2cfae0:
    // 0x2cfae0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cfae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cfae4:
    // 0x2cfae4: 0x3e00008  jr          $ra
label_2cfae8:
    if (ctx->pc == 0x2CFAE8u) {
        ctx->pc = 0x2CFAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFAE4u;
        // 0x2cfae8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFAECu;
        goto label_2cfaec;
    }
    ctx->pc = 0x2CFAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFAE4u;
        // 0x2cfae8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFAECu;
label_2cfaec:
    // 0x2cfaec: 0x0  nop
    ctx->pc = 0x2cfaecu;
    // NOP
label_2cfaf0:
    // 0x2cfaf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cfaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cfaf4:
    // 0x2cfaf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cfaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2cfaf8:
    // 0x2cfaf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cfaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2cfafc:
    // 0x2cfafc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cfafcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cfb00:
    // 0x2cfb00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cfb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2cfb04:
    // 0x2cfb04: 0xc0b3eda  jal         func_2CFB68
label_2cfb08:
    if (ctx->pc == 0x2CFB08u) {
        ctx->pc = 0x2CFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB04u;
        // 0x2cfb08: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFB0Cu;
        goto label_2cfb0c;
    }
    ctx->pc = 0x2CFB04u;
    SET_GPR_U32(ctx, 31, 0x2CFB0Cu);
    ctx->pc = 0x2CFB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFB04u;
    // 0x2cfb08: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFB68u, 0x2CFB04u, 0x2CFB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB0Cu;
label_2cfb0c:
    // 0x2cfb0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cfb0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cfb10:
    // 0x2cfb10: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_2cfb14:
    if (ctx->pc == 0x2CFB14u) {
        ctx->pc = 0x2CFB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB10u;
        // 0x2cfb14: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFB18u;
        goto label_2cfb18;
    }
    ctx->pc = 0x2CFB10u;
    {
        const bool branch_taken_0x2cfb10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfb10) {
            ctx->pc = 0x2CFB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFB10u;
            // 0x2cfb14: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFB54u;
            goto label_2cfb54;
        }
    }
    ctx->pc = 0x2CFB18u;
label_2cfb18:
    // 0x2cfb18: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2cfb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2cfb1c:
    // 0x2cfb1c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2cfb20:
    if (ctx->pc == 0x2CFB20u) {
        ctx->pc = 0x2CFB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB1Cu;
        // 0x2cfb20: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFB24u;
        goto label_2cfb24;
    }
    ctx->pc = 0x2CFB1Cu;
    {
        const bool branch_taken_0x2cfb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfb1c) {
            ctx->pc = 0x2CFB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFB1Cu;
            // 0x2cfb20: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFB38u;
            goto label_2cfb38;
        }
    }
    ctx->pc = 0x2CFB24u;
label_2cfb24:
    // 0x2cfb24: 0x40f809  jalr        $v0
label_2cfb28:
    if (ctx->pc == 0x2CFB28u) {
        ctx->pc = 0x2CFB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB24u;
        // 0x2cfb28: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFB2Cu;
        goto label_2cfb2c;
    }
    ctx->pc = 0x2CFB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CFB2Cu);
        ctx->pc = 0x2CFB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB24u;
        // 0x2cfb28: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFB24u, 0x2CFB2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CFB2Cu;
label_2cfb2c:
    // 0x2cfb2c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2cfb30:
    if (ctx->pc == 0x2CFB30u) {
        ctx->pc = 0x2CFB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB2Cu;
        // 0x2cfb30: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFB34u;
        goto label_2cfb34;
    }
    ctx->pc = 0x2CFB2Cu;
    {
        const bool branch_taken_0x2cfb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB2Cu;
        // 0x2cfb30: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfb2c) {
            ctx->pc = 0x2CFB50u;
            goto label_2cfb50;
        }
    }
    ctx->pc = 0x2CFB34u;
label_2cfb34:
    // 0x2cfb34: 0x0  nop
    ctx->pc = 0x2cfb34u;
    // NOP
label_2cfb38:
    // 0x2cfb38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cfb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cfb3c:
    // 0x2cfb3c: 0xc0b608e  jal         func_2D8238
label_2cfb40:
    if (ctx->pc == 0x2CFB40u) {
        ctx->pc = 0x2CFB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB3Cu;
        // 0x2cfb40: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFB44u;
        goto label_2cfb44;
    }
    ctx->pc = 0x2CFB3Cu;
    SET_GPR_U32(ctx, 31, 0x2CFB44u);
    ctx->pc = 0x2CFB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFB3Cu;
    // 0x2cfb40: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8238u, 0x2CFB3Cu, 0x2CFB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB44u;
label_2cfb44:
    // 0x2cfb44: 0xc0b60dc  jal         func_2D8370
label_2cfb48:
    if (ctx->pc == 0x2CFB48u) {
        ctx->pc = 0x2CFB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB44u;
        // 0x2cfb48: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFB4Cu;
        goto label_2cfb4c;
    }
    ctx->pc = 0x2CFB44u;
    SET_GPR_U32(ctx, 31, 0x2CFB4Cu);
    ctx->pc = 0x2CFB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFB44u;
    // 0x2cfb48: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8370u, 0x2CFB44u, 0x2CFB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB4Cu;
label_2cfb4c:
    // 0x2cfb4c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2cfb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2cfb50:
    // 0x2cfb50: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2cfb50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2cfb54:
    // 0x2cfb54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cfb54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cfb58:
    // 0x2cfb58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cfb58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2cfb5c:
    // 0x2cfb5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cfb5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cfb60:
    // 0x2cfb60: 0x3e00008  jr          $ra
label_2cfb64:
    if (ctx->pc == 0x2CFB64u) {
        ctx->pc = 0x2CFB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB60u;
        // 0x2cfb64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFB68u;
        goto label_fallthrough_0x2cfb60;
    }
    ctx->pc = 0x2CFB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB60u;
        // 0x2cfb64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cfb60:
    ctx->pc = 0x2CFB68u;
}
