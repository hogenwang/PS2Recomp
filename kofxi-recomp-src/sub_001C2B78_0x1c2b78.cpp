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

// Function: sub_001C2B78
// Address: 0x1c2b78 - 0x1c2fe0
void sub_001C2B78_0x1c2b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2B78_0x1c2b78");
#endif

    switch (ctx->pc) {
        case 0x1c2be8u: goto label_1c2be8;
        case 0x1c2c08u: goto label_1c2c08;
        case 0x1c2c1cu: goto label_1c2c1c;
        case 0x1c2c3cu: goto label_1c2c3c;
        case 0x1c2c4cu: goto label_1c2c4c;
        case 0x1c2c54u: goto label_1c2c54;
        case 0x1c2c5cu: goto label_1c2c5c;
        case 0x1c2c64u: goto label_1c2c64;
        case 0x1c2c70u: goto label_1c2c70;
        case 0x1c2c88u: goto label_1c2c88;
        case 0x1c2c90u: goto label_1c2c90;
        case 0x1c2d3cu: goto label_1c2d3c;
        case 0x1c2d84u: goto label_1c2d84;
        case 0x1c2e1cu: goto label_1c2e1c;
        case 0x1c2e98u: goto label_1c2e98;
        case 0x1c2ec8u: goto label_1c2ec8;
        case 0x1c2f28u: goto label_1c2f28;
        case 0x1c2f48u: goto label_1c2f48;
        case 0x1c2f58u: goto label_1c2f58;
        case 0x1c2f78u: goto label_1c2f78;
        case 0x1c2f80u: goto label_1c2f80;
        case 0x1c2f88u: goto label_1c2f88;
        case 0x1c2f90u: goto label_1c2f90;
        case 0x1c2f98u: goto label_1c2f98;
        default: break;
    }

    ctx->pc = 0x1c2b78u;

label_1c2b78:
    // 0x1c2b78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2b7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2b84: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1c2b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c2b88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2b8c: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x1C2B8Cu;
    ctx->pc = 0x1C2B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2B8Cu;
    // 0x1c2b90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C2B94u;
    // 0x1c2b94: 0x0  nop
    ctx->pc = 0x1c2b94u;
    // NOP
    // 0x1c2b98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2b9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c2b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c2ba0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c2ba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ba4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2ba8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c2ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c2bac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c2bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c2bb0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c2bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c2bb4: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2BB4u;
    {
        const bool branch_taken_0x1c2bb4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BB4u;
        // 0x1c2bb8: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bb4) {
            ctx->pc = 0x1C2BC8u;
            goto label_1c2bc8;
        }
    }
    ctx->pc = 0x1C2BBCu;
    // 0x1c2bbc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c2bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c2bc0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C2BC0u;
    {
        const bool branch_taken_0x1c2bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BC0u;
        // 0x1c2bc4: 0x24a59da0  addiu       $a1, $a1, -0x6260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bc0) {
            ctx->pc = 0x1C2C00u;
            goto label_1c2c00;
        }
    }
    ctx->pc = 0x1C2BC8u;
label_1c2bc8:
    // 0x1c2bc8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2BC8u;
    {
        const bool branch_taken_0x1c2bc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BC8u;
        // 0x1c2bcc: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bc8) {
            ctx->pc = 0x1C2BE0u;
            goto label_1c2be0;
        }
    }
    ctx->pc = 0x1C2BD0u;
    // 0x1c2bd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c2bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2bd4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C2BD4u;
    {
        const bool branch_taken_0x1c2bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BD4u;
        // 0x1c2bd8: 0x24a59dc8  addiu       $a1, $a1, -0x6238 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bd4) {
            ctx->pc = 0x1C2C00u;
            goto label_1c2c00;
        }
    }
    ctx->pc = 0x1C2BDCu;
    // 0x1c2bdc: 0x0  nop
    ctx->pc = 0x1c2bdcu;
    // NOP
label_1c2be0:
    // 0x1c2be0: 0xc070ad0  jal         func_1C2B40
    ctx->pc = 0x1C2BE0u;
    SET_GPR_U32(ctx, 31, 0x1C2BE8u);
    ctx->pc = 0x1C2B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2B40u, 0x1C2BE0u, 0x1C2BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2BE8u;
label_1c2be8:
    // 0x1c2be8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c2be8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2bec: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2BECu;
    {
        const bool branch_taken_0x1c2bec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BECu;
        // 0x1c2bf0: 0x26330020  addiu       $s3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bec) {
            ctx->pc = 0x1C2C10u;
            goto label_1c2c10;
        }
    }
    ctx->pc = 0x1C2BF4u;
    // 0x1c2bf4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c2bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c2bf8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c2bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2bfc: 0x24a59df0  addiu       $a1, $a1, -0x6210
    ctx->pc = 0x1c2bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942192));
label_1c2c00:
    // 0x1c2c00: 0xc0709d4  jal         func_1C2750
    ctx->pc = 0x1C2C00u;
    SET_GPR_U32(ctx, 31, 0x1C2C08u);
    ctx->pc = 0x1C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2750u, 0x1C2C00u, 0x1C2C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C08u;
label_1c2c08:
    // 0x1c2c08: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1C2C08u;
    {
        const bool branch_taken_0x1c2c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C08u;
        // 0x1c2c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c08) {
            ctx->pc = 0x1C2CF0u;
            goto label_1c2cf0;
        }
    }
    ctx->pc = 0x1C2C10u;
label_1c2c10:
    // 0x1c2c10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c14: 0xc070f0c  jal         func_1C3C30
    ctx->pc = 0x1C2C14u;
    SET_GPR_U32(ctx, 31, 0x1C2C1Cu);
    ctx->pc = 0x1C2C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C14u;
    // 0x1c2c18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3C30u, 0x1C2C14u, 0x1C2C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C1Cu;
label_1c2c1c:
    // 0x1c2c1c: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1c2c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c2c20: 0x14a0001f  bnez        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C2C20u;
    {
        const bool branch_taken_0x1c2c20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C20u;
        // 0x1c2c24: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c20) {
            ctx->pc = 0x1C2CA0u;
            goto label_1c2ca0;
        }
    }
    ctx->pc = 0x1C2C28u;
    // 0x1c2c28: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1c2c28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1c2c2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c30: 0x2610e860  addiu       $s0, $s0, -0x17A0
    ctx->pc = 0x1c2c30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961248));
    // 0x1c2c34: 0xc070cf0  jal         func_1C33C0
    ctx->pc = 0x1C2C34u;
    SET_GPR_U32(ctx, 31, 0x1C2C3Cu);
    ctx->pc = 0x1C2C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C34u;
    // 0x1c2c38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C33C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C33C0u, 0x1C2C34u, 0x1C2C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C3Cu;
label_1c2c3c:
    // 0x1c2c3c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c2c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c2c40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c2c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c44: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C2C44u;
    SET_GPR_U32(ctx, 31, 0x1C2C4Cu);
    ctx->pc = 0x1C2C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C44u;
    // 0x1c2c48: 0x24849e20  addiu       $a0, $a0, -0x61E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C2C44u, 0x1C2C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C4Cu;
label_1c2c4c:
    // 0x1c2c4c: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C2C4Cu;
    SET_GPR_U32(ctx, 31, 0x1C2C54u);
    ctx->pc = 0x1C2C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C4Cu;
    // 0x1c2c50: 0x34048300  ori         $a0, $zero, 0x8300 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33536);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C2C4Cu, 0x1C2C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C54u;
label_1c2c54:
    // 0x1c2c54: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x1C2C54u;
    SET_GPR_U32(ctx, 31, 0x1C2C5Cu);
    ctx->pc = 0x1C2C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C54u;
    // 0x1c2c58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B970u, 0x1C2C54u, 0x1C2C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C5Cu;
label_1c2c5c:
    // 0x1c2c5c: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C2C5Cu;
    SET_GPR_U32(ctx, 31, 0x1C2C64u);
    ctx->pc = 0x1C2C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C5Cu;
    // 0x1c2c60: 0x34048301  ori         $a0, $zero, 0x8301 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33537);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C2C5Cu, 0x1C2C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C64u;
label_1c2c64:
    // 0x1c2c64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c2c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c68: 0xc0709e0  jal         func_1C2780
    ctx->pc = 0x1C2C68u;
    SET_GPR_U32(ctx, 31, 0x1C2C70u);
    ctx->pc = 0x1C2C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C68u;
    // 0x1c2c6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2780u, 0x1C2C68u, 0x1C2C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C70u;
label_1c2c70:
    // 0x1c2c70: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2C70u;
    {
        const bool branch_taken_0x1c2c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c70) {
            ctx->pc = 0x1C2C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2C70u;
            // 0x1c2c74: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2C98u;
            goto label_1c2c98;
        }
    }
    ctx->pc = 0x1C2C78u;
    // 0x1c2c78: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c2c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c2c7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c2c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c80: 0xc0709d4  jal         func_1C2750
    ctx->pc = 0x1C2C80u;
    SET_GPR_U32(ctx, 31, 0x1C2C88u);
    ctx->pc = 0x1C2C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C80u;
    // 0x1c2c84: 0x24a59e48  addiu       $a1, $a1, -0x61B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2750u, 0x1C2C80u, 0x1C2C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C88u;
label_1c2c88:
    // 0x1c2c88: 0xc070ade  jal         func_1C2B78
    ctx->pc = 0x1C2C88u;
    SET_GPR_U32(ctx, 31, 0x1C2C90u);
    ctx->pc = 0x1C2C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C88u;
    // 0x1c2c8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2B78u;
    goto label_1c2b78;
    ctx->pc = 0x1C2C90u;
label_1c2c90:
    // 0x1c2c90: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1C2C90u;
    {
        const bool branch_taken_0x1c2c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C90u;
        // 0x1c2c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c90) {
            ctx->pc = 0x1C2CF0u;
            goto label_1c2cf0;
        }
    }
    ctx->pc = 0x1C2C98u;
label_1c2c98:
    // 0x1c2c98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2C98u;
    {
        const bool branch_taken_0x1c2c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C98u;
        // 0x1c2c9c: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c98) {
            ctx->pc = 0x1C2CA8u;
            goto label_1c2ca8;
        }
    }
    ctx->pc = 0x1C2CA0u;
label_1c2ca0:
    // 0x1c2ca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2ca4: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x1c2ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_1c2ca8:
    // 0x1c2ca8: 0x24a207ff  addiu       $v0, $a1, 0x7FF
    ctx->pc = 0x1c2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
    // 0x1c2cac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2cb0: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x1c2cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x1c2cb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2cb8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1c2cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1c2cbc: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1c2cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c2cc0: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x1c2cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x1c2cc4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1c2cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1c2cc8: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1c2cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1c2ccc: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1c2cccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1c2cd0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1c2cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1c2cd4: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x1c2cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c2cd8: 0x16840004  bne         $s4, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2CD8u;
    {
        const bool branch_taken_0x1c2cd8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C2CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2CD8u;
        // 0x1c2cdc: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2cd8) {
            ctx->pc = 0x1C2CECu;
            goto label_1c2cec;
        }
    }
    ctx->pc = 0x1C2CE0u;
    // 0x1c2ce0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1c2ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1c2ce4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c2ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c2ce8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1c2ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1c2cec:
    // 0x1c2cec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c2cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c2cf0:
    // 0x1c2cf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2cf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2cf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c2cf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c2cf8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c2cf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2cfc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c2cfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c2d00: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c2d00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2d04: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c2d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2d08: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D08u;
        // 0x1c2d0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2D10u;
    // 0x1c2d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2d14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2d18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d1c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C2D1Cu;
    {
        const bool branch_taken_0x1c2d1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D1Cu;
        // 0x1c2d20: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d1c) {
            ctx->pc = 0x1C2D58u;
            goto label_1c2d58;
        }
    }
    ctx->pc = 0x1C2D24u;
    // 0x1c2d24: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x1c2d24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c2d28: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1c2d28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c2d2c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2D2Cu;
    {
        const bool branch_taken_0x1c2d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d2c) {
            ctx->pc = 0x1C2D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2D2Cu;
            // 0x1c2d30: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2D40u;
            goto label_1c2d40;
        }
    }
    ctx->pc = 0x1C2D34u;
    // 0x1c2d34: 0xc070bf8  jal         func_1C2FE0
    ctx->pc = 0x1C2D34u;
    SET_GPR_U32(ctx, 31, 0x1C2D3Cu);
    ctx->pc = 0x1C2FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2FE0u, 0x1C2D34u, 0x1C2D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D3Cu;
label_1c2d3c:
    // 0x1c2d3c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1c2d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1c2d40:
    // 0x1c2d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c2d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c2d48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2d4c: 0x8070ade  j           func_1C2B78
    ctx->pc = 0x1C2D4Cu;
    ctx->pc = 0x1C2D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D4Cu;
    // 0x1c2d50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2B78u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1c2b78;
    ctx->pc = 0x1C2D54u;
    // 0x1c2d54: 0x0  nop
    ctx->pc = 0x1c2d54u;
    // NOP
label_1c2d58:
    // 0x1c2d58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2d5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c2d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c2d60: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D60u;
        // 0x1c2d64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2D68u;
    // 0x1c2d68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2d6c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1c2d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d70: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2D70u;
    {
        const bool branch_taken_0x1c2d70 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D70u;
        // 0x1c2d74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d70) {
            ctx->pc = 0x1C2D90u;
            goto label_1c2d90;
        }
    }
    ctx->pc = 0x1C2D78u;
    // 0x1c2d78: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c2d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c2d7c: 0xc0709d4  jal         func_1C2750
    ctx->pc = 0x1C2D7Cu;
    SET_GPR_U32(ctx, 31, 0x1C2D84u);
    ctx->pc = 0x1C2D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D7Cu;
    // 0x1c2d80: 0x24a59e78  addiu       $a1, $a1, -0x6188 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2750u, 0x1C2D7Cu, 0x1C2D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D84u;
label_1c2d84:
    // 0x1c2d84: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1C2D84u;
    {
        const bool branch_taken_0x1c2d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D84u;
        // 0x1c2d88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d84) {
            ctx->pc = 0x1C2DF0u;
            goto label_1c2df0;
        }
    }
    ctx->pc = 0x1C2D8Cu;
    // 0x1c2d8c: 0x0  nop
    ctx->pc = 0x1c2d8cu;
    // NOP
label_1c2d90:
    // 0x1c2d90: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2D90u;
    {
        const bool branch_taken_0x1c2d90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D90u;
        // 0x1c2d94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d90) {
            ctx->pc = 0x1C2DA0u;
            goto label_1c2da0;
        }
    }
    ctx->pc = 0x1C2D98u;
    // 0x1c2d98: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C2D98u;
    {
        const bool branch_taken_0x1c2d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D98u;
        // 0x1c2d9c: 0xace5000c  sw          $a1, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d98) {
            ctx->pc = 0x1C2DD0u;
            goto label_1c2dd0;
        }
    }
    ctx->pc = 0x1C2DA0u;
label_1c2da0:
    // 0x1c2da0: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2DA0u;
    {
        const bool branch_taken_0x1c2da0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DA0u;
        // 0x1c2da4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2da0) {
            ctx->pc = 0x1C2DB8u;
            goto label_1c2db8;
        }
    }
    ctx->pc = 0x1C2DA8u;
    // 0x1c2da8: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1c2da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1c2dac: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1c2dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c2db0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2DB0u;
    {
        const bool branch_taken_0x1c2db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DB0u;
        // 0x1c2db4: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2db0) {
            ctx->pc = 0x1C2DD4u;
            goto label_1c2dd4;
        }
    }
    ctx->pc = 0x1C2DB8u;
label_1c2db8:
    // 0x1c2db8: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2DB8u;
    {
        const bool branch_taken_0x1c2db8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DB8u;
        // 0x1c2dbc: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2db8) {
            ctx->pc = 0x1C2DD4u;
            goto label_1c2dd4;
        }
    }
    ctx->pc = 0x1C2DC0u;
    // 0x1c2dc0: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1c2dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1c2dc4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1c2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c2dc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2DC8u;
    {
        const bool branch_taken_0x1c2dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DC8u;
        // 0x1c2dcc: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2dc8) {
            ctx->pc = 0x1C2DD4u;
            goto label_1c2dd4;
        }
    }
    ctx->pc = 0x1C2DD0u;
label_1c2dd0:
    // 0x1c2dd0: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1c2dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1c2dd4:
    // 0x1c2dd4: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1c2dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1c2dd8: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x1c2dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x1c2ddc: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x1c2ddcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1c2de0: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1c2de0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1c2de4: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x1c2de4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c2de8: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x1c2de8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1c2dec: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x1c2decu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_1c2df0:
    // 0x1c2df0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2df4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DF4u;
        // 0x1c2df8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2DFCu;
    // 0x1c2dfc: 0x0  nop
    ctx->pc = 0x1c2dfcu;
    // NOP
    // 0x1c2e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2e04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c2e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e08: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2E08u;
    {
        const bool branch_taken_0x1c2e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E08u;
        // 0x1c2e0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e08) {
            ctx->pc = 0x1C2E28u;
            goto label_1c2e28;
        }
    }
    ctx->pc = 0x1C2E10u;
    // 0x1c2e10: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c2e10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c2e14: 0xc0709d4  jal         func_1C2750
    ctx->pc = 0x1C2E14u;
    SET_GPR_U32(ctx, 31, 0x1C2E1Cu);
    ctx->pc = 0x1C2E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2E14u;
    // 0x1c2e18: 0x24a59e78  addiu       $a1, $a1, -0x6188 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2750u, 0x1C2E14u, 0x1C2E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E1Cu;
label_1c2e1c:
    // 0x1c2e1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2E1Cu;
    {
        const bool branch_taken_0x1c2e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E1Cu;
        // 0x1c2e20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e1c) {
            ctx->pc = 0x1C2E2Cu;
            goto label_1c2e2c;
        }
    }
    ctx->pc = 0x1C2E24u;
    // 0x1c2e24: 0x0  nop
    ctx->pc = 0x1c2e24u;
    // NOP
label_1c2e28:
    // 0x1c2e28: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1c2e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1c2e2c:
    // 0x1c2e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2e30: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E30u;
        // 0x1c2e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2E38u;
    // 0x1c2e38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2e3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2e40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c2e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c2e48: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c2e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c2e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c2e50: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c2e50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c2e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c2e58: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2E58u;
    {
        const bool branch_taken_0x1c2e58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E58u;
        // 0x1c2e5c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e58) {
            ctx->pc = 0x1C2E70u;
            goto label_1c2e70;
        }
    }
    ctx->pc = 0x1C2E60u;
    // 0x1c2e60: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c2e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c2e64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C2E64u;
    {
        const bool branch_taken_0x1c2e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E64u;
        // 0x1c2e68: 0x24a59e78  addiu       $a1, $a1, -0x6188 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e64) {
            ctx->pc = 0x1C2E90u;
            goto label_1c2e90;
        }
    }
    ctx->pc = 0x1C2E6Cu;
    // 0x1c2e6c: 0x0  nop
    ctx->pc = 0x1c2e6cu;
    // NOP
label_1c2e70:
    // 0x1c2e70: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2E70u;
    {
        const bool branch_taken_0x1c2e70 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1C2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E70u;
        // 0x1c2e74: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e70) {
            ctx->pc = 0x1C2E80u;
            goto label_1c2e80;
        }
    }
    ctx->pc = 0x1C2E78u;
    // 0x1c2e78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2E78u;
    {
        const bool branch_taken_0x1c2e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E78u;
        // 0x1c2e7c: 0x24a59e90  addiu       $a1, $a1, -0x6170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e78) {
            ctx->pc = 0x1C2E90u;
            goto label_1c2e90;
        }
    }
    ctx->pc = 0x1C2E80u;
label_1c2e80:
    // 0x1c2e80: 0x56200007  bnel        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2E80u;
    {
        const bool branch_taken_0x1c2e80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2e80) {
            ctx->pc = 0x1C2E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2E80u;
            // 0x1c2e84: 0x82030002  lb          $v1, 0x2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2EA0u;
            goto label_1c2ea0;
        }
    }
    ctx->pc = 0x1C2E88u;
    // 0x1c2e88: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c2e88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c2e8c: 0x24a59eb0  addiu       $a1, $a1, -0x6150
    ctx->pc = 0x1c2e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942384));
label_1c2e90:
    // 0x1c2e90: 0xc0709d4  jal         func_1C2750
    ctx->pc = 0x1C2E90u;
    SET_GPR_U32(ctx, 31, 0x1C2E98u);
    ctx->pc = 0x1C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2750u, 0x1C2E90u, 0x1C2E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E98u;
label_1c2e98:
    // 0x1c2e98: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1C2E98u;
    {
        const bool branch_taken_0x1c2e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E98u;
        // 0x1c2e9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e98) {
            ctx->pc = 0x1C2FC0u;
            goto label_1c2fc0;
        }
    }
    ctx->pc = 0x1C2EA0u;
label_1c2ea0:
    // 0x1c2ea0: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1c2ea0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2ea4: 0x10730046  beq         $v1, $s3, . + 4 + (0x46 << 2)
    ctx->pc = 0x1C2EA4u;
    {
        const bool branch_taken_0x1c2ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1C2EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2EA4u;
        // 0x1c2ea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ea4) {
            ctx->pc = 0x1C2FC0u;
            goto label_1c2fc0;
        }
    }
    ctx->pc = 0x1C2EACu;
    // 0x1c2eac: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2EACu;
    {
        const bool branch_taken_0x1c2eac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2EACu;
        // 0x1c2eb0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2eac) {
            ctx->pc = 0x1C2EC0u;
            goto label_1c2ec0;
        }
    }
    ctx->pc = 0x1C2EB4u;
    // 0x1c2eb4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1C2EB4u;
    {
        const bool branch_taken_0x1c2eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2EB4u;
        // 0x1c2eb8: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2eb4) {
            ctx->pc = 0x1C2FC0u;
            goto label_1c2fc0;
        }
    }
    ctx->pc = 0x1C2EBCu;
    // 0x1c2ebc: 0x0  nop
    ctx->pc = 0x1c2ebcu;
    // NOP
label_1c2ec0:
    // 0x1c2ec0: 0xc0700cc  jal         func_1C0330
    ctx->pc = 0x1C2EC0u;
    SET_GPR_U32(ctx, 31, 0x1C2EC8u);
    ctx->pc = 0x1C0330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0330u, 0x1C2EC0u, 0x1C2EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2EC8u;
label_1c2ec8:
    // 0x1c2ec8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c2ec8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ecc: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1C2ECCu;
    {
        const bool branch_taken_0x1c2ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2ECCu;
        // 0x1c2ed0: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ecc) {
            ctx->pc = 0x1C2FC0u;
            goto label_1c2fc0;
        }
    }
    ctx->pc = 0x1C2ED4u;
    // 0x1c2ed4: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1c2ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1c2ed8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c2edc: 0x24c6e9a0  addiu       $a2, $a2, -0x1660
    ctx->pc = 0x1c2edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961568));
    // 0x1c2ee0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c2ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c2ee4: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x1c2ee4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c2ee8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c2ee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2eec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c2eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c2ef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ef4: 0xa2050044  sb          $a1, 0x44($s0)
    ctx->pc = 0x1c2ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c2ef8: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1c2ef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c2efc: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x1c2efcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x1c2f00: 0x90c80001  lbu         $t0, 0x1($a2)
    ctx->pc = 0x1c2f00u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x1c2f04: 0x72ac0  sll         $a1, $a3, 11
    ctx->pc = 0x1c2f04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x1c2f08: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x1c2f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1c2f0c: 0xa2080045  sb          $t0, 0x45($s0)
    ctx->pc = 0x1c2f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 8));
    // 0x1c2f10: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1c2f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1c2f14: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x1c2f14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1c2f18: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x1c2f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x1c2f1c: 0xa2020046  sb          $v0, 0x46($s0)
    ctx->pc = 0x1c2f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c2f20: 0xc0435a6  jal         func_10D698
    ctx->pc = 0x1C2F20u;
    SET_GPR_U32(ctx, 31, 0x1C2F28u);
    ctx->pc = 0x1C2F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F20u;
    // 0x1c2f24: 0xae110018  sw          $s1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D698u, 0x1C2F20u, 0x1C2F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F28u;
label_1c2f28:
    // 0x1c2f28: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1c2f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c2f2c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1c2f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c2f30: 0x26080044  addiu       $t0, $s0, 0x44
    ctx->pc = 0x1c2f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x1c2f34: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1c2f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c2f38: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1c2f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c2f3c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x1c2f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c2f40: 0xc070116  jal         func_1C0458
    ctx->pc = 0x1C2F40u;
    SET_GPR_U32(ctx, 31, 0x1C2F48u);
    ctx->pc = 0x1C2F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F40u;
    // 0x1c2f44: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0458u, 0x1C2F40u, 0x1C2F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F48u;
label_1c2f48:
    // 0x1c2f48: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2F48u;
    {
        const bool branch_taken_0x1c2f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2f48) {
            ctx->pc = 0x1C2F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2F48u;
            // 0x1c2f4c: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2F60u;
            goto label_1c2f60;
        }
    }
    ctx->pc = 0x1C2F50u;
    // 0x1c2f50: 0xc0700ee  jal         func_1C03B8
    ctx->pc = 0x1C2F50u;
    SET_GPR_U32(ctx, 31, 0x1C2F58u);
    ctx->pc = 0x1C2F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F50u;
    // 0x1c2f54: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C03B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C03B8u, 0x1C2F50u, 0x1C2F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F58u;
label_1c2f58:
    // 0x1c2f58: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1C2F58u;
    {
        const bool branch_taken_0x1c2f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F58u;
        // 0x1c2f5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2f58) {
            ctx->pc = 0x1C2FC0u;
            goto label_1c2fc0;
        }
    }
    ctx->pc = 0x1C2F60u;
label_1c2f60:
    // 0x1c2f60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2f64: 0x8c51e9a4  lw          $s1, -0x165C($v0)
    ctx->pc = 0x1c2f64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961572)));
    // 0x1c2f68: 0x56230013  bnel        $s1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C2F68u;
    {
        const bool branch_taken_0x1c2f68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c2f68) {
            ctx->pc = 0x1C2F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2F68u;
            // 0x1c2f6c: 0xa2130002  sb          $s3, 0x2($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2FB8u;
            goto label_1c2fb8;
        }
    }
    ctx->pc = 0x1C2F70u;
    // 0x1c2f70: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x1C2F70u;
    SET_GPR_U32(ctx, 31, 0x1C2F78u);
    ctx->pc = 0x1C2F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F70u;
    // 0x1c2f74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B970u, 0x1C2F70u, 0x1C2F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F78u;
label_1c2f78:
    // 0x1c2f78: 0xc0703ee  jal         func_1C0FB8
    ctx->pc = 0x1C2F78u;
    SET_GPR_U32(ctx, 31, 0x1C2F80u);
    ctx->pc = 0x1C0FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0FB8u, 0x1C2F78u, 0x1C2F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F80u;
label_1c2f80:
    // 0x1c2f80: 0xc0703a4  jal         func_1C0E90
    ctx->pc = 0x1C2F80u;
    SET_GPR_U32(ctx, 31, 0x1C2F88u);
    ctx->pc = 0x1C0E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0E90u, 0x1C2F80u, 0x1C2F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F88u;
label_1c2f88:
    // 0x1c2f88: 0xc0701f4  jal         func_1C07D0
    ctx->pc = 0x1C2F88u;
    SET_GPR_U32(ctx, 31, 0x1C2F90u);
    ctx->pc = 0x1C2F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F88u;
    // 0x1c2f8c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C07D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C07D0u, 0x1C2F88u, 0x1C2F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F90u;
label_1c2f90:
    // 0x1c2f90: 0xc0700ee  jal         func_1C03B8
    ctx->pc = 0x1C2F90u;
    SET_GPR_U32(ctx, 31, 0x1C2F98u);
    ctx->pc = 0x1C2F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F90u;
    // 0x1c2f94: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C03B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C03B8u, 0x1C2F90u, 0x1C2F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F98u;
label_1c2f98:
    // 0x1c2f98: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c2f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c2f9c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c2f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c2fa0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1c2fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c2fa4: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x1c2fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x1c2fa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c2fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c2fac: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x1c2facu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c2fb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2FB0u;
    {
        const bool branch_taken_0x1c2fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2FB0u;
        // 0x1c2fb4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2fb0) {
            ctx->pc = 0x1C2FBCu;
            goto label_1c2fbc;
        }
    }
    ctx->pc = 0x1C2FB8u;
label_1c2fb8:
    // 0x1c2fb8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1c2fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1c2fbc:
    // 0x1c2fbc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c2fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c2fc0:
    // 0x1c2fc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2fc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c2fc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c2fc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c2fc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2fcc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c2fccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c2fd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c2fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2FD4u;
        // 0x1c2fd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2FDCu;
    // 0x1c2fdc: 0x0  nop
    ctx->pc = 0x1c2fdcu;
    // NOP
}
