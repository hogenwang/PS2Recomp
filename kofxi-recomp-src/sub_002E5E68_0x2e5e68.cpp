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

// Function: sub_002E5E68
// Address: 0x2e5e68 - 0x2e6408
void sub_002E5E68_0x2e5e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5E68_0x2e5e68");
#endif

    switch (ctx->pc) {
        case 0x2e5eb0u: goto label_2e5eb0;
        case 0x2e5ec8u: goto label_2e5ec8;
        case 0x2e5ee8u: goto label_2e5ee8;
        case 0x2e5ef8u: goto label_2e5ef8;
        case 0x2e5f04u: goto label_2e5f04;
        case 0x2e5f10u: goto label_2e5f10;
        case 0x2e5f14u: goto label_2e5f14;
        case 0x2e5f20u: goto label_2e5f20;
        case 0x2e5f30u: goto label_2e5f30;
        case 0x2e5f50u: goto label_2e5f50;
        case 0x2e5f68u: goto label_2e5f68;
        case 0x2e5f84u: goto label_2e5f84;
        case 0x2e5f9cu: goto label_2e5f9c;
        case 0x2e5fc8u: goto label_2e5fc8;
        case 0x2e5fe0u: goto label_2e5fe0;
        case 0x2e5ff4u: goto label_2e5ff4;
        case 0x2e6008u: goto label_2e6008;
        case 0x2e601cu: goto label_2e601c;
        case 0x2e6030u: goto label_2e6030;
        case 0x2e6054u: goto label_2e6054;
        case 0x2e6058u: goto label_2e6058;
        case 0x2e6070u: goto label_2e6070;
        case 0x2e607cu: goto label_2e607c;
        case 0x2e6088u: goto label_2e6088;
        case 0x2e60a0u: goto label_2e60a0;
        case 0x2e60e8u: goto label_2e60e8;
        case 0x2e6170u: goto label_2e6170;
        case 0x2e619cu: goto label_2e619c;
        case 0x2e61b4u: goto label_2e61b4;
        case 0x2e61ccu: goto label_2e61cc;
        case 0x2e622cu: goto label_2e622c;
        case 0x2e6254u: goto label_2e6254;
        case 0x2e62a4u: goto label_2e62a4;
        case 0x2e62b8u: goto label_2e62b8;
        case 0x2e62fcu: goto label_2e62fc;
        case 0x2e6304u: goto label_2e6304;
        case 0x2e6318u: goto label_2e6318;
        case 0x2e6320u: goto label_2e6320;
        case 0x2e6344u: goto label_2e6344;
        case 0x2e6354u: goto label_2e6354;
        case 0x2e6378u: goto label_2e6378;
        case 0x2e6390u: goto label_2e6390;
        case 0x2e63a4u: goto label_2e63a4;
        case 0x2e63c0u: goto label_2e63c0;
        default: break;
    }

    ctx->pc = 0x2e5e68u;

label_2e5e68:
    // 0x2e5e68: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e5e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e5e6c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e5e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e5e70: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e5e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e5e74: 0x24a5f2e8  addiu       $a1, $a1, -0xD18
    ctx->pc = 0x2e5e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963944));
    // 0x2e5e78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e5e78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5e7c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e5e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e5e80: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2e5e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2e5e84: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e5e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e5e88: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2e5e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2e5e8c: 0x26267714  addiu       $a2, $s1, 0x7714
    ctx->pc = 0x2e5e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 30484));
    // 0x2e5e90: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2e5e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2e5e94: 0x26277814  addiu       $a3, $s1, 0x7814
    ctx->pc = 0x2e5e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 30740));
    // 0x2e5e98: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2e5e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2e5e9c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2e5e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2e5ea0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e5ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2e5ea4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e5ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e5ea8: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E5EA8u;
    SET_GPR_U32(ctx, 31, 0x2E5EB0u);
    ctx->pc = 0x2E5EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5EA8u;
    // 0x2e5eac: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E5EA8u, 0x2E5EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5EB0u;
label_2e5eb0:
    // 0x2e5eb0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e5eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e5eb4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e5eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e5eb8: 0x24a5f308  addiu       $a1, $a1, -0xCF8
    ctx->pc = 0x2e5eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963976));
    // 0x2e5ebc: 0x26267914  addiu       $a2, $s1, 0x7914
    ctx->pc = 0x2e5ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 30996));
    // 0x2e5ec0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E5EC0u;
    SET_GPR_U32(ctx, 31, 0x2E5EC8u);
    ctx->pc = 0x2E5EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5EC0u;
    // 0x2e5ec4: 0x26277a14  addiu       $a3, $s1, 0x7A14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 31252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E5EC0u, 0x2E5EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5EC8u;
label_2e5ec8:
    // 0x2e5ec8: 0x8e297b2c  lw          $t1, 0x7B2C($s1)
    ctx->pc = 0x2e5ec8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31532)));
    // 0x2e5ecc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e5eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e5ed0: 0x8e267b18  lw          $a2, 0x7B18($s1)
    ctx->pc = 0x2e5ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31512)));
    // 0x2e5ed4: 0x24a5f328  addiu       $a1, $a1, -0xCD8
    ctx->pc = 0x2e5ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964008));
    // 0x2e5ed8: 0x8e277b1c  lw          $a3, 0x7B1C($s1)
    ctx->pc = 0x2e5ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31516)));
    // 0x2e5edc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e5edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e5ee0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E5EE0u;
    SET_GPR_U32(ctx, 31, 0x2E5EE8u);
    ctx->pc = 0x2E5EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5EE0u;
    // 0x2e5ee4: 0x8e287b20  lw          $t0, 0x7B20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31520)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E5EE0u, 0x2E5EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5EE8u;
label_2e5ee8:
    // 0x2e5ee8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e5ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e5eec: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e5eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e5ef0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E5EF0u;
    SET_GPR_U32(ctx, 31, 0x2E5EF8u);
    ctx->pc = 0x2E5EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5EF0u;
    // 0x2e5ef4: 0x24a5f360  addiu       $a1, $a1, -0xCA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E5EF0u, 0x2E5EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5EF8u;
label_2e5ef8:
    // 0x2e5ef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5efc: 0xc0b96ac  jal         func_2E5AB0
    ctx->pc = 0x2E5EFCu;
    SET_GPR_U32(ctx, 31, 0x2E5F04u);
    ctx->pc = 0x2E5F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5EFCu;
    // 0x2e5f00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5AB0u, 0x2E5EFCu, 0x2E5F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F04u;
label_2e5f04:
    // 0x2e5f04: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e5f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e5f08: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e5f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e5f0c: 0xc08b5ac  jal         func_22D6B0
label_2e5f10:
    if (ctx->pc == 0x2E5F10u) {
        ctx->pc = 0x2E5F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F0Cu;
        // 0x2e5f10: 0x24a5f370  addiu       $a1, $a1, -0xC90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5F14u;
        goto label_2e5f14;
    }
    ctx->pc = 0x2E5F0Cu;
    SET_GPR_U32(ctx, 31, 0x2E5F14u);
    ctx->pc = 0x2E5F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5F0Cu;
    // 0x2e5f10: 0x24a5f370  addiu       $a1, $a1, -0xC90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E5F0Cu, 0x2E5F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F14u;
label_2e5f14:
    // 0x2e5f14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5f18: 0xc0b96ac  jal         func_2E5AB0
    ctx->pc = 0x2E5F18u;
    SET_GPR_U32(ctx, 31, 0x2E5F20u);
    ctx->pc = 0x2E5F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5F18u;
    // 0x2e5f1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5AB0u, 0x2E5F18u, 0x2E5F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F20u;
label_2e5f20:
    // 0x2e5f20: 0x92226a10  lbu         $v0, 0x6A10($s1)
    ctx->pc = 0x2e5f20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 27152)));
    // 0x2e5f24: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2E5F24u;
    {
        const bool branch_taken_0x2e5f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F24u;
        // 0x2e5f28: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f24) {
            ctx->pc = 0x2E60E4u;
            goto label_2e60e4;
        }
    }
    ctx->pc = 0x2E5F2Cu;
    // 0x2e5f2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e5f2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e5f30:
    // 0x2e5f30: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x2e5f30u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    // 0x2e5f34: 0x26337614  addiu       $s3, $s1, 0x7614
    ctx->pc = 0x2e5f34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 30228));
    // 0x2e5f38: 0x3c1e0040  lui         $fp, 0x40
    ctx->pc = 0x2e5f38u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
    // 0x2e5f3c: 0x26347b41  addiu       $s4, $s1, 0x7B41
    ctx->pc = 0x2e5f3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 31553));
    // 0x2e5f40: 0x26357c41  addiu       $s5, $s1, 0x7C41
    ctx->pc = 0x2e5f40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 31809));
    // 0x2e5f44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E5F44u;
    {
        const bool branch_taken_0x2e5f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F44u;
        // 0x2e5f48: 0x26367d41  addiu       $s6, $s1, 0x7D41 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 32065));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f44) {
            ctx->pc = 0x2E5F68u;
            goto label_2e5f68;
        }
    }
    ctx->pc = 0x2E5F4Cu;
    // 0x2e5f4c: 0x0  nop
    ctx->pc = 0x2e5f4cu;
    // NOP
label_2e5f50:
    // 0x2e5f50: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e5f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5f54: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e5f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5f58: 0x24a5f380  addiu       $a1, $a1, -0xC80
    ctx->pc = 0x2e5f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964096));
    // 0x2e5f5c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e5f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e5f60: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E5F60u;
    SET_GPR_U32(ctx, 31, 0x2E5F68u);
    ctx->pc = 0x2E5F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5F60u;
    // 0x2e5f64: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E5F60u, 0x2E5F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F68u;
label_2e5f68:
    // 0x2e5f68: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x2e5f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2e5f6c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5F6Cu;
    {
        const bool branch_taken_0x2e5f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F6Cu;
        // 0x2e5f70: 0x121200  sll         $v0, $s2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f6c) {
            ctx->pc = 0x2E5F8Cu;
            goto label_2e5f8c;
        }
    }
    ctx->pc = 0x2E5F74u;
    // 0x2e5f74: 0x24426c14  addiu       $v0, $v0, 0x6C14
    ctx->pc = 0x2e5f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27668));
    // 0x2e5f78: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x2e5f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e5f7c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2E5F7Cu;
    SET_GPR_U32(ctx, 31, 0x2E5F84u);
    ctx->pc = 0x2E5F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5F7Cu;
    // 0x2e5f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2E5F7Cu, 0x2E5F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F84u;
label_2e5f84:
    // 0x2e5f84: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2E5F84u;
    {
        const bool branch_taken_0x2e5f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5f84) {
            ctx->pc = 0x2E5F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5F84u;
            // 0x2e5f88: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5F50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e5f50;
        }
    }
    ctx->pc = 0x2E5F8Cu;
label_2e5f8c:
    // 0x2e5f8c: 0x26e5f398  addiu       $a1, $s7, -0xC68
    ctx->pc = 0x2e5f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294964120));
    // 0x2e5f90: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e5f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5f94: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E5F94u;
    SET_GPR_U32(ctx, 31, 0x2E5F9Cu);
    ctx->pc = 0x2E5F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5F94u;
    // 0x2e5f98: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E5F94u, 0x2E5F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F9Cu;
label_2e5f9c:
    // 0x2e5f9c: 0x92227b14  lbu         $v0, 0x7B14($s1)
    ctx->pc = 0x2e5f9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31508)));
    // 0x2e5fa0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5FA0u;
    {
        const bool branch_taken_0x2e5fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5FA0u;
        // 0x2e5fa4: 0x27c5f3b0  addiu       $a1, $fp, -0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294964144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5fa0) {
            ctx->pc = 0x2E5FB4u;
            goto label_2e5fb4;
        }
    }
    ctx->pc = 0x2E5FA8u;
    // 0x2e5fa8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5fac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5FACu;
    {
        const bool branch_taken_0x2e5fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5FACu;
        // 0x2e5fb0: 0x2446f210  addiu       $a2, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5fac) {
            ctx->pc = 0x2E5FBCu;
            goto label_2e5fbc;
        }
    }
    ctx->pc = 0x2E5FB4u;
label_2e5fb4:
    // 0x2e5fb4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5fb8: 0x2446f218  addiu       $a2, $v0, -0xDE8
    ctx->pc = 0x2e5fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e5fbc:
    // 0x2e5fbc: 0x92277b15  lbu         $a3, 0x7B15($s1)
    ctx->pc = 0x2e5fbcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31509)));
    // 0x2e5fc0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E5FC0u;
    SET_GPR_U32(ctx, 31, 0x2E5FC8u);
    ctx->pc = 0x2E5FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5FC0u;
    // 0x2e5fc4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E5FC0u, 0x2E5FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5FC8u;
label_2e5fc8:
    // 0x2e5fc8: 0x8e267b38  lw          $a2, 0x7B38($s1)
    ctx->pc = 0x2e5fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31544)));
    // 0x2e5fcc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5fd0: 0x8e277b3c  lw          $a3, 0x7B3C($s1)
    ctx->pc = 0x2e5fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31548)));
    // 0x2e5fd4: 0x2445f3e8  addiu       $a1, $v0, -0xC18
    ctx->pc = 0x2e5fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964200));
    // 0x2e5fd8: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E5FD8u;
    SET_GPR_U32(ctx, 31, 0x2E5FE0u);
    ctx->pc = 0x2E5FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5FD8u;
    // 0x2e5fdc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E5FD8u, 0x2E5FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5FE0u;
label_2e5fe0:
    // 0x2e5fe0: 0x92267b40  lbu         $a2, 0x7B40($s1)
    ctx->pc = 0x2e5fe0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31552)));
    // 0x2e5fe4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5fe8: 0x2445f410  addiu       $a1, $v0, -0xBF0
    ctx->pc = 0x2e5fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964240));
    // 0x2e5fec: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E5FECu;
    SET_GPR_U32(ctx, 31, 0x2E5FF4u);
    ctx->pc = 0x2E5FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5FECu;
    // 0x2e5ff0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E5FECu, 0x2E5FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5FF4u;
label_2e5ff4:
    // 0x2e5ff4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5ff8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e5ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ffc: 0x2445f428  addiu       $a1, $v0, -0xBD8
    ctx->pc = 0x2e5ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964264));
    // 0x2e6000: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E6000u;
    SET_GPR_U32(ctx, 31, 0x2E6008u);
    ctx->pc = 0x2E6004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6000u;
    // 0x2e6004: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E6000u, 0x2E6008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6008u;
label_2e6008:
    // 0x2e6008: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e6008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e600c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e600cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6010: 0x2445f448  addiu       $a1, $v0, -0xBB8
    ctx->pc = 0x2e6010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964296));
    // 0x2e6014: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E6014u;
    SET_GPR_U32(ctx, 31, 0x2E601Cu);
    ctx->pc = 0x2E6018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6014u;
    // 0x2e6018: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E6014u, 0x2E601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E601Cu;
label_2e601c:
    // 0x2e601c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e601cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e6020: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2e6020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6024: 0x2445f468  addiu       $a1, $v0, -0xB98
    ctx->pc = 0x2e6024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964328));
    // 0x2e6028: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E6028u;
    SET_GPR_U32(ctx, 31, 0x2E6030u);
    ctx->pc = 0x2E602Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6028u;
    // 0x2e602c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E6028u, 0x2E6030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6030u;
label_2e6030:
    // 0x2e6030: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e6030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e6034: 0x3406867c  ori         $a2, $zero, 0x867C
    ctx->pc = 0x2e6034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34428);
    // 0x2e6038: 0x3407877c  ori         $a3, $zero, 0x877C
    ctx->pc = 0x2e6038u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34684);
    // 0x2e603c: 0x3408887c  ori         $t0, $zero, 0x887C
    ctx->pc = 0x2e603cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34940);
    // 0x2e6040: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x2e6040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2e6044: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x2e6044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2e6048: 0x2284021  addu        $t0, $s1, $t0
    ctx->pc = 0x2e6048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x2e604c: 0x2445f480  addiu       $a1, $v0, -0xB80
    ctx->pc = 0x2e604cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964352));
    // 0x2e6050: 0xc08b5ac  jal         func_22D6B0
label_2e6054:
    if (ctx->pc == 0x2E6054u) {
        ctx->pc = 0x2E6054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6050u;
        // 0x2e6054: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6058u;
        goto label_2e6058;
    }
    ctx->pc = 0x2E6050u;
    SET_GPR_U32(ctx, 31, 0x2E6058u);
    ctx->pc = 0x2E6054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6050u;
    // 0x2e6054: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E6050u, 0x2E6058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6058u;
label_2e6058:
    // 0x2e6058: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e6058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e605c: 0x3406897c  ori         $a2, $zero, 0x897C
    ctx->pc = 0x2e605cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35196);
    // 0x2e6060: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x2e6060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2e6064: 0x2445f4b0  addiu       $a1, $v0, -0xB50
    ctx->pc = 0x2e6064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964400));
    // 0x2e6068: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E6068u;
    SET_GPR_U32(ctx, 31, 0x2E6070u);
    ctx->pc = 0x2E606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6068u;
    // 0x2e606c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E6068u, 0x2E6070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6070u;
label_2e6070:
    // 0x2e6070: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e6070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e6074: 0x34068a7c  ori         $a2, $zero, 0x8A7C
    ctx->pc = 0x2e6074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35452);
    // 0x2e6078: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x2e6078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_2e607c:
    // 0x2e607c: 0x2445f4c8  addiu       $a1, $v0, -0xB38
    ctx->pc = 0x2e607cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964424));
    // 0x2e6080: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E6080u;
    SET_GPR_U32(ctx, 31, 0x2E6088u);
    ctx->pc = 0x2E6084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6080u;
    // 0x2e6084: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E6080u, 0x2E6088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6088u;
label_2e6088:
    // 0x2e6088: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e6088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e608c: 0x34068b7c  ori         $a2, $zero, 0x8B7C
    ctx->pc = 0x2e608cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35708);
    // 0x2e6090: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x2e6090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2e6094: 0x2445f4e0  addiu       $a1, $v0, -0xB20
    ctx->pc = 0x2e6094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964448));
    // 0x2e6098: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E6098u;
    SET_GPR_U32(ctx, 31, 0x2E60A0u);
    ctx->pc = 0x2E609Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6098u;
    // 0x2e609c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E6098u, 0x2E60A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E60A0u;
label_2e60a0:
    // 0x2e60a0: 0x34068c7c  ori         $a2, $zero, 0x8C7C
    ctx->pc = 0x2e60a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35964);
    // 0x2e60a4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e60a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e60a8: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x2e60a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2e60ac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e60acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e60b0: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2e60b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e60b4: 0x2445f500  addiu       $a1, $v0, -0xB00
    ctx->pc = 0x2e60b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964480));
    // 0x2e60b8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2e60b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e60bc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e60bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e60c0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2e60c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e60c4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2e60c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e60c8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2e60c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e60cc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e60ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e60d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e60d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e60d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e60d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e60d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e60d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e60dc: 0x808b5ac  j           func_22D6B0
    ctx->pc = 0x2E60DCu;
    ctx->pc = 0x2E60E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E60DCu;
    // 0x2e60e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2E60E4u;
label_2e60e4:
    // 0x2e60e4: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2e60e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2e60e8:
    // 0x2e60e8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2e60e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e60ec: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2e60ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e60f0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2e60f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e60f4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2e60f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e60f8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e60f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e60fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e60fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6100: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e6100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6104: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e6104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6108: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6108u;
        // 0x2e610c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6110u;
    // 0x2e6110: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e6110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e6114: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e6114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2e6118: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e6118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e611c: 0x8c62e3d0  lw          $v0, -0x1C30($v1)
    ctx->pc = 0x2e611cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
    // 0x2e6120: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e6120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6124: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e6124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e6128: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2e6128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2e612c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2e612cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2e6130: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2e6130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2e6134: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2e6134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2e6138: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2e6138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2e613c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e613cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2e6140: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e6140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e6144: 0x184000a3  blez        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2E6144u;
    {
        const bool branch_taken_0x2e6144 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E6148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6144u;
        // 0x2e6148: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6144) {
            ctx->pc = 0x2E63D4u;
            goto label_2e63d4;
        }
    }
    ctx->pc = 0x2E614Cu;
    // 0x2e614c: 0x3c1e0040  lui         $fp, 0x40
    ctx->pc = 0x2e614cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
    // 0x2e6150: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x2e6150u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    // 0x2e6154: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x2e6154u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x2e6158: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x2e6158u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x2e615c: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x2e615cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x2e6160: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x2e6160u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x2e6164: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x2e6164u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x2e6168: 0x3402af20  ori         $v0, $zero, 0xAF20
    ctx->pc = 0x2e6168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44832);
    // 0x2e616c: 0x0  nop
    ctx->pc = 0x2e616cu;
    // NOP
label_2e6170:
    // 0x2e6170: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2e6170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2e6174: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x2e6174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e6178: 0x8c83e3d4  lw          $v1, -0x1C2C($a0)
    ctx->pc = 0x2e6178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960084)));
    // 0x2e617c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2e617cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2e6180: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e6180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e6184: 0x24c5f518  addiu       $a1, $a2, -0xAE8
    ctx->pc = 0x2e6184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964504));
    // 0x2e6188: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e6188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e618c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2e618cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e6190: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2e6190u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e6194: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E6194u;
    SET_GPR_U32(ctx, 31, 0x2E619Cu);
    ctx->pc = 0x2E6198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6194u;
    // 0x2e6198: 0x8e080404  lw          $t0, 0x404($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E6194u, 0x2E619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E619Cu;
label_2e619c:
    // 0x2e619c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e619cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e61a0: 0x27c5f540  addiu       $a1, $fp, -0xAC0
    ctx->pc = 0x2e61a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294964544));
    // 0x2e61a4: 0x26060104  addiu       $a2, $s0, 0x104
    ctx->pc = 0x2e61a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x2e61a8: 0x26070204  addiu       $a3, $s0, 0x204
    ctx->pc = 0x2e61a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 516));
    // 0x2e61ac: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E61ACu;
    SET_GPR_U32(ctx, 31, 0x2E61B4u);
    ctx->pc = 0x2E61B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E61ACu;
    // 0x2e61b0: 0x26080304  addiu       $t0, $s0, 0x304 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E61ACu, 0x2E61B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E61B4u;
label_2e61b4:
    // 0x2e61b4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e61b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e61b8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e61b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e61bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e61bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e61c0: 0x26e5f568  addiu       $a1, $s7, -0xA98
    ctx->pc = 0x2e61c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294964584));
    // 0x2e61c4: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E61C4u;
    SET_GPR_U32(ctx, 31, 0x2E61CCu);
    ctx->pc = 0x2E61C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E61C4u;
    // 0x2e61c8: 0x90460d7c  lbu         $a2, 0xD7C($v0) (Delay Slot)
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3452)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E61C4u, 0x2E61CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E61CCu;
label_2e61cc:
    // 0x2e61cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e61ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e61d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e61d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e61d4: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2E61D4u;
    {
        const bool branch_taken_0x2e61d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E61D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61D4u;
        // 0x2e61d8: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61d4) {
            ctx->pc = 0x2E62C0u;
            goto label_2e62c0;
        }
    }
    ctx->pc = 0x2E61DCu;
    // 0x2e61dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E61DCu;
    {
        const bool branch_taken_0x2e61dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E61E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61DCu;
        // 0x2e61e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61dc) {
            ctx->pc = 0x2E61F4u;
            goto label_2e61f4;
        }
    }
    ctx->pc = 0x2E61E4u;
    // 0x2e61e4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E61E4u;
    {
        const bool branch_taken_0x2e61e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E61E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61E4u;
        // 0x2e61e8: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61e4) {
            ctx->pc = 0x2E6200u;
            goto label_2e6200;
        }
    }
    ctx->pc = 0x2E61ECu;
    // 0x2e61ec: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2E61ECu;
    {
        const bool branch_taken_0x2e61ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E61F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61ECu;
        // 0x2e61f0: 0x2021021  addu        $v0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61ec) {
            ctx->pc = 0x2E6328u;
            goto label_2e6328;
        }
    }
    ctx->pc = 0x2E61F4u;
label_2e61f4:
    // 0x2e61f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e61f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e61f8: 0x1462004a  bne         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2E61F8u;
    {
        const bool branch_taken_0x2e61f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E61FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61F8u;
        // 0x2e61fc: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61f8) {
            ctx->pc = 0x2E6324u;
            goto label_2e6324;
        }
    }
    ctx->pc = 0x2E6200u;
label_2e6200:
    // 0x2e6200: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e6200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e6204: 0x92036708  lbu         $v1, 0x6708($s0)
    ctx->pc = 0x2e6204u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26376)));
    // 0x2e6208: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6208u;
    {
        const bool branch_taken_0x2e6208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6208u;
        // 0x2e620c: 0x2445f578  addiu       $a1, $v0, -0xA88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6208) {
            ctx->pc = 0x2E621Cu;
            goto label_2e621c;
        }
    }
    ctx->pc = 0x2E6210u;
    // 0x2e6210: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e6210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e6214: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6214u;
    {
        const bool branch_taken_0x2e6214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6214u;
        // 0x2e6218: 0x2446f210  addiu       $a2, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6214) {
            ctx->pc = 0x2E6224u;
            goto label_2e6224;
        }
    }
    ctx->pc = 0x2E621Cu;
label_2e621c:
    // 0x2e621c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e621cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e6220: 0x2446f218  addiu       $a2, $v0, -0xDE8
    ctx->pc = 0x2e6220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e6224:
    // 0x2e6224: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E6224u;
    SET_GPR_U32(ctx, 31, 0x2E622Cu);
    ctx->pc = 0x2E6228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6224u;
    // 0x2e6228: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E6224u, 0x2E622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E622Cu;
label_2e622c:
    // 0x2e622c: 0x92026708  lbu         $v0, 0x6708($s0)
    ctx->pc = 0x2e622cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26376)));
    // 0x2e6230: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E6230u;
    {
        const bool branch_taken_0x2e6230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6230u;
        // 0x2e6234: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6230) {
            ctx->pc = 0x2E625Cu;
            goto label_2e625c;
        }
    }
    ctx->pc = 0x2E6238u;
    // 0x2e6238: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e6238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e623c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e623cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e6240: 0x24a5f588  addiu       $a1, $a1, -0xA78
    ctx->pc = 0x2e6240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964616));
    // 0x2e6244: 0x2606680b  addiu       $a2, $s0, 0x680B
    ctx->pc = 0x2e6244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 26635));
    // 0x2e6248: 0x2607690b  addiu       $a3, $s0, 0x690B
    ctx->pc = 0x2e6248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 26891));
    // 0x2e624c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E624Cu;
    SET_GPR_U32(ctx, 31, 0x2E6254u);
    ctx->pc = 0x2E6250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E624Cu;
    // 0x2e6250: 0x26080608  addiu       $t0, $s0, 0x608 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E624Cu, 0x2E6254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6254u;
label_2e6254:
    // 0x2e6254: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E6254u;
    {
        const bool branch_taken_0x2e6254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6254u;
        // 0x2e6258: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6254) {
            ctx->pc = 0x2E62A8u;
            goto label_2e62a8;
        }
    }
    ctx->pc = 0x2E625Cu;
label_2e625c:
    // 0x2e625c: 0x92036809  lbu         $v1, 0x6809($s0)
    ctx->pc = 0x2e625cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26633)));
    // 0x2e6260: 0x2445f5b0  addiu       $a1, $v0, -0xA50
    ctx->pc = 0x2e6260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964656));
    // 0x2e6264: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6264u;
    {
        const bool branch_taken_0x2e6264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6264u;
        // 0x2e6268: 0x26066709  addiu       $a2, $s0, 0x6709 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 26377));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6264) {
            ctx->pc = 0x2E6278u;
            goto label_2e6278;
        }
    }
    ctx->pc = 0x2E626Cu;
    // 0x2e626c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e626cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e6270: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6270u;
    {
        const bool branch_taken_0x2e6270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6270u;
        // 0x2e6274: 0x2447f210  addiu       $a3, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6270) {
            ctx->pc = 0x2E6280u;
            goto label_2e6280;
        }
    }
    ctx->pc = 0x2E6278u;
label_2e6278:
    // 0x2e6278: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e6278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e627c: 0x2447f218  addiu       $a3, $v0, -0xDE8
    ctx->pc = 0x2e627cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e6280:
    // 0x2e6280: 0x9202680a  lbu         $v0, 0x680A($s0)
    ctx->pc = 0x2e6280u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26634)));
    // 0x2e6284: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6284u;
    {
        const bool branch_taken_0x2e6284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6284u;
        // 0x2e6288: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6284) {
            ctx->pc = 0x2E6294u;
            goto label_2e6294;
        }
    }
    ctx->pc = 0x2E628Cu;
    // 0x2e628c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E628Cu;
    {
        const bool branch_taken_0x2e628c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E628Cu;
        // 0x2e6290: 0x2448f210  addiu       $t0, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e628c) {
            ctx->pc = 0x2E629Cu;
            goto label_2e629c;
        }
    }
    ctx->pc = 0x2E6294u;
label_2e6294:
    // 0x2e6294: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e6294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e6298: 0x2448f218  addiu       $t0, $v0, -0xDE8
    ctx->pc = 0x2e6298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e629c:
    // 0x2e629c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E629Cu;
    SET_GPR_U32(ctx, 31, 0x2E62A4u);
    ctx->pc = 0x2E62A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E629Cu;
    // 0x2e62a0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E629Cu, 0x2E62A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E62A4u;
label_2e62a4:
    // 0x2e62a4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e62a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e62a8:
    // 0x2e62a8: 0x8e066a0c  lw          $a2, 0x6A0C($s0)
    ctx->pc = 0x2e62a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27148)));
    // 0x2e62ac: 0x24a5f600  addiu       $a1, $a1, -0xA00
    ctx->pc = 0x2e62acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964736));
    // 0x2e62b0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E62B0u;
    SET_GPR_U32(ctx, 31, 0x2E62B8u);
    ctx->pc = 0x2E62B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E62B0u;
    // 0x2e62b4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E62B0u, 0x2E62B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E62B8u;
label_2e62b8:
    // 0x2e62b8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E62B8u;
    {
        const bool branch_taken_0x2e62b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E62BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62B8u;
        // 0x2e62bc: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e62b8) {
            ctx->pc = 0x2E6324u;
            goto label_2e6324;
        }
    }
    ctx->pc = 0x2E62C0u;
label_2e62c0:
    // 0x2e62c0: 0x92026a10  lbu         $v0, 0x6A10($s0)
    ctx->pc = 0x2e62c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27152)));
    // 0x2e62c4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E62C4u;
    {
        const bool branch_taken_0x2e62c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E62C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62C4u;
        // 0x2e62c8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e62c4) {
            ctx->pc = 0x2E6318u;
            goto label_2e6318;
        }
    }
    ctx->pc = 0x2E62CCu;
    // 0x2e62cc: 0x92036c11  lbu         $v1, 0x6C11($s0)
    ctx->pc = 0x2e62ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27665)));
    // 0x2e62d0: 0x2445f610  addiu       $a1, $v0, -0x9F0
    ctx->pc = 0x2e62d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964752));
    // 0x2e62d4: 0x26066a11  addiu       $a2, $s0, 0x6A11
    ctx->pc = 0x2e62d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 27153));
    // 0x2e62d8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E62D8u;
    {
        const bool branch_taken_0x2e62d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E62DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62D8u;
        // 0x2e62dc: 0x26076b11  addiu       $a3, $s0, 0x6B11 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 27409));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e62d8) {
            ctx->pc = 0x2E62ECu;
            goto label_2e62ec;
        }
    }
    ctx->pc = 0x2E62E0u;
    // 0x2e62e0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e62e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e62e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E62E4u;
    {
        const bool branch_taken_0x2e62e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E62E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62E4u;
        // 0x2e62e8: 0x2448f210  addiu       $t0, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e62e4) {
            ctx->pc = 0x2E62F4u;
            goto label_2e62f4;
        }
    }
    ctx->pc = 0x2E62ECu;
label_2e62ec:
    // 0x2e62ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e62ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e62f0: 0x2448f218  addiu       $t0, $v0, -0xDE8
    ctx->pc = 0x2e62f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e62f4:
    // 0x2e62f4: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E62F4u;
    SET_GPR_U32(ctx, 31, 0x2E62FCu);
    ctx->pc = 0x2E62F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E62F4u;
    // 0x2e62f8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E62F4u, 0x2E62FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E62FCu;
label_2e62fc:
    // 0x2e62fc: 0xc0b979a  jal         func_2E5E68
    ctx->pc = 0x2E62FCu;
    SET_GPR_U32(ctx, 31, 0x2E6304u);
    ctx->pc = 0x2E6300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E62FCu;
    // 0x2e6300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5E68u;
    goto label_2e5e68;
    ctx->pc = 0x2E6304u;
label_2e6304:
    // 0x2e6304: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e6304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e6308: 0x8e066a0c  lw          $a2, 0x6A0C($s0)
    ctx->pc = 0x2e6308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27148)));
    // 0x2e630c: 0x24a5f600  addiu       $a1, $a1, -0xA00
    ctx->pc = 0x2e630cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964736));
    // 0x2e6310: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E6310u;
    SET_GPR_U32(ctx, 31, 0x2E6318u);
    ctx->pc = 0x2E6314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6310u;
    // 0x2e6314: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E6310u, 0x2E6318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6318u;
label_2e6318:
    // 0x2e6318: 0xc0b979a  jal         func_2E5E68
    ctx->pc = 0x2E6318u;
    SET_GPR_U32(ctx, 31, 0x2E6320u);
    ctx->pc = 0x2E631Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6318u;
    // 0x2e631c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5E68u;
    goto label_2e5e68;
    ctx->pc = 0x2E6320u;
label_2e6320:
    // 0x2e6320: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e6320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2e6324:
    // 0x2e6324: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e6324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2e6328:
    // 0x2e6328: 0x90430d7e  lbu         $v1, 0xD7E($v0)
    ctx->pc = 0x2e6328u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3454)));
    // 0x2e632c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E632Cu;
    {
        const bool branch_taken_0x2e632c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E632Cu;
        // 0x2e6330: 0x26c5f658  addiu       $a1, $s6, -0x9A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294964824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e632c) {
            ctx->pc = 0x2E6340u;
            goto label_2e6340;
        }
    }
    ctx->pc = 0x2E6334u;
    // 0x2e6334: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e6334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e6338: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6338u;
    {
        const bool branch_taken_0x2e6338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6338u;
        // 0x2e633c: 0x2446f210  addiu       $a2, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6338) {
            ctx->pc = 0x2E6348u;
            goto label_2e6348;
        }
    }
    ctx->pc = 0x2E6340u;
label_2e6340:
    // 0x2e6340: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e6340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2e6344:
    // 0x2e6344: 0x2446f218  addiu       $a2, $v0, -0xDE8
    ctx->pc = 0x2e6344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e6348:
    // 0x2e6348: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e6348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e634c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E634Cu;
    SET_GPR_U32(ctx, 31, 0x2E6354u);
    ctx->pc = 0x2E6350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E634Cu;
    // 0x2e6350: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E634Cu, 0x2E6354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6354u;
label_2e6354:
    // 0x2e6354: 0x3406907f  ori         $a2, $zero, 0x907F
    ctx->pc = 0x2e6354u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36991);
    // 0x2e6358: 0x3407917f  ori         $a3, $zero, 0x917F
    ctx->pc = 0x2e6358u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37247);
    // 0x2e635c: 0x34088f7f  ori         $t0, $zero, 0x8F7F
    ctx->pc = 0x2e635cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36735);
    // 0x2e6360: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x2e6360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2e6364: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x2e6364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2e6368: 0x2084021  addu        $t0, $s0, $t0
    ctx->pc = 0x2e6368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x2e636c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e636cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e6370: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E6370u;
    SET_GPR_U32(ctx, 31, 0x2E6378u);
    ctx->pc = 0x2E6374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6370u;
    // 0x2e6374: 0x26a5f670  addiu       $a1, $s5, -0x990 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E6370u, 0x2E6378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6378u;
label_2e6378:
    // 0x2e6378: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e6378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e637c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e637cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e6380: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e6380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e6384: 0x2685f698  addiu       $a1, $s4, -0x968
    ctx->pc = 0x2e6384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294964888));
    // 0x2e6388: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E6388u;
    SET_GPR_U32(ctx, 31, 0x2E6390u);
    ctx->pc = 0x2E638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6388u;
    // 0x2e638c: 0x90460d7d  lbu         $a2, 0xD7D($v0) (Delay Slot)
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3453)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E6388u, 0x2E6390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6390u;
label_2e6390:
    // 0x2e6390: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e6390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e6394: 0x2665f6b0  addiu       $a1, $s3, -0x950
    ctx->pc = 0x2e6394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964912));
    // 0x2e6398: 0x26060408  addiu       $a2, $s0, 0x408
    ctx->pc = 0x2e6398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1032));
    // 0x2e639c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E639Cu;
    SET_GPR_U32(ctx, 31, 0x2E63A4u);
    ctx->pc = 0x2E63A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E639Cu;
    // 0x2e63a0: 0x26070508  addiu       $a3, $s0, 0x508 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E639Cu, 0x2E63A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E63A4u;
label_2e63a4:
    // 0x2e63a4: 0x34068d7f  ori         $a2, $zero, 0x8D7F
    ctx->pc = 0x2e63a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36223);
    // 0x2e63a8: 0x34078e7f  ori         $a3, $zero, 0x8E7F
    ctx->pc = 0x2e63a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36479);
    // 0x2e63ac: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x2e63acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2e63b0: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x2e63b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2e63b4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e63b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e63b8: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E63B8u;
    SET_GPR_U32(ctx, 31, 0x2E63C0u);
    ctx->pc = 0x2E63BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E63B8u;
    // 0x2e63bc: 0x2645f6d8  addiu       $a1, $s2, -0x928 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294964952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E63B8u, 0x2E63C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E63C0u;
label_2e63c0:
    // 0x2e63c0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e63c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2e63c4: 0x8c62e3d0  lw          $v0, -0x1C30($v1)
    ctx->pc = 0x2e63c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
    // 0x2e63c8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2e63c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e63cc: 0x1440ff68  bnez        $v0, . + 4 + (-0x98 << 2)
    ctx->pc = 0x2E63CCu;
    {
        const bool branch_taken_0x2e63cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E63D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63CCu;
        // 0x2e63d0: 0x3402af20  ori         $v0, $zero, 0xAF20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44832);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e63cc) {
            ctx->pc = 0x2E6170u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6170;
        }
    }
    ctx->pc = 0x2E63D4u;
label_2e63d4:
    // 0x2e63d4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e63d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e63d8: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2e63d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e63dc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2e63dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e63e0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2e63e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e63e4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2e63e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e63e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2e63e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e63ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e63ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e63f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e63f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e63f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e63f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e63f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e63f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e63fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E63FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63FCu;
        // 0x2e6400: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E63FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6404u;
    // 0x2e6404: 0x0  nop
    ctx->pc = 0x2e6404u;
    // NOP
}
