#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00270050
// Address: 0x270050 - 0x270130
void sub_00270050_0x270050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270050_0x270050");
#endif

    switch (ctx->pc) {
        case 0x270074u: goto label_270074;
        case 0x27008cu: goto label_27008c;
        case 0x2700b0u: goto label_2700b0;
        case 0x2700d4u: goto label_2700d4;
        case 0x2700e4u: goto label_2700e4;
        case 0x2700fcu: goto label_2700fc;
        case 0x270118u: goto label_270118;
        default: break;
    }

    ctx->pc = 0x270050u;

    // 0x270050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x270050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x270054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x270054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270058: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x270058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x27005c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x27005cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x270060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x270060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270064: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x270064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x270068: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x270068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27006c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x27006Cu;
    SET_GPR_U32(ctx, 31, 0x270074u);
    ctx->pc = 0x270070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27006Cu;
            // 0x270070: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270074u; }
        if (ctx->pc != 0x270074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270074u; }
        if (ctx->pc != 0x270074u) { return; }
    }
    ctx->pc = 0x270074u;
label_270074:
    // 0x270074: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x270074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x270078: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x270078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27007c: 0x247198f0  addiu       $s1, $v1, -0x6710
    ctx->pc = 0x27007cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940912));
    // 0x270080: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x270080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x270084: 0xc04a966  jal         func_12A598
    ctx->pc = 0x270084u;
    SET_GPR_U32(ctx, 31, 0x27008Cu);
    ctx->pc = 0x270088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270084u;
            // 0x270088: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27008Cu; }
        if (ctx->pc != 0x27008Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27008Cu; }
        if (ctx->pc != 0x27008Cu) { return; }
    }
    ctx->pc = 0x27008Cu;
label_27008c:
    // 0x27008c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x27008cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x270090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270094: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x270094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x270098: 0x34058014  ori         $a1, $zero, 0x8014
    ctx->pc = 0x270098u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32788);
    // 0x27009c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x27009cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2700a0: 0x34a569ca  ori         $a1, $a1, 0x69CA
    ctx->pc = 0x2700a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27082);
    // 0x2700a4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2700a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2700a8: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x2700A8u;
    SET_GPR_U32(ctx, 31, 0x2700B0u);
    ctx->pc = 0x2700ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2700A8u;
            // 0x2700ac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2700B0u; }
        if (ctx->pc != 0x2700B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2700B0u; }
        if (ctx->pc != 0x2700B0u) { return; }
    }
    ctx->pc = 0x2700B0u;
label_2700b0:
    // 0x2700b0: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2700B0u;
    {
        const bool branch_taken_0x2700b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2700B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2700B0u;
            // 0x2700b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700b0) {
            ctx->pc = 0x2700C8u;
            goto label_2700c8;
        }
    }
    ctx->pc = 0x2700B8u;
    // 0x2700b8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2700b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2700bc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2700bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2700c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2700C0u;
    {
        const bool branch_taken_0x2700c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2700C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2700C0u;
            // 0x2700c4: 0x24a599d0  addiu       $a1, $a1, -0x6630 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700c0) {
            ctx->pc = 0x270110u;
            goto label_270110;
        }
    }
    ctx->pc = 0x2700C8u;
label_2700c8:
    // 0x2700c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2700c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2700cc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2700CCu;
    SET_GPR_U32(ctx, 31, 0x2700D4u);
    ctx->pc = 0x2700D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2700CCu;
            // 0x2700d0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2700D4u; }
        if (ctx->pc != 0x2700D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2700D4u; }
        if (ctx->pc != 0x2700D4u) { return; }
    }
    ctx->pc = 0x2700D4u;
label_2700d4:
    // 0x2700d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2700d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2700d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2700d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2700dc: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2700DCu;
    SET_GPR_U32(ctx, 31, 0x2700E4u);
    ctx->pc = 0x2700E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2700DCu;
            // 0x2700e0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2700E4u; }
        if (ctx->pc != 0x2700E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2700E4u; }
        if (ctx->pc != 0x2700E4u) { return; }
    }
    ctx->pc = 0x2700E4u;
label_2700e4:
    // 0x2700e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2700e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2700e8: 0x34058014  ori         $a1, $zero, 0x8014
    ctx->pc = 0x2700e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32788);
    // 0x2700ec: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2700ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2700f0: 0x34a569cc  ori         $a1, $a1, 0x69CC
    ctx->pc = 0x2700f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27084);
    // 0x2700f4: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x2700F4u;
    SET_GPR_U32(ctx, 31, 0x2700FCu);
    ctx->pc = 0x2700F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2700F4u;
            // 0x2700f8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2700FCu; }
        if (ctx->pc != 0x2700FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2700FCu; }
        if (ctx->pc != 0x2700FCu) { return; }
    }
    ctx->pc = 0x2700FCu;
label_2700fc:
    // 0x2700fc: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2700FCu;
    {
        const bool branch_taken_0x2700fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x270100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2700FCu;
            // 0x270100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700fc) {
            ctx->pc = 0x27011Cu;
            goto label_27011c;
        }
    }
    ctx->pc = 0x270104u;
    // 0x270104: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x270104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x270108: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x270108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27010c: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x27010cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
label_270110:
    // 0x270110: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x270110u;
    SET_GPR_U32(ctx, 31, 0x270118u);
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270118u; }
        if (ctx->pc != 0x270118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270118u; }
        if (ctx->pc != 0x270118u) { return; }
    }
    ctx->pc = 0x270118u;
label_270118:
    // 0x270118: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x270118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27011c:
    // 0x27011c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27011cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x270120: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x270120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270124: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x270124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270128: 0x3e00008  jr          $ra
    ctx->pc = 0x270128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27012Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270128u;
            // 0x27012c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x270130u;
    ctx->pc = 0x270130u;
}
