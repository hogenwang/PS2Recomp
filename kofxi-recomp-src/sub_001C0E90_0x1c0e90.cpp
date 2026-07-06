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

// Function: sub_001C0E90
// Address: 0x1c0e90 - 0x1c0fb8
void sub_001C0E90_0x1c0e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0E90_0x1c0e90");
#endif

    switch (ctx->pc) {
        case 0x1c0ebcu: goto label_1c0ebc;
        case 0x1c0eecu: goto label_1c0eec;
        case 0x1c0ef4u: goto label_1c0ef4;
        case 0x1c0f08u: goto label_1c0f08;
        case 0x1c0f40u: goto label_1c0f40;
        case 0x1c0f48u: goto label_1c0f48;
        case 0x1c0f5cu: goto label_1c0f5c;
        case 0x1c0f78u: goto label_1c0f78;
        default: break;
    }

    ctx->pc = 0x1c0e90u;

    // 0x1c0e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c0e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c0e94: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c0e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c0e98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c0e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c0e9c: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x1c0e9cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x1c0ea0: 0x2664c80c  addiu       $a0, $s3, -0x37F4
    ctx->pc = 0x1c0ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952972));
    // 0x1c0ea4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c0ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c0ea8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c0eac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c0eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c0eb0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c0eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c0eb4: 0xc0739f8  jal         func_1CE7E0
    ctx->pc = 0x1C0EB4u;
    SET_GPR_U32(ctx, 31, 0x1C0EBCu);
    ctx->pc = 0x1C0EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0EB4u;
    // 0x1c0eb8: 0x2451c7d0  addiu       $s1, $v0, -0x3830 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE7E0u, 0x1C0EB4u, 0x1C0EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EBCu;
label_1c0ebc:
    // 0x1c0ebc: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1C0EBCu;
    {
        const bool branch_taken_0x1c0ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EBCu;
        // 0x1c0ec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ebc) {
            ctx->pc = 0x1C0F7Cu;
            goto label_1c0f7c;
        }
    }
    ctx->pc = 0x1C0EC4u;
    // 0x1c0ec4: 0x82300001  lb          $s0, 0x1($s1)
    ctx->pc = 0x1c0ec4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1c0ec8: 0x16020010  bne         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C0EC8u;
    {
        const bool branch_taken_0x1c0ec8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C0ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EC8u;
        // 0x1c0ecc: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ec8) {
            ctx->pc = 0x1C0F0Cu;
            goto label_1c0f0c;
        }
    }
    ctx->pc = 0x1C0ED0u;
    // 0x1c0ed0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c0ed4: 0x2452c810  addiu       $s2, $v0, -0x37F0
    ctx->pc = 0x1c0ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952976));
    // 0x1c0ed8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c0ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c0edc: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0EDCu;
    {
        const bool branch_taken_0x1c0edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x1c0edc) {
            ctx->pc = 0x1C0EECu;
            goto label_1c0eec;
        }
    }
    ctx->pc = 0x1C0EE4u;
    // 0x1c0ee4: 0xc0736ea  jal         func_1CDBA8
    ctx->pc = 0x1C0EE4u;
    SET_GPR_U32(ctx, 31, 0x1C0EECu);
    ctx->pc = 0x1CDBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDBA8u, 0x1C0EE4u, 0x1C0EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EECu;
label_1c0eec:
    // 0x1c0eec: 0xc0702b2  jal         func_1C0AC8
    ctx->pc = 0x1C0EECu;
    SET_GPR_U32(ctx, 31, 0x1C0EF4u);
    ctx->pc = 0x1C0EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0EECu;
    // 0x1c0ef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0AC8u, 0x1C0EECu, 0x1C0EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EF4u;
label_1c0ef4:
    // 0x1c0ef4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c0ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c0ef8: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0EF8u;
    {
        const bool branch_taken_0x1c0ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1c0ef8) {
            ctx->pc = 0x1C0EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0EF8u;
            // 0x1c0efc: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0F0Cu;
            goto label_1c0f0c;
        }
    }
    ctx->pc = 0x1C0F00u;
    // 0x1c0f00: 0xc073708  jal         func_1CDC20
    ctx->pc = 0x1C0F00u;
    SET_GPR_U32(ctx, 31, 0x1C0F08u);
    ctx->pc = 0x1CDC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDC20u, 0x1C0F00u, 0x1C0F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F08u;
label_1c0f08:
    // 0x1c0f08: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x1c0f08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_1c0f0c:
    // 0x1c0f0c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1c0f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c0f10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c0f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0f14: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1c0f14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1c0f18: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C0F18u;
    {
        const bool branch_taken_0x1c0f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C0F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F18u;
        // 0x1c0f1c: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f18) {
            ctx->pc = 0x1C0F60u;
            goto label_1c0f60;
        }
    }
    ctx->pc = 0x1C0F20u;
    // 0x1c0f20: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c0f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c0f24: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1c0f24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0f28: 0x2470c814  addiu       $s0, $v1, -0x37EC
    ctx->pc = 0x1c0f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952980));
    // 0x1c0f2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c0f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c0f30: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0F30u;
    {
        const bool branch_taken_0x1c0f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1c0f30) {
            ctx->pc = 0x1C0F40u;
            goto label_1c0f40;
        }
    }
    ctx->pc = 0x1C0F38u;
    // 0x1c0f38: 0xc0736ea  jal         func_1CDBA8
    ctx->pc = 0x1C0F38u;
    SET_GPR_U32(ctx, 31, 0x1C0F40u);
    ctx->pc = 0x1CDBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDBA8u, 0x1C0F38u, 0x1C0F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F40u;
label_1c0f40:
    // 0x1c0f40: 0xc07032c  jal         func_1C0CB0
    ctx->pc = 0x1C0F40u;
    SET_GPR_U32(ctx, 31, 0x1C0F48u);
    ctx->pc = 0x1C0F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F40u;
    // 0x1c0f44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0CB0u, 0x1C0F40u, 0x1C0F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F48u;
label_1c0f48:
    // 0x1c0f48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c0f4c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0F4Cu;
    {
        const bool branch_taken_0x1c0f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1c0f4c) {
            ctx->pc = 0x1C0F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0F4Cu;
            // 0x1c0f50: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0F60u;
            goto label_1c0f60;
        }
    }
    ctx->pc = 0x1C0F54u;
    // 0x1c0f54: 0xc073708  jal         func_1CDC20
    ctx->pc = 0x1C0F54u;
    SET_GPR_U32(ctx, 31, 0x1C0F5Cu);
    ctx->pc = 0x1CDC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDC20u, 0x1C0F54u, 0x1C0F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F5Cu;
label_1c0f5c:
    // 0x1c0f5c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c0f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c0f60:
    // 0x1c0f60: 0x2442c848  addiu       $v0, $v0, -0x37B8
    ctx->pc = 0x1c0f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953032));
    // 0x1c0f64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c0f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c0f68: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0F68u;
    {
        const bool branch_taken_0x1c0f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0f68) {
            ctx->pc = 0x1C0F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0F68u;
            // 0x1c0f6c: 0xae60c80c  sw          $zero, -0x37F4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4294952972), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0F7Cu;
            goto label_1c0f7c;
        }
    }
    ctx->pc = 0x1C0F70u;
    // 0x1c0f70: 0xc0701da  jal         func_1C0768
    ctx->pc = 0x1C0F70u;
    SET_GPR_U32(ctx, 31, 0x1C0F78u);
    ctx->pc = 0x1C0768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0768u, 0x1C0F70u, 0x1C0F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F78u;
label_1c0f78:
    // 0x1c0f78: 0xae60c80c  sw          $zero, -0x37F4($s3)
    ctx->pc = 0x1c0f78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294952972), GPR_U32(ctx, 0));
label_1c0f7c:
    // 0x1c0f7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0f7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0f80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c0f80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0f84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c0f84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0f88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c0f88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c0f8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c0f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0f90: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F90u;
        // 0x1c0f94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0F98u;
    // 0x1c0f98: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c0f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c0f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F9Cu;
        // 0x1c0fa0: 0x8062c7d1  lb          $v0, -0x382F($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294952913)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0FA4u;
    // 0x1c0fa4: 0x0  nop
    ctx->pc = 0x1c0fa4u;
    // NOP
    // 0x1c0fa8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c0fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c0fac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FACu;
        // 0x1c0fb0: 0x8c62c804  lw          $v0, -0x37FC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952964)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0FB4u;
    // 0x1c0fb4: 0x0  nop
    ctx->pc = 0x1c0fb4u;
    // NOP
}
