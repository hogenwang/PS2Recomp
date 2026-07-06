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

// Function: sub_00200000
// Address: 0x200000 - 0x200348
void sub_00200000_0x200000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200000_0x200000");
#endif

    switch (ctx->pc) {
        case 0x20002cu: goto label_20002c;
        case 0x200044u: goto label_200044;
        case 0x20009cu: goto label_20009c;
        case 0x2000b4u: goto label_2000b4;
        case 0x200108u: goto label_200108;
        case 0x200120u: goto label_200120;
        case 0x200178u: goto label_200178;
        case 0x200190u: goto label_200190;
        case 0x2001f0u: goto label_2001f0;
        case 0x200208u: goto label_200208;
        case 0x200268u: goto label_200268;
        case 0x200280u: goto label_200280;
        case 0x2002f0u: goto label_2002f0;
        case 0x200308u: goto label_200308;
        default: break;
    }

    ctx->pc = 0x200000u;

    // 0x200000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x200004: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x200004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200008: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x200008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20000c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20000cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200010: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200014: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x200014u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x200018: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x200018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x20001c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20001cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x200020: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x200020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x200024: 0xc07fef4  jal         func_1FFBD0
    ctx->pc = 0x200024u;
    SET_GPR_U32(ctx, 31, 0x20002Cu);
    ctx->pc = 0x200028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200024u;
    // 0x200028: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBD0u, 0x200024u, 0x20002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20002Cu;
label_20002c:
    // 0x20002c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20002cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200034: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x200034u;
    {
        const bool branch_taken_0x200034 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x200038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200034u;
        // 0x200038: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200034) {
            ctx->pc = 0x200058u;
            goto label_200058;
        }
    }
    ctx->pc = 0x20003Cu;
    // 0x20003c: 0xc080122  jal         func_200488
    ctx->pc = 0x20003Cu;
    SET_GPR_U32(ctx, 31, 0x200044u);
    ctx->pc = 0x200488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200488u, 0x20003Cu, 0x200044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200044u;
label_200044:
    // 0x200044: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x200044u;
    {
        const bool branch_taken_0x200044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200044u;
        // 0x200048: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200044) {
            ctx->pc = 0x20005Cu;
            goto label_20005c;
        }
    }
    ctx->pc = 0x20004Cu;
    // 0x20004c: 0x92230021  lbu         $v1, 0x21($s1)
    ctx->pc = 0x20004cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x200050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200054: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x200054u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_200058:
    // 0x200058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20005c:
    // 0x20005c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20005cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200060: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x200060u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200064: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x200064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200068: 0x3e00008  jr          $ra
    ctx->pc = 0x200068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200068u;
        // 0x20006c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200070u;
    // 0x200070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x200074: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x200074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200078: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x200078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20007c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20007cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200080: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200084: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x200084u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x200088: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x200088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x20008c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20008cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x200090: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x200090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x200094: 0xc07fef4  jal         func_1FFBD0
    ctx->pc = 0x200094u;
    SET_GPR_U32(ctx, 31, 0x20009Cu);
    ctx->pc = 0x200098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200094u;
    // 0x200098: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBD0u, 0x200094u, 0x20009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20009Cu;
label_20009c:
    // 0x20009c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20009cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2000a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2000a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2000a4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2000A4u;
    {
        const bool branch_taken_0x2000a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2000A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000A4u;
        // 0x2000a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2000a4) {
            ctx->pc = 0x2000C8u;
            goto label_2000c8;
        }
    }
    ctx->pc = 0x2000ACu;
    // 0x2000ac: 0xc080122  jal         func_200488
    ctx->pc = 0x2000ACu;
    SET_GPR_U32(ctx, 31, 0x2000B4u);
    ctx->pc = 0x200488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200488u, 0x2000ACu, 0x2000B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2000B4u;
label_2000b4:
    // 0x2000b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2000B4u;
    {
        const bool branch_taken_0x2000b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2000B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000B4u;
        // 0x2000b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2000b4) {
            ctx->pc = 0x2000CCu;
            goto label_2000cc;
        }
    }
    ctx->pc = 0x2000BCu;
    // 0x2000bc: 0x92230022  lbu         $v1, 0x22($s1)
    ctx->pc = 0x2000bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x2000c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2000c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2000c4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2000c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2000c8:
    // 0x2000c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2000c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2000cc:
    // 0x2000cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2000ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2000d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2000d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2000d4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2000d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2000d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2000D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2000DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000D8u;
        // 0x2000dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2000D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2000E0u;
    // 0x2000e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2000e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2000e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2000e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2000e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2000e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2000ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2000ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2000f0: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x2000f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2000f4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2000f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2000f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2000f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2000fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2000fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x200100: 0xc07fef4  jal         func_1FFBD0
    ctx->pc = 0x200100u;
    SET_GPR_U32(ctx, 31, 0x200108u);
    ctx->pc = 0x200104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200100u;
    // 0x200104: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBD0u, 0x200100u, 0x200108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200108u;
label_200108:
    // 0x200108: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x200108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20010c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20010cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200110: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x200110u;
    {
        const bool branch_taken_0x200110 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x200114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200110u;
        // 0x200114: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200110) {
            ctx->pc = 0x200138u;
            goto label_200138;
        }
    }
    ctx->pc = 0x200118u;
    // 0x200118: 0xc080122  jal         func_200488
    ctx->pc = 0x200118u;
    SET_GPR_U32(ctx, 31, 0x200120u);
    ctx->pc = 0x200488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200488u, 0x200118u, 0x200120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200120u;
label_200120:
    // 0x200120: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x200120u;
    {
        const bool branch_taken_0x200120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200120u;
        // 0x200124: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200120) {
            ctx->pc = 0x20013Cu;
            goto label_20013c;
        }
    }
    ctx->pc = 0x200128u;
    // 0x200128: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x200128u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x20012c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20012cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200130: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x200130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x200134: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x200134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_200138:
    // 0x200138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20013c:
    // 0x20013c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20013cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200140: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x200140u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200144: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x200144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200148: 0x3e00008  jr          $ra
    ctx->pc = 0x200148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200148u;
        // 0x20014c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200150u;
    // 0x200150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x200154: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x200154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x200158: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x200158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20015c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20015cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200160: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x200160u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x200164: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x200164u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x200168: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x200168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20016c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20016cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x200170: 0xc07fef4  jal         func_1FFBD0
    ctx->pc = 0x200170u;
    SET_GPR_U32(ctx, 31, 0x200178u);
    ctx->pc = 0x200174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200170u;
    // 0x200174: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBD0u, 0x200170u, 0x200178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200178u;
label_200178:
    // 0x200178: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x200178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20017c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20017cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200180: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x200180u;
    {
        const bool branch_taken_0x200180 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x200184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200180u;
        // 0x200184: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200180) {
            ctx->pc = 0x2001ACu;
            goto label_2001ac;
        }
    }
    ctx->pc = 0x200188u;
    // 0x200188: 0xc080122  jal         func_200488
    ctx->pc = 0x200188u;
    SET_GPR_U32(ctx, 31, 0x200190u);
    ctx->pc = 0x200488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200488u, 0x200188u, 0x200190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200190u;
label_200190:
    // 0x200190: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x200190u;
    {
        const bool branch_taken_0x200190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200190u;
        // 0x200194: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200190) {
            ctx->pc = 0x2001B0u;
            goto label_2001b0;
        }
    }
    ctx->pc = 0x200198u;
    // 0x200198: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x200198u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x20019c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20019cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2001a0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2001a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2001a4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2001a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2001a8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2001a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2001ac:
    // 0x2001ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2001acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2001b0:
    // 0x2001b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2001b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2001b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2001b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2001b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2001b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2001bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2001BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2001C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001BCu;
        // 0x2001c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2001BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2001C4u;
    // 0x2001c4: 0x0  nop
    ctx->pc = 0x2001c4u;
    // NOP
    // 0x2001c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2001c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2001cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2001ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2001d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2001d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2001d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2001d8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x2001d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2001dc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2001dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2001e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2001e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2001e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2001e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2001e8: 0xc07fef4  jal         func_1FFBD0
    ctx->pc = 0x2001E8u;
    SET_GPR_U32(ctx, 31, 0x2001F0u);
    ctx->pc = 0x2001ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2001E8u;
    // 0x2001ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBD0u, 0x2001E8u, 0x2001F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2001F0u;
label_2001f0:
    // 0x2001f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2001f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2001f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001f8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2001F8u;
    {
        const bool branch_taken_0x2001f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2001FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001F8u;
        // 0x2001fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001f8) {
            ctx->pc = 0x20021Cu;
            goto label_20021c;
        }
    }
    ctx->pc = 0x200200u;
    // 0x200200: 0xc080122  jal         func_200488
    ctx->pc = 0x200200u;
    SET_GPR_U32(ctx, 31, 0x200208u);
    ctx->pc = 0x200488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200488u, 0x200200u, 0x200208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200208u;
label_200208:
    // 0x200208: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x200208u;
    {
        const bool branch_taken_0x200208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200208u;
        // 0x20020c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200208) {
            ctx->pc = 0x200220u;
            goto label_200220;
        }
    }
    ctx->pc = 0x200210u;
    // 0x200210: 0x92230024  lbu         $v1, 0x24($s1)
    ctx->pc = 0x200210u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x200214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200218: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x200218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_20021c:
    // 0x20021c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20021cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200220:
    // 0x200220: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200224: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x200224u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200228: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x200228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20022c: 0x3e00008  jr          $ra
    ctx->pc = 0x20022Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20022Cu;
        // 0x200230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20022Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200234u;
    // 0x200234: 0x0  nop
    ctx->pc = 0x200234u;
    // NOP
    // 0x200238: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x200238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20023c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20023cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x200240: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x200240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200244: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x200244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x200248: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x200248u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20024c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20024cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200250: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x200250u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x200254: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x200254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x200258: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x200258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20025c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20025cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x200260: 0xc07fef4  jal         func_1FFBD0
    ctx->pc = 0x200260u;
    SET_GPR_U32(ctx, 31, 0x200268u);
    ctx->pc = 0x200264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200260u;
    // 0x200264: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBD0u, 0x200260u, 0x200268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200268u;
label_200268:
    // 0x200268: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x200268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20026c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20026cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200270: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x200270u;
    {
        const bool branch_taken_0x200270 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x200274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200270u;
        // 0x200274: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200270) {
            ctx->pc = 0x2002A0u;
            goto label_2002a0;
        }
    }
    ctx->pc = 0x200278u;
    // 0x200278: 0xc080122  jal         func_200488
    ctx->pc = 0x200278u;
    SET_GPR_U32(ctx, 31, 0x200280u);
    ctx->pc = 0x200488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200488u, 0x200278u, 0x200280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200280u;
label_200280:
    // 0x200280: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x200280u;
    {
        const bool branch_taken_0x200280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200280u;
        // 0x200284: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200280) {
            ctx->pc = 0x2002A4u;
            goto label_2002a4;
        }
    }
    ctx->pc = 0x200288u;
    // 0x200288: 0x92220025  lbu         $v0, 0x25($s1)
    ctx->pc = 0x200288u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 37)));
    // 0x20028c: 0x28430040  slti        $v1, $v0, 0x40
    ctx->pc = 0x20028cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x200290: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x200290u;
    {
        const bool branch_taken_0x200290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200290u;
        // 0x200294: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200290) {
            ctx->pc = 0x20029Cu;
            goto label_20029c;
        }
    }
    ctx->pc = 0x200298u;
    // 0x200298: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x200298u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_20029c:
    // 0x20029c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20029cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2002a0:
    // 0x2002a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2002a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2002a4:
    // 0x2002a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2002a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2002a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2002a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2002ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2002acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2002b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2002b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2002b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2002B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2002B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002B4u;
        // 0x2002b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2002B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2002BCu;
    // 0x2002bc: 0x0  nop
    ctx->pc = 0x2002bcu;
    // NOP
    // 0x2002c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2002c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2002c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2002c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2002c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2002c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2002cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2002ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2002d0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2002d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2002d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2002d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2002d8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x2002d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2002dc: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x2002dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x2002e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2002e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2002e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2002e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2002e8: 0xc07fef4  jal         func_1FFBD0
    ctx->pc = 0x2002E8u;
    SET_GPR_U32(ctx, 31, 0x2002F0u);
    ctx->pc = 0x2002ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2002E8u;
    // 0x2002ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBD0u, 0x2002E8u, 0x2002F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2002F0u;
label_2002f0:
    // 0x2002f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2002f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2002f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2002f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2002f8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2002F8u;
    {
        const bool branch_taken_0x2002f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2002FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002F8u;
        // 0x2002fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2002f8) {
            ctx->pc = 0x200328u;
            goto label_200328;
        }
    }
    ctx->pc = 0x200300u;
    // 0x200300: 0xc080122  jal         func_200488
    ctx->pc = 0x200300u;
    SET_GPR_U32(ctx, 31, 0x200308u);
    ctx->pc = 0x200488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200488u, 0x200300u, 0x200308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200308u;
label_200308:
    // 0x200308: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x200308u;
    {
        const bool branch_taken_0x200308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200308u;
        // 0x20030c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200308) {
            ctx->pc = 0x20032Cu;
            goto label_20032c;
        }
    }
    ctx->pc = 0x200310u;
    // 0x200310: 0x92220026  lbu         $v0, 0x26($s1)
    ctx->pc = 0x200310u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x200314: 0x28430040  slti        $v1, $v0, 0x40
    ctx->pc = 0x200314u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x200318: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x200318u;
    {
        const bool branch_taken_0x200318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200318u;
        // 0x20031c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200318) {
            ctx->pc = 0x200324u;
            goto label_200324;
        }
    }
    ctx->pc = 0x200320u;
    // 0x200320: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x200320u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_200324:
    // 0x200324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200328:
    // 0x200328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20032c:
    // 0x20032c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20032cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200330: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x200330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200334: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x200334u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200338: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x200338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20033c: 0x3e00008  jr          $ra
    ctx->pc = 0x20033Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20033Cu;
        // 0x200340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20033Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200344u;
    // 0x200344: 0x0  nop
    ctx->pc = 0x200344u;
    // NOP
}
