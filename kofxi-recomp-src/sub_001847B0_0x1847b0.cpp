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

// Function: sub_001847B0
// Address: 0x1847b0 - 0x184840
void sub_001847B0_0x1847b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001847B0_0x1847b0");
#endif

    switch (ctx->pc) {
        case 0x1847b0u: goto label_1847b0;
        case 0x1847b4u: goto label_1847b4;
        case 0x1847b8u: goto label_1847b8;
        case 0x1847bcu: goto label_1847bc;
        case 0x1847c0u: goto label_1847c0;
        case 0x1847c4u: goto label_1847c4;
        case 0x1847c8u: goto label_1847c8;
        case 0x1847ccu: goto label_1847cc;
        case 0x1847d0u: goto label_1847d0;
        case 0x1847d4u: goto label_1847d4;
        case 0x1847d8u: goto label_1847d8;
        case 0x1847dcu: goto label_1847dc;
        case 0x1847e0u: goto label_1847e0;
        case 0x1847e4u: goto label_1847e4;
        case 0x1847e8u: goto label_1847e8;
        case 0x1847ecu: goto label_1847ec;
        case 0x1847f0u: goto label_1847f0;
        case 0x1847f4u: goto label_1847f4;
        case 0x1847f8u: goto label_1847f8;
        case 0x1847fcu: goto label_1847fc;
        case 0x184800u: goto label_184800;
        case 0x184804u: goto label_184804;
        case 0x184808u: goto label_184808;
        case 0x18480cu: goto label_18480c;
        case 0x184810u: goto label_184810;
        case 0x184814u: goto label_184814;
        case 0x184818u: goto label_184818;
        case 0x18481cu: goto label_18481c;
        case 0x184820u: goto label_184820;
        case 0x184824u: goto label_184824;
        case 0x184828u: goto label_184828;
        case 0x18482cu: goto label_18482c;
        case 0x184830u: goto label_184830;
        case 0x184834u: goto label_184834;
        case 0x184838u: goto label_184838;
        case 0x18483cu: goto label_18483c;
        default: break;
    }

    ctx->pc = 0x1847b0u;

label_1847b0:
    // 0x1847b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1847b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1847b4:
    // 0x1847b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1847b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1847b8:
    // 0x1847b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1847b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1847bc:
    // 0x1847bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1847bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1847c0:
    // 0x1847c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1847c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1847c4:
    // 0x1847c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1847c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1847c8:
    // 0x1847c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1847c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1847cc:
    // 0x1847cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1847ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1847d0:
    // 0x1847d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1847d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1847d4:
    // 0x1847d4: 0x8c8300f8  lw          $v1, 0xF8($a0)
    ctx->pc = 0x1847d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
label_1847d8:
    // 0x1847d8: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x1847d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
label_1847dc:
    // 0x1847dc: 0x26106240  addiu       $s0, $s0, 0x6240
    ctx->pc = 0x1847dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25152));
label_1847e0:
    // 0x1847e0: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x1847e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_1847e4:
    // 0x1847e4: 0xac8300f8  sw          $v1, 0xF8($a0)
    ctx->pc = 0x1847e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 3));
label_1847e8:
    // 0x1847e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1847e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1847ec:
    // 0x1847ec: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x1847ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
label_1847f0:
    // 0x1847f0: 0x2431824  and         $v1, $s2, $v1
    ctx->pc = 0x1847f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
label_1847f4:
    // 0x1847f4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1847f8:
    if (ctx->pc == 0x1847F8u) {
        ctx->pc = 0x1847FCu;
        goto label_1847fc;
    }
    ctx->pc = 0x1847F4u;
    {
        const bool branch_taken_0x1847f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1847f4) {
            ctx->pc = 0x184810u;
            goto label_184810;
        }
    }
    ctx->pc = 0x1847FCu;
label_1847fc:
    // 0x1847fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1847fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_184800:
    // 0x184800: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x184800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_184804:
    // 0x184804: 0x40f809  jalr        $v0
label_184808:
    if (ctx->pc == 0x184808u) {
        ctx->pc = 0x184808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184804u;
        // 0x184808: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18480Cu;
        goto label_18480c;
    }
    ctx->pc = 0x184804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18480Cu);
        ctx->pc = 0x184808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184804u;
        // 0x184808: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184804u, 0x18480Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18480Cu;
label_18480c:
    // 0x18480c: 0x0  nop
    ctx->pc = 0x18480cu;
    // NOP
label_184810:
    // 0x184810: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x184810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_184814:
    // 0x184814: 0x2a230020  slti        $v1, $s1, 0x20
    ctx->pc = 0x184814u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_184818:
    // 0x184818: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_18481c:
    if (ctx->pc == 0x18481Cu) {
        ctx->pc = 0x18481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184818u;
        // 0x18481c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184820u;
        goto label_184820;
    }
    ctx->pc = 0x184818u;
    {
        const bool branch_taken_0x184818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184818u;
        // 0x18481c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184818) {
            ctx->pc = 0x1847E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1847e8;
        }
    }
    ctx->pc = 0x184820u;
label_184820:
    // 0x184820: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x184820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_184824:
    // 0x184824: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x184824u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_184828:
    // 0x184828: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x184828u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18482c:
    // 0x18482c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18482cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_184830:
    // 0x184830: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_184834:
    // 0x184834: 0x3e00008  jr          $ra
label_184838:
    if (ctx->pc == 0x184838u) {
        ctx->pc = 0x184838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184834u;
        // 0x184838: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18483Cu;
        goto label_18483c;
    }
    ctx->pc = 0x184834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184834u;
        // 0x184838: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18483Cu;
label_18483c:
    // 0x18483c: 0x0  nop
    ctx->pc = 0x18483cu;
    // NOP
    if (ctx->pc == 0x18483cu) { ctx->pc = 0x184840u; }
}
