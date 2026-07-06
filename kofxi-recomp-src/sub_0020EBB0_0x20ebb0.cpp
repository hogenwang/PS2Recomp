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

// Function: sub_0020EBB0
// Address: 0x20ebb0 - 0x20ed00
void sub_0020EBB0_0x20ebb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EBB0_0x20ebb0");
#endif

    switch (ctx->pc) {
        case 0x20ebe0u: goto label_20ebe0;
        case 0x20ebf8u: goto label_20ebf8;
        case 0x20ec18u: goto label_20ec18;
        case 0x20ec38u: goto label_20ec38;
        case 0x20ec54u: goto label_20ec54;
        case 0x20ec70u: goto label_20ec70;
        case 0x20ec8cu: goto label_20ec8c;
        case 0x20eca4u: goto label_20eca4;
        case 0x20ecc8u: goto label_20ecc8;
        case 0x20ecd0u: goto label_20ecd0;
        default: break;
    }

    ctx->pc = 0x20ebb0u;

    // 0x20ebb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20ebb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20ebb4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20ebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20ebb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ebb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20ebbc: 0x8c63a060  lw          $v1, -0x5FA0($v1)
    ctx->pc = 0x20ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942816)));
    // 0x20ebc0: 0x5060004c  beql        $v1, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x20EBC0u;
    {
        const bool branch_taken_0x20ebc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ebc0) {
            ctx->pc = 0x20EBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EBC0u;
            // 0x20ebc4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20ECF4u;
            goto label_20ecf4;
        }
    }
    ctx->pc = 0x20EBC8u;
    // 0x20ebc8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20ebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20ebcc: 0x8c63a070  lw          $v1, -0x5F90($v1)
    ctx->pc = 0x20ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942832)));
    // 0x20ebd0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20EBD0u;
    {
        const bool branch_taken_0x20ebd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ebd0) {
            ctx->pc = 0x20EBE0u;
            goto label_20ebe0;
        }
    }
    ctx->pc = 0x20EBD8u;
    // 0x20ebd8: 0xc083180  jal         func_20C600
    ctx->pc = 0x20EBD8u;
    SET_GPR_U32(ctx, 31, 0x20EBE0u);
    ctx->pc = 0x20EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EBD8u;
    // 0x20ebdc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C600u, 0x20EBD8u, 0x20EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EBE0u;
label_20ebe0:
    // 0x20ebe0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20ebe4: 0x8c63a068  lw          $v1, -0x5F98($v1)
    ctx->pc = 0x20ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942824)));
    // 0x20ebe8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20EBE8u;
    {
        const bool branch_taken_0x20ebe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ebe8) {
            ctx->pc = 0x20EBF8u;
            goto label_20ebf8;
        }
    }
    ctx->pc = 0x20EBF0u;
    // 0x20ebf0: 0xc083154  jal         func_20C550
    ctx->pc = 0x20EBF0u;
    SET_GPR_U32(ctx, 31, 0x20EBF8u);
    ctx->pc = 0x20C550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C550u, 0x20EBF0u, 0x20EBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EBF8u;
label_20ebf8:
    // 0x20ebf8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20ebfc: 0x8c63a060  lw          $v1, -0x5FA0($v1)
    ctx->pc = 0x20ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942816)));
    // 0x20ec00: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x20ec00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20ec04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20EC04u;
    {
        const bool branch_taken_0x20ec04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ec04) {
            ctx->pc = 0x20EC18u;
            goto label_20ec18;
        }
    }
    ctx->pc = 0x20EC0Cu;
    // 0x20ec0c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x20ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x20ec10: 0xc083060  jal         func_20C180
    ctx->pc = 0x20EC10u;
    SET_GPR_U32(ctx, 31, 0x20EC18u);
    ctx->pc = 0x20EC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC10u;
    // 0x20ec14: 0x8c44b7e8  lw          $a0, -0x4818($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948840)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C180u, 0x20EC10u, 0x20EC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC18u;
label_20ec18:
    // 0x20ec18: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20ec1c: 0x8c63a060  lw          $v1, -0x5FA0($v1)
    ctx->pc = 0x20ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942816)));
    // 0x20ec20: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x20ec20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x20ec24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20EC24u;
    {
        const bool branch_taken_0x20ec24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ec24) {
            ctx->pc = 0x20EC38u;
            goto label_20ec38;
        }
    }
    ctx->pc = 0x20EC2Cu;
    // 0x20ec2c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x20ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x20ec30: 0xc0830b8  jal         func_20C2E0
    ctx->pc = 0x20EC30u;
    SET_GPR_U32(ctx, 31, 0x20EC38u);
    ctx->pc = 0x20EC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC30u;
    // 0x20ec34: 0x8c44b7d8  lw          $a0, -0x4828($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C2E0u, 0x20EC30u, 0x20EC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC38u;
label_20ec38:
    // 0x20ec38: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20ec3c: 0x8c63a060  lw          $v1, -0x5FA0($v1)
    ctx->pc = 0x20ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942816)));
    // 0x20ec40: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x20ec40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x20ec44: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20EC44u;
    {
        const bool branch_taken_0x20ec44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ec44) {
            ctx->pc = 0x20EC54u;
            goto label_20ec54;
        }
    }
    ctx->pc = 0x20EC4Cu;
    // 0x20ec4c: 0xc08340c  jal         func_20D030
    ctx->pc = 0x20EC4Cu;
    SET_GPR_U32(ctx, 31, 0x20EC54u);
    ctx->pc = 0x20EC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC4Cu;
    // 0x20ec50: 0x320c3  sra         $a0, $v1, 3 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D030u, 0x20EC4Cu, 0x20EC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC54u;
label_20ec54:
    // 0x20ec54: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20ec58: 0x8c63a060  lw          $v1, -0x5FA0($v1)
    ctx->pc = 0x20ec58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942816)));
    // 0x20ec5c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x20ec5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x20ec60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20EC60u;
    {
        const bool branch_taken_0x20ec60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ec60) {
            ctx->pc = 0x20EC70u;
            goto label_20ec70;
        }
    }
    ctx->pc = 0x20EC68u;
    // 0x20ec68: 0xc08350c  jal         func_20D430
    ctx->pc = 0x20EC68u;
    SET_GPR_U32(ctx, 31, 0x20EC70u);
    ctx->pc = 0x20D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D430u, 0x20EC68u, 0x20EC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC70u;
label_20ec70:
    // 0x20ec70: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20ec74: 0x8c63a060  lw          $v1, -0x5FA0($v1)
    ctx->pc = 0x20ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942816)));
    // 0x20ec78: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x20ec78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x20ec7c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20EC7Cu;
    {
        const bool branch_taken_0x20ec7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ec7c) {
            ctx->pc = 0x20EC8Cu;
            goto label_20ec8c;
        }
    }
    ctx->pc = 0x20EC84u;
    // 0x20ec84: 0xc083340  jal         func_20CD00
    ctx->pc = 0x20EC84u;
    SET_GPR_U32(ctx, 31, 0x20EC8Cu);
    ctx->pc = 0x20CD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CD00u, 0x20EC84u, 0x20EC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC8Cu;
label_20ec8c:
    // 0x20ec8c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20ec90: 0x8c63a078  lw          $v1, -0x5F88($v1)
    ctx->pc = 0x20ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942840)));
    // 0x20ec94: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20EC94u;
    {
        const bool branch_taken_0x20ec94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ec94) {
            ctx->pc = 0x20ECA4u;
            goto label_20eca4;
        }
    }
    ctx->pc = 0x20EC9Cu;
    // 0x20ec9c: 0xc083180  jal         func_20C600
    ctx->pc = 0x20EC9Cu;
    SET_GPR_U32(ctx, 31, 0x20ECA4u);
    ctx->pc = 0x20ECA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC9Cu;
    // 0x20eca0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C600u, 0x20EC9Cu, 0x20ECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ECA4u;
label_20eca4:
    // 0x20eca4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x20eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x20eca8: 0xc46cd9c0  lwc1        $f12, -0x2640($v1)
    ctx->pc = 0x20eca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20ecac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20ecacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ecb0: 0x0  nop
    ctx->pc = 0x20ecb0u;
    // NOP
    // 0x20ecb4: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x20ecb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ecb8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x20ECB8u;
    {
        const bool branch_taken_0x20ecb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ecb8) {
            ctx->pc = 0x20ECD0u;
            goto label_20ecd0;
        }
    }
    ctx->pc = 0x20ECC0u;
    // 0x20ecc0: 0xc048930  jal         func_1224C0
    ctx->pc = 0x20ECC0u;
    SET_GPR_U32(ctx, 31, 0x20ECC8u);
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x20ECC0u, 0x20ECC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ECC8u;
label_20ecc8:
    // 0x20ecc8: 0xc0c7c28  jal         func_31F0A0
    ctx->pc = 0x20ECC8u;
    SET_GPR_U32(ctx, 31, 0x20ECD0u);
    ctx->pc = 0x20ECCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ECC8u;
    // 0x20eccc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F0A0u, 0x20ECC8u, 0x20ECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ECD0u;
label_20ecd0:
    // 0x20ecd0: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20ecd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20ecd4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20ecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20ecd8: 0xac80a060  sw          $zero, -0x5FA0($a0)
    ctx->pc = 0x20ecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294942816), GPR_U32(ctx, 0));
    // 0x20ecdc: 0xac60a070  sw          $zero, -0x5F90($v1)
    ctx->pc = 0x20ecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942832), GPR_U32(ctx, 0));
    // 0x20ece0: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20ece4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20ece4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20ece8: 0xac80a078  sw          $zero, -0x5F88($a0)
    ctx->pc = 0x20ece8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294942840), GPR_U32(ctx, 0));
    // 0x20ecec: 0xac60a068  sw          $zero, -0x5F98($v1)
    ctx->pc = 0x20ececu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942824), GPR_U32(ctx, 0));
    // 0x20ecf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ecf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20ecf4:
    // 0x20ecf4: 0x3e00008  jr          $ra
    ctx->pc = 0x20ECF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECF4u;
        // 0x20ecf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ECF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20ECFCu;
    // 0x20ecfc: 0x0  nop
    ctx->pc = 0x20ecfcu;
    // NOP
    if (ctx->pc == 0x20ecfcu) { ctx->pc = 0x20ed00u; }
}
