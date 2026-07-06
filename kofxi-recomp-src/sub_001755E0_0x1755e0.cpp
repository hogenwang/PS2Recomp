#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001755E0
// Address: 0x1755e0 - 0x1756a0
void sub_001755E0_0x1755e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001755E0_0x1755e0");
#endif

    switch (ctx->pc) {
        case 0x175630u: goto label_175630;
        case 0x175640u: goto label_175640;
        case 0x175684u: goto label_175684;
        case 0x175694u: goto label_175694;
        default: break;
    }

    ctx->pc = 0x1755e0u;

    // 0x1755e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1755e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1755e4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1755e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1755e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1755e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1755ec: 0x9063dae0  lbu         $v1, -0x2520($v1)
    ctx->pc = 0x1755ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957792)));
    // 0x1755f0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1755f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1755f4: 0x54600028  bnel        $v1, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x1755F4u;
    {
        const bool branch_taken_0x1755f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1755f4) {
            ctx->pc = 0x1755F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1755F4u;
            // 0x1755f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175698u;
            goto label_175698;
        }
    }
    ctx->pc = 0x1755FCu;
    // 0x1755fc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1755fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x175600: 0x9466dab0  lhu         $a2, -0x2550($v1)
    ctx->pc = 0x175600u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957744)));
    // 0x175604: 0x30c3ff00  andi        $v1, $a2, 0xFF00
    ctx->pc = 0x175604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x175608: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x175608u;
    {
        const bool branch_taken_0x175608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175608) {
            ctx->pc = 0x17560Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175608u;
            // 0x17560c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175648u;
            goto label_175648;
        }
    }
    ctx->pc = 0x175610u;
    // 0x175610: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x175610u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x175614: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x175614u;
    {
        const bool branch_taken_0x175614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175614) {
            ctx->pc = 0x175694u;
            goto label_175694;
        }
    }
    ctx->pc = 0x17561Cu;
    // 0x17561c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x17561cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x175620: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x175620u;
    {
        const bool branch_taken_0x175620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175620) {
            ctx->pc = 0x175624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175620u;
            // 0x175624: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175638u;
            goto label_175638;
        }
    }
    ctx->pc = 0x175628u;
    // 0x175628: 0xc05d5a8  jal         func_1756A0
    ctx->pc = 0x175628u;
    SET_GPR_U32(ctx, 31, 0x175630u);
    ctx->pc = 0x17562Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175628u;
            // 0x17562c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1756A0u;
    if (runtime->hasFunction(0x1756A0u)) {
        auto targetFn = runtime->lookupFunction(0x1756A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175630u; }
        if (ctx->pc != 0x175630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001756A0_0x1756a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175630u; }
        if (ctx->pc != 0x175630u) { return; }
    }
    ctx->pc = 0x175630u;
label_175630:
    // 0x175630: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x175630u;
    {
        const bool branch_taken_0x175630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175630) {
            ctx->pc = 0x175694u;
            goto label_175694;
        }
    }
    ctx->pc = 0x175638u;
label_175638:
    // 0x175638: 0xc05d5ac  jal         func_1756B0
    ctx->pc = 0x175638u;
    SET_GPR_U32(ctx, 31, 0x175640u);
    ctx->pc = 0x1756B0u;
    if (runtime->hasFunction(0x1756B0u)) {
        auto targetFn = runtime->lookupFunction(0x1756B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175640u; }
        if (ctx->pc != 0x175640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001756B0_0x1756b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175640u; }
        if (ctx->pc != 0x175640u) { return; }
    }
    ctx->pc = 0x175640u;
label_175640:
    // 0x175640: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x175640u;
    {
        const bool branch_taken_0x175640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175640) {
            ctx->pc = 0x175694u;
            goto label_175694;
        }
    }
    ctx->pc = 0x175648u;
label_175648:
    // 0x175648: 0x14c30012  bne         $a2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x175648u;
    {
        const bool branch_taken_0x175648 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x175648) {
            ctx->pc = 0x175694u;
            goto label_175694;
        }
    }
    ctx->pc = 0x175650u;
    // 0x175650: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x175650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x175654: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x175654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175658: 0x9063f360  lbu         $v1, -0xCA0($v1)
    ctx->pc = 0x175658u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964064)));
    // 0x17565c: 0x1066000d  beq         $v1, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x17565Cu;
    {
        const bool branch_taken_0x17565c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x17565c) {
            ctx->pc = 0x175694u;
            goto label_175694;
        }
    }
    ctx->pc = 0x175664u;
    // 0x175664: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x175664u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x175668: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x175668u;
    {
        const bool branch_taken_0x175668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175668) {
            ctx->pc = 0x175694u;
            goto label_175694;
        }
    }
    ctx->pc = 0x175670u;
    // 0x175670: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x175670u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x175674: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x175674u;
    {
        const bool branch_taken_0x175674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175674) {
            ctx->pc = 0x175678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175674u;
            // 0x175678: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17568Cu;
            goto label_17568c;
        }
    }
    ctx->pc = 0x17567Cu;
    // 0x17567c: 0xc05d5a8  jal         func_1756A0
    ctx->pc = 0x17567Cu;
    SET_GPR_U32(ctx, 31, 0x175684u);
    ctx->pc = 0x175680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17567Cu;
            // 0x175680: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1756A0u;
    if (runtime->hasFunction(0x1756A0u)) {
        auto targetFn = runtime->lookupFunction(0x1756A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175684u; }
        if (ctx->pc != 0x175684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001756A0_0x1756a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175684u; }
        if (ctx->pc != 0x175684u) { return; }
    }
    ctx->pc = 0x175684u;
label_175684:
    // 0x175684: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x175684u;
    {
        const bool branch_taken_0x175684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175684) {
            ctx->pc = 0x175694u;
            goto label_175694;
        }
    }
    ctx->pc = 0x17568Cu;
label_17568c:
    // 0x17568c: 0xc05d5ac  jal         func_1756B0
    ctx->pc = 0x17568Cu;
    SET_GPR_U32(ctx, 31, 0x175694u);
    ctx->pc = 0x1756B0u;
    if (runtime->hasFunction(0x1756B0u)) {
        auto targetFn = runtime->lookupFunction(0x1756B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175694u; }
        if (ctx->pc != 0x175694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001756B0_0x1756b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175694u; }
        if (ctx->pc != 0x175694u) { return; }
    }
    ctx->pc = 0x175694u;
label_175694:
    // 0x175694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175698:
    // 0x175698: 0x3e00008  jr          $ra
    ctx->pc = 0x175698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17569Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175698u;
            // 0x17569c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1756A0u;
    ctx->pc = 0x1756a0u;
}
