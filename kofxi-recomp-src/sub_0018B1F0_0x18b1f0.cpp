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

// Function: sub_0018B1F0
// Address: 0x18b1f0 - 0x18b2a0
void sub_0018B1F0_0x18b1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B1F0_0x18b1f0");
#endif

    switch (ctx->pc) {
        case 0x18b1f0u: goto label_18b1f0;
        case 0x18b1f4u: goto label_18b1f4;
        case 0x18b1f8u: goto label_18b1f8;
        case 0x18b1fcu: goto label_18b1fc;
        case 0x18b200u: goto label_18b200;
        case 0x18b204u: goto label_18b204;
        case 0x18b208u: goto label_18b208;
        case 0x18b20cu: goto label_18b20c;
        case 0x18b210u: goto label_18b210;
        case 0x18b214u: goto label_18b214;
        case 0x18b218u: goto label_18b218;
        case 0x18b21cu: goto label_18b21c;
        case 0x18b220u: goto label_18b220;
        case 0x18b224u: goto label_18b224;
        case 0x18b228u: goto label_18b228;
        case 0x18b22cu: goto label_18b22c;
        case 0x18b230u: goto label_18b230;
        case 0x18b234u: goto label_18b234;
        case 0x18b238u: goto label_18b238;
        case 0x18b23cu: goto label_18b23c;
        case 0x18b240u: goto label_18b240;
        case 0x18b244u: goto label_18b244;
        case 0x18b248u: goto label_18b248;
        case 0x18b24cu: goto label_18b24c;
        case 0x18b250u: goto label_18b250;
        case 0x18b254u: goto label_18b254;
        case 0x18b258u: goto label_18b258;
        case 0x18b25cu: goto label_18b25c;
        case 0x18b260u: goto label_18b260;
        case 0x18b264u: goto label_18b264;
        case 0x18b268u: goto label_18b268;
        case 0x18b26cu: goto label_18b26c;
        case 0x18b270u: goto label_18b270;
        case 0x18b274u: goto label_18b274;
        case 0x18b278u: goto label_18b278;
        case 0x18b27cu: goto label_18b27c;
        case 0x18b280u: goto label_18b280;
        case 0x18b284u: goto label_18b284;
        case 0x18b288u: goto label_18b288;
        case 0x18b28cu: goto label_18b28c;
        case 0x18b290u: goto label_18b290;
        case 0x18b294u: goto label_18b294;
        case 0x18b298u: goto label_18b298;
        case 0x18b29cu: goto label_18b29c;
        default: break;
    }

    ctx->pc = 0x18b1f0u;

label_18b1f0:
    // 0x18b1f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18b1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18b1f4:
    // 0x18b1f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18b1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_18b1f8:
    // 0x18b1f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18b1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_18b1fc:
    // 0x18b1fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18b200:
    // 0x18b200: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18b200u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18b204:
    // 0x18b204: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18b208:
    // 0x18b208: 0xc05087c  jal         func_1421F0
label_18b20c:
    if (ctx->pc == 0x18B20Cu) {
        ctx->pc = 0x18B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B208u;
        // 0x18b20c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B210u;
        goto label_18b210;
    }
    ctx->pc = 0x18B208u;
    SET_GPR_U32(ctx, 31, 0x18B210u);
    ctx->pc = 0x18B20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B208u;
    // 0x18b20c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421F0u, 0x18B208u, 0x18B210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B210u;
label_18b210:
    // 0x18b210: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18b214:
    if (ctx->pc == 0x18B214u) {
        ctx->pc = 0x18B218u;
        goto label_18b218;
    }
    ctx->pc = 0x18B210u;
    {
        const bool branch_taken_0x18b210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b210) {
            ctx->pc = 0x18B228u;
            goto label_18b228;
        }
    }
    ctx->pc = 0x18B218u;
label_18b218:
    // 0x18b218: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x18b218u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
label_18b21c:
    // 0x18b21c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x18b21cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18b220:
    // 0x18b220: 0x10000004  b           . + 4 + (0x4 << 2)
label_18b224:
    if (ctx->pc == 0x18B224u) {
        ctx->pc = 0x18B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B220u;
        // 0x18b224: 0x261040e0  addiu       $s0, $s0, 0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B228u;
        goto label_18b228;
    }
    ctx->pc = 0x18B220u;
    {
        const bool branch_taken_0x18b220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B220u;
        // 0x18b224: 0x261040e0  addiu       $s0, $s0, 0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b220) {
            ctx->pc = 0x18B234u;
            goto label_18b234;
        }
    }
    ctx->pc = 0x18B228u;
label_18b228:
    // 0x18b228: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x18b228u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
label_18b22c:
    // 0x18b22c: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x18b22cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_18b230:
    // 0x18b230: 0x261040c0  addiu       $s0, $s0, 0x40C0
    ctx->pc = 0x18b230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16576));
label_18b234:
    // 0x18b234: 0x1a200010  blez        $s1, . + 4 + (0x10 << 2)
label_18b238:
    if (ctx->pc == 0x18B238u) {
        ctx->pc = 0x18B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B234u;
        // 0x18b238: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B23Cu;
        goto label_18b23c;
    }
    ctx->pc = 0x18B234u;
    {
        const bool branch_taken_0x18b234 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x18B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B234u;
        // 0x18b238: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b234) {
            ctx->pc = 0x18B278u;
            goto label_18b278;
        }
    }
    ctx->pc = 0x18B23Cu;
label_18b23c:
    // 0x18b23c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_18b240:
    // 0x18b240: 0xa052bb60  sb          $s2, -0x44A0($v0)
    ctx->pc = 0x18b240u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294949728), (uint8_t)GPR_U32(ctx, 18));
label_18b244:
    // 0x18b244: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18b244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18b248:
    // 0x18b248: 0x40f809  jalr        $v0
label_18b24c:
    if (ctx->pc == 0x18B24Cu) {
        ctx->pc = 0x18B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B248u;
        // 0x18b24c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B250u;
        goto label_18b250;
    }
    ctx->pc = 0x18B248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18B250u);
        ctx->pc = 0x18B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B248u;
        // 0x18b24c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B248u, 0x18B250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18B250u;
label_18b250:
    // 0x18b250: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18b250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_18b254:
    // 0x18b254: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18b254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18b258:
    // 0x18b258: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18b258u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_18b25c:
    // 0x18b25c: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_18b260:
    if (ctx->pc == 0x18B260u) {
        ctx->pc = 0x18B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B25Cu;
        // 0x18b260: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B264u;
        goto label_18b264;
    }
    ctx->pc = 0x18B25Cu;
    {
        const bool branch_taken_0x18b25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18b25c) {
            ctx->pc = 0x18B260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B25Cu;
            // 0x18b260: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B26Cu;
            goto label_18b26c;
        }
    }
    ctx->pc = 0x18B264u;
label_18b264:
    // 0x18b264: 0x10000006  b           . + 4 + (0x6 << 2)
label_18b268:
    if (ctx->pc == 0x18B268u) {
        ctx->pc = 0x18B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B264u;
        // 0x18b268: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B26Cu;
        goto label_18b26c;
    }
    ctx->pc = 0x18B264u;
    {
        const bool branch_taken_0x18b264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B264u;
        // 0x18b268: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b264) {
            ctx->pc = 0x18B280u;
            goto label_18b280;
        }
    }
    ctx->pc = 0x18B26Cu;
label_18b26c:
    // 0x18b26c: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x18b26cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_18b270:
    // 0x18b270: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_18b274:
    if (ctx->pc == 0x18B274u) {
        ctx->pc = 0x18B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B270u;
        // 0x18b274: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B278u;
        goto label_18b278;
    }
    ctx->pc = 0x18B270u;
    {
        const bool branch_taken_0x18b270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B270u;
        // 0x18b274: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b270) {
            ctx->pc = 0x18B23Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b23c;
        }
    }
    ctx->pc = 0x18B278u;
label_18b278:
    // 0x18b278: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18b278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18b27c:
    // 0x18b27c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18b27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18b280:
    // 0x18b280: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18b280u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18b284:
    // 0x18b284: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18b288:
    // 0x18b288: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18b28c:
    // 0x18b28c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b28cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18b290:
    // 0x18b290: 0x3e00008  jr          $ra
label_18b294:
    if (ctx->pc == 0x18B294u) {
        ctx->pc = 0x18B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B290u;
        // 0x18b294: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B298u;
        goto label_18b298;
    }
    ctx->pc = 0x18B290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B290u;
        // 0x18b294: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B298u;
label_18b298:
    // 0x18b298: 0x0  nop
    ctx->pc = 0x18b298u;
    // NOP
label_18b29c:
    // 0x18b29c: 0x0  nop
    ctx->pc = 0x18b29cu;
    // NOP
}
