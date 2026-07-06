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

// Function: sub_00115BC0
// Address: 0x115bc0 - 0x115c50
void sub_00115BC0_0x115bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115BC0_0x115bc0");
#endif

    switch (ctx->pc) {
        case 0x115bd8u: goto label_115bd8;
        case 0x115be8u: goto label_115be8;
        case 0x115c2cu: goto label_115c2c;
        default: break;
    }

    ctx->pc = 0x115bc0u;

    // 0x115bc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x115bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x115bc4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x115bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x115bc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x115bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x115bcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x115bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115bd0: 0xc04557a  jal         func_1155E8
    ctx->pc = 0x115BD0u;
    SET_GPR_U32(ctx, 31, 0x115BD8u);
    ctx->pc = 0x115BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115BD0u;
    // 0x115bd4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1155E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1155E8u, 0x115BD0u, 0x115BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115BD8u;
label_115bd8:
    // 0x115bd8: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x115BD8u;
    {
        const bool branch_taken_0x115bd8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x115BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BD8u;
        // 0x115bdc: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115bd8) {
            ctx->pc = 0x115C3Cu;
            goto label_115c3c;
        }
    }
    ctx->pc = 0x115BE0u;
    // 0x115be0: 0xc0455ba  jal         func_1156E8
    ctx->pc = 0x115BE0u;
    SET_GPR_U32(ctx, 31, 0x115BE8u);
    ctx->pc = 0x1156E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1156E8u, 0x115BE0u, 0x115BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115BE8u;
label_115be8:
    // 0x115be8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115BE8u;
    {
        const bool branch_taken_0x115be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BE8u;
        // 0x115bec: 0x3c100041  lui         $s0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115be8) {
            ctx->pc = 0x115BFCu;
            goto label_115bfc;
        }
    }
    ctx->pc = 0x115BF0u;
    // 0x115bf0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x115bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x115bf4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x115BF4u;
    {
        const bool branch_taken_0x115bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BF4u;
        // 0x115bf8: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115bf4) {
            ctx->pc = 0x115C3Cu;
            goto label_115c3c;
        }
    }
    ctx->pc = 0x115BFCu;
label_115bfc:
    // 0x115bfc: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x115bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x115c00: 0x26079c40  addiu       $a3, $s0, -0x63C0
    ctx->pc = 0x115c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941760));
    // 0x115c04: 0xae119c40  sw          $s1, -0x63C0($s0)
    ctx->pc = 0x115c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941760), GPR_U32(ctx, 17));
    // 0x115c08: 0x24849e40  addiu       $a0, $a0, -0x61C0
    ctx->pc = 0x115c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942272));
    // 0x115c0c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115c10: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x115c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x115c14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c18: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x115c18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115c1c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x115c1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c20: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x115c20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115c24: 0xc04434c  jal         func_110D30
    ctx->pc = 0x115C24u;
    SET_GPR_U32(ctx, 31, 0x115C2Cu);
    ctx->pc = 0x115C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115C24u;
    // 0x115c28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x115C24u, 0x115C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C2Cu;
label_115c2c:
    // 0x115c2c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x115C2Cu;
    {
        const bool branch_taken_0x115c2c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x115c2c) {
            ctx->pc = 0x115C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115C2Cu;
            // 0x115c30: 0x8e029c40  lw          $v0, -0x63C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115C3Cu;
            goto label_115c3c;
        }
    }
    ctx->pc = 0x115C34u;
    // 0x115c34: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x115c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x115c38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x115c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_115c3c:
    // 0x115c3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x115c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115c40: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x115c40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115c44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x115c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115c48: 0x3e00008  jr          $ra
    ctx->pc = 0x115C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C48u;
        // 0x115c4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115C50u;
}
