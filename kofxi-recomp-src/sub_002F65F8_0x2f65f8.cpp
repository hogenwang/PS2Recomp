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

// Function: sub_002F65F8
// Address: 0x2f65f8 - 0x2f66c0
void sub_002F65F8_0x2f65f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F65F8_0x2f65f8");
#endif

    switch (ctx->pc) {
        case 0x2f663cu: goto label_2f663c;
        case 0x2f6648u: goto label_2f6648;
        case 0x2f6658u: goto label_2f6658;
        case 0x2f6670u: goto label_2f6670;
        case 0x2f6680u: goto label_2f6680;
        case 0x2f6688u: goto label_2f6688;
        case 0x2f66a4u: goto label_2f66a4;
        default: break;
    }

    ctx->pc = 0x2f65f8u;

    // 0x2f65f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f65f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f65fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f65fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f6600: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f6600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f6604: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f6604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6608: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f6608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f660c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f660cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6610: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2F6610u;
    {
        const bool branch_taken_0x2f6610 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6610u;
        // 0x2f6614: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6610) {
            ctx->pc = 0x2F66A4u;
            goto label_2f66a4;
        }
    }
    ctx->pc = 0x2F6618u;
    // 0x2f6618: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2f6618u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f661c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2F661Cu;
    {
        const bool branch_taken_0x2f661c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F661Cu;
        // 0x2f6620: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f661c) {
            ctx->pc = 0x2F66A8u;
            goto label_2f66a8;
        }
    }
    ctx->pc = 0x2F6624u;
    // 0x2f6624: 0x12300021  beq         $s1, $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2F6624u;
    {
        const bool branch_taken_0x2f6624 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x2F6628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6624u;
        // 0x2f6628: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6624) {
            ctx->pc = 0x2F66ACu;
            goto label_2f66ac;
        }
    }
    ctx->pc = 0x2F662Cu;
    // 0x2f662c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F662Cu;
    {
        const bool branch_taken_0x2f662c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f662c) {
            ctx->pc = 0x2F6678u;
            goto label_2f6678;
        }
    }
    ctx->pc = 0x2F6634u;
    // 0x2f6634: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2F6634u;
    SET_GPR_U32(ctx, 31, 0x2F663Cu);
    ctx->pc = 0x2F6638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6634u;
    // 0x2f6638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2F6634u, 0x2F663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F663Cu;
label_2f663c:
    // 0x2f663c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f663cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6640: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2F6640u;
    SET_GPR_U32(ctx, 31, 0x2F6648u);
    ctx->pc = 0x2F6644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6640u;
    // 0x2f6644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2F6640u, 0x2F6648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6648u;
label_2f6648:
    // 0x2f6648: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2f6648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2f664c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f664cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6650: 0xc0be46c  jal         func_2F91B0
    ctx->pc = 0x2F6650u;
    SET_GPR_U32(ctx, 31, 0x2F6658u);
    ctx->pc = 0x2F6654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6650u;
    // 0x2f6654: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F91B0u, 0x2F6650u, 0x2F6658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6658u;
label_2f6658:
    // 0x2f6658: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f6658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f665c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F665Cu;
    {
        const bool branch_taken_0x2f665c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F665Cu;
        // 0x2f6660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f665c) {
            ctx->pc = 0x2F66A8u;
            goto label_2f66a8;
        }
    }
    ctx->pc = 0x2F6664u;
    // 0x2f6664: 0x2122021  addu        $a0, $s0, $s2
    ctx->pc = 0x2f6664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2f6668: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x2F6668u;
    SET_GPR_U32(ctx, 31, 0x2F6670u);
    ctx->pc = 0x2F666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6668u;
    // 0x2f666c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x2F6668u, 0x2F6670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6670u;
label_2f6670:
    // 0x2f6670: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2F6670u;
    {
        const bool branch_taken_0x2f6670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6670u;
        // 0x2f6674: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6670) {
            ctx->pc = 0x2F66A8u;
            goto label_2f66a8;
        }
    }
    ctx->pc = 0x2F6678u;
label_2f6678:
    // 0x2f6678: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2F6678u;
    SET_GPR_U32(ctx, 31, 0x2F6680u);
    ctx->pc = 0x2F667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6678u;
    // 0x2f667c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2F6678u, 0x2F6680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6680u;
label_2f6680:
    // 0x2f6680: 0xc0be450  jal         func_2F9140
    ctx->pc = 0x2F6680u;
    SET_GPR_U32(ctx, 31, 0x2F6688u);
    ctx->pc = 0x2F6684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6680u;
    // 0x2f6684: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9140u, 0x2F6680u, 0x2F6688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6688u;
label_2f6688:
    // 0x2f6688: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f6688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f668c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F668Cu;
    {
        const bool branch_taken_0x2f668c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F668Cu;
        // 0x2f6690: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f668c) {
            ctx->pc = 0x2F669Cu;
            goto label_2f669c;
        }
    }
    ctx->pc = 0x2F6694u;
    // 0x2f6694: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6694u;
    {
        const bool branch_taken_0x2f6694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6694u;
        // 0x2f6698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6694) {
            ctx->pc = 0x2F66A8u;
            goto label_2f66a8;
        }
    }
    ctx->pc = 0x2F669Cu;
label_2f669c:
    // 0x2f669c: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x2F669Cu;
    SET_GPR_U32(ctx, 31, 0x2F66A4u);
    ctx->pc = 0x2F66A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F669Cu;
    // 0x2f66a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x2F669Cu, 0x2F66A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66A4u;
label_2f66a4:
    // 0x2f66a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f66a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f66a8:
    // 0x2f66a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f66a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f66ac:
    // 0x2f66ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f66acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f66b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f66b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f66b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f66b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f66b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F66B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F66BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66B8u;
        // 0x2f66bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F66B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F66C0u;
}
