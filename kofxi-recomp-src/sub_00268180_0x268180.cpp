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

// Function: sub_00268180
// Address: 0x268180 - 0x268238
void sub_00268180_0x268180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268180_0x268180");
#endif

    switch (ctx->pc) {
        case 0x2681acu: goto label_2681ac;
        case 0x2681ccu: goto label_2681cc;
        case 0x2681dcu: goto label_2681dc;
        case 0x2681f4u: goto label_2681f4;
        case 0x268204u: goto label_268204;
        case 0x268218u: goto label_268218;
        default: break;
    }

    ctx->pc = 0x268180u;

    // 0x268180: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x268180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x268184: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x268184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x268188: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x268188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x26818c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26818cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268190: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x268190u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268194: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x268194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x268198: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x268198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x26819c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26819cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2681a0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2681a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2681a4: 0xc0973ba  jal         func_25CEE8
    ctx->pc = 0x2681A4u;
    SET_GPR_U32(ctx, 31, 0x2681ACu);
    ctx->pc = 0x2681A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2681A4u;
    // 0x2681a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEE8u, 0x2681A4u, 0x2681ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2681ACu;
label_2681ac:
    // 0x2681ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2681acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2681b0: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2681B0u;
    {
        const bool branch_taken_0x2681b0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2681B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681B0u;
        // 0x2681b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2681b0) {
            ctx->pc = 0x2681C0u;
            goto label_2681c0;
        }
    }
    ctx->pc = 0x2681B8u;
    // 0x2681b8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2681B8u;
    {
        const bool branch_taken_0x2681b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2681BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681B8u;
        // 0x2681bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2681b8) {
            ctx->pc = 0x26821Cu;
            goto label_26821c;
        }
    }
    ctx->pc = 0x2681C0u;
label_2681c0:
    // 0x2681c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2681c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2681c4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2681C4u;
    SET_GPR_U32(ctx, 31, 0x2681CCu);
    ctx->pc = 0x2681C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2681C4u;
    // 0x2681c8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2681C4u, 0x2681CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2681CCu;
label_2681cc:
    // 0x2681cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2681ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2681d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2681d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2681d4: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2681D4u;
    SET_GPR_U32(ctx, 31, 0x2681DCu);
    ctx->pc = 0x2681D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2681D4u;
    // 0x2681d8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x2681D4u, 0x2681DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2681DCu;
label_2681dc:
    // 0x2681dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2681dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2681e0: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x2681e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x2681e4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2681e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2681e8: 0x34a56919  ori         $a1, $a1, 0x6919
    ctx->pc = 0x2681e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26905);
    // 0x2681ec: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x2681ECu;
    SET_GPR_U32(ctx, 31, 0x2681F4u);
    ctx->pc = 0x2681F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2681ECu;
    // 0x2681f0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EFC8u, 0x2681ECu, 0x2681F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2681F4u;
label_2681f4:
    // 0x2681f4: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2681F4u;
    {
        const bool branch_taken_0x2681f4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2681f4) {
            ctx->pc = 0x268210u;
            goto label_268210;
        }
    }
    ctx->pc = 0x2681FCu;
    // 0x2681fc: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2681FCu;
    SET_GPR_U32(ctx, 31, 0x268204u);
    ctx->pc = 0x268200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2681FCu;
    // 0x268200: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x2681FCu, 0x268204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268204u;
label_268204:
    // 0x268204: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x268204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268208: 0x3863007d  xori        $v1, $v1, 0x7D
    ctx->pc = 0x268208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)125);
    // 0x26820c: 0x3880a  movz        $s1, $zero, $v1
    ctx->pc = 0x26820cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_268210:
    // 0x268210: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x268210u;
    SET_GPR_U32(ctx, 31, 0x268218u);
    ctx->pc = 0x268214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268210u;
    // 0x268214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F278u, 0x268210u, 0x268218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268218u;
label_268218:
    // 0x268218: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x268218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26821c:
    // 0x26821c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x26821cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x268220: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x268220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268224: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x268224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x268228: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x268228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26822c: 0x3e00008  jr          $ra
    ctx->pc = 0x26822Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26822Cu;
        // 0x268230: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26822Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268234u;
    // 0x268234: 0x0  nop
    ctx->pc = 0x268234u;
    // NOP
}
