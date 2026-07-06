#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F67F8
// Address: 0x2f67f8 - 0x2f68a0
void sub_002F67F8_0x2f67f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F67F8_0x2f67f8");
#endif

    switch (ctx->pc) {
        case 0x2f6824u: goto label_2f6824;
        case 0x2f6838u: goto label_2f6838;
        default: break;
    }

    ctx->pc = 0x2f67f8u;

    // 0x2f67f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f67f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f67fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f67fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f6800: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f6800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f6804: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f6804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6808: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f6808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f680c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F680Cu;
    {
        const bool branch_taken_0x2f680c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F680Cu;
            // 0x2f6810: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f680c) {
            ctx->pc = 0x2F681Cu;
            goto label_2f681c;
        }
    }
    ctx->pc = 0x2F6814u;
    // 0x2f6814: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2F6814u;
    {
        const bool branch_taken_0x2f6814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6814u;
            // 0x2f6818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6814) {
            ctx->pc = 0x2F6888u;
            goto label_2f6888;
        }
    }
    ctx->pc = 0x2F681Cu;
label_2f681c:
    // 0x2f681c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2F681Cu;
    SET_GPR_U32(ctx, 31, 0x2F6824u);
    ctx->pc = 0x2F6820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F681Cu;
            // 0x2f6820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6824u; }
        if (ctx->pc != 0x2F6824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6824u; }
        if (ctx->pc != 0x2F6824u) { return; }
    }
    ctx->pc = 0x2F6824u;
label_2f6824:
    // 0x2f6824: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2f6824u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6828: 0x11200017  beqz        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F6828u;
    {
        const bool branch_taken_0x2f6828 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F682Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6828u;
            // 0x2f682c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6828) {
            ctx->pc = 0x2F6888u;
            goto label_2f6888;
        }
    }
    ctx->pc = 0x2F6830u;
    // 0x2f6830: 0x3c0a003e  lui         $t2, 0x3E
    ctx->pc = 0x2f6830u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)62 << 16));
    // 0x2f6834: 0x0  nop
    ctx->pc = 0x2f6834u;
    // NOP
label_2f6838:
    // 0x2f6838: 0x82280000  lb          $t0, 0x0($s1)
    ctx->pc = 0x2f6838u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f683c: 0x2542b7c8  addiu       $v0, $t2, -0x4838
    ctx->pc = 0x2f683cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294948808));
    // 0x2f6840: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x2f6840u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f6844: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x2f6844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2f6848: 0x2506ffe0  addiu       $a2, $t0, -0x20
    ctx->pc = 0x2f6848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
    // 0x2f684c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2f684cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2f6850: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2f6850u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f6854: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2f6854u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6858: 0x24e5ffe0  addiu       $a1, $a3, -0x20
    ctx->pc = 0x2f6858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
    // 0x2f685c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2f685cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2f6860: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x2f6860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x2f6864: 0x103300a  movz        $a2, $t0, $v1
    ctx->pc = 0x2f6864u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
    // 0x2f6868: 0xe4280a  movz        $a1, $a3, $a0
    ctx->pc = 0x2f6868u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    // 0x2f686c: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2f686cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f6870: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6870u;
    {
        const bool branch_taken_0x2f6870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6870u;
            // 0x2f6874: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6870) {
            ctx->pc = 0x2F6888u;
            goto label_2f6888;
        }
    }
    ctx->pc = 0x2F6878u;
    // 0x2f6878: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2f6878u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2f687c: 0x1520ffee  bnez        $t1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2F687Cu;
    {
        const bool branch_taken_0x2f687c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F687Cu;
            // 0x2f6880: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f687c) {
            ctx->pc = 0x2F6838u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6838;
        }
    }
    ctx->pc = 0x2F6884u;
    // 0x2f6884: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f6884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6888:
    // 0x2f6888: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f6888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f688c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f688cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f6890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6894: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6894u;
            // 0x2f6898: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F689Cu;
    // 0x2f689c: 0x0  nop
    ctx->pc = 0x2f689cu;
    // NOP
    ctx->pc = 0x2f68a0u;
}
