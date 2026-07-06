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

// Function: sub_002C71D0
// Address: 0x2c71d0 - 0x2c7288
void sub_002C71D0_0x2c71d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C71D0_0x2c71d0");
#endif

    switch (ctx->pc) {
        case 0x2c71d0u: goto label_2c71d0;
        case 0x2c71d4u: goto label_2c71d4;
        case 0x2c71d8u: goto label_2c71d8;
        case 0x2c71dcu: goto label_2c71dc;
        case 0x2c71e0u: goto label_2c71e0;
        case 0x2c71e4u: goto label_2c71e4;
        case 0x2c71e8u: goto label_2c71e8;
        case 0x2c71ecu: goto label_2c71ec;
        case 0x2c71f0u: goto label_2c71f0;
        case 0x2c71f4u: goto label_2c71f4;
        case 0x2c71f8u: goto label_2c71f8;
        case 0x2c71fcu: goto label_2c71fc;
        case 0x2c7200u: goto label_2c7200;
        case 0x2c7204u: goto label_2c7204;
        case 0x2c7208u: goto label_2c7208;
        case 0x2c720cu: goto label_2c720c;
        case 0x2c7210u: goto label_2c7210;
        case 0x2c7214u: goto label_2c7214;
        case 0x2c7218u: goto label_2c7218;
        case 0x2c721cu: goto label_2c721c;
        case 0x2c7220u: goto label_2c7220;
        case 0x2c7224u: goto label_2c7224;
        case 0x2c7228u: goto label_2c7228;
        case 0x2c722cu: goto label_2c722c;
        case 0x2c7230u: goto label_2c7230;
        case 0x2c7234u: goto label_2c7234;
        case 0x2c7238u: goto label_2c7238;
        case 0x2c723cu: goto label_2c723c;
        case 0x2c7240u: goto label_2c7240;
        case 0x2c7244u: goto label_2c7244;
        case 0x2c7248u: goto label_2c7248;
        case 0x2c724cu: goto label_2c724c;
        case 0x2c7250u: goto label_2c7250;
        case 0x2c7254u: goto label_2c7254;
        case 0x2c7258u: goto label_2c7258;
        case 0x2c725cu: goto label_2c725c;
        case 0x2c7260u: goto label_2c7260;
        case 0x2c7264u: goto label_2c7264;
        case 0x2c7268u: goto label_2c7268;
        case 0x2c726cu: goto label_2c726c;
        case 0x2c7270u: goto label_2c7270;
        case 0x2c7274u: goto label_2c7274;
        case 0x2c7278u: goto label_2c7278;
        case 0x2c727cu: goto label_2c727c;
        case 0x2c7280u: goto label_2c7280;
        case 0x2c7284u: goto label_2c7284;
        default: break;
    }

    ctx->pc = 0x2c71d0u;

label_2c71d0:
    // 0x2c71d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c71d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c71d4:
    // 0x2c71d4: 0x2402021b  addiu       $v0, $zero, 0x21B
    ctx->pc = 0x2c71d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 539));
label_2c71d8:
    // 0x2c71d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c71d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2c71dc:
    // 0x2c71dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c71dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c71e0:
    // 0x2c71e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c71e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c71e4:
    // 0x2c71e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c71e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c71e8:
    // 0x2c71e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c71e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c71ec:
    // 0x2c71ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c71ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c71f0:
    // 0x2c71f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c71f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2c71f4:
    // 0x2c71f4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2c71f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c71f8:
    // 0x2c71f8: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_2c71fc:
    if (ctx->pc == 0x2C71FCu) {
        ctx->pc = 0x2C71FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C71F8u;
        // 0x2c71fc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7200u;
        goto label_2c7200;
    }
    ctx->pc = 0x2C71F8u;
    {
        const bool branch_taken_0x2c71f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C71FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C71F8u;
        // 0x2c71fc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c71f8) {
            ctx->pc = 0x2C7244u;
            goto label_2c7244;
        }
    }
    ctx->pc = 0x2C7200u;
label_2c7200:
    // 0x2c7200: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c7200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c7204:
    // 0x2c7204: 0xc0b3c92  jal         func_2CF248
label_2c7208:
    if (ctx->pc == 0x2C7208u) {
        ctx->pc = 0x2C7208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7204u;
        // 0x2c7208: 0x24a57260  addiu       $a1, $a1, 0x7260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C720Cu;
        goto label_2c720c;
    }
    ctx->pc = 0x2C7204u;
    SET_GPR_U32(ctx, 31, 0x2C720Cu);
    ctx->pc = 0x2C7208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7204u;
    // 0x2c7208: 0x24a57260  addiu       $a1, $a1, 0x7260 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF248u, 0x2C7204u, 0x2C720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C720Cu;
label_2c720c:
    // 0x2c720c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c720cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7210:
    // 0x2c7210: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c7210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7214:
    // 0x2c7214: 0x2402021a  addiu       $v0, $zero, 0x21A
    ctx->pc = 0x2c7214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 538));
label_2c7218:
    // 0x2c7218: 0x38830202  xori        $v1, $a0, 0x202
    ctx->pc = 0x2c7218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)514);
label_2c721c:
    // 0x2c721c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c721cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7220:
    // 0x2c7220: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2c7220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c7224:
    // 0x2c7224: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_2c7228:
    if (ctx->pc == 0x2C7228u) {
        ctx->pc = 0x2C7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7224u;
        // 0x2c7228: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C722Cu;
        goto label_2c722c;
    }
    ctx->pc = 0x2C7224u;
    {
        const bool branch_taken_0x2c7224 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7224u;
        // 0x2c7228: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7224) {
            ctx->pc = 0x2C7244u;
            goto label_2c7244;
        }
    }
    ctx->pc = 0x2C722Cu;
label_2c722c:
    // 0x2c722c: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x2c722cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_2c7230:
    // 0x2c7230: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2c7230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2c7234:
    // 0x2c7234: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c7234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7238:
    // 0x2c7238: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c7238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c723c:
    // 0x2c723c: 0x40f809  jalr        $v0
label_2c7240:
    if (ctx->pc == 0x2C7240u) {
        ctx->pc = 0x2C7244u;
        goto label_2c7244;
    }
    ctx->pc = 0x2C723Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C7244u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C723Cu, 0x2C7244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C7244u;
label_2c7244:
    // 0x2c7244: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c7244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7248:
    // 0x2c7248: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c7248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c724c:
    // 0x2c724c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c724cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7250:
    // 0x2c7250: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c7250u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c7254:
    // 0x2c7254: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c7254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c7258:
    // 0x2c7258: 0x3e00008  jr          $ra
label_2c725c:
    if (ctx->pc == 0x2C725Cu) {
        ctx->pc = 0x2C725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7258u;
        // 0x2c725c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7260u;
        goto label_2c7260;
    }
    ctx->pc = 0x2C7258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7258u;
        // 0x2c725c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7260u;
label_2c7260:
    // 0x2c7260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c7260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c7264:
    // 0x2c7264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c7264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c7268:
    // 0x2c7268: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2c7268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2c726c:
    // 0x2c726c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c726cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c7270:
    // 0x2c7270: 0x60f809  jalr        $v1
label_2c7274:
    if (ctx->pc == 0x2C7274u) {
        ctx->pc = 0x2C7278u;
        goto label_2c7278;
    }
    ctx->pc = 0x2C7270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2C7278u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7270u, 0x2C7278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C7278u;
label_2c7278:
    // 0x2c7278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c7278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c727c:
    // 0x2c727c: 0x3e00008  jr          $ra
label_2c7280:
    if (ctx->pc == 0x2C7280u) {
        ctx->pc = 0x2C7280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C727Cu;
        // 0x2c7280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7284u;
        goto label_2c7284;
    }
    ctx->pc = 0x2C727Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C727Cu;
        // 0x2c7280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C727Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7284u;
label_2c7284:
    // 0x2c7284: 0x0  nop
    ctx->pc = 0x2c7284u;
    // NOP
    if (ctx->pc == 0x2c7284u) { ctx->pc = 0x2c7288u; }
}
