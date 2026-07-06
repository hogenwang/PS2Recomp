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

// Function: sub_0019FDD0
// Address: 0x19fdd0 - 0x19fe60
void sub_0019FDD0_0x19fdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FDD0_0x19fdd0");
#endif

    ctx->pc = 0x19fdd0u;

    // 0x19fdd0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x19fdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x19fdd4: 0x9064f35e  lbu         $a0, -0xCA2($v1)
    ctx->pc = 0x19fdd4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964062)));
    // 0x19fdd8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19fddc: 0x5083001a  beql        $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x19FDDCu;
    {
        const bool branch_taken_0x19fddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19fddc) {
            ctx->pc = 0x19FDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FDDCu;
            // 0x19fde0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FE48u;
            goto label_19fe48;
        }
    }
    ctx->pc = 0x19FDE4u;
    // 0x19fde4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19fde8: 0x50830014  beql        $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19FDE8u;
    {
        const bool branch_taken_0x19fde8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19fde8) {
            ctx->pc = 0x19FDECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FDE8u;
            // 0x19fdec: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FE3Cu;
            goto label_19fe3c;
        }
    }
    ctx->pc = 0x19FDF0u;
    // 0x19fdf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19fdf4: 0x5083000e  beql        $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x19FDF4u;
    {
        const bool branch_taken_0x19fdf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19fdf4) {
            ctx->pc = 0x19FDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FDF4u;
            // 0x19fdf8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FE30u;
            goto label_19fe30;
        }
    }
    ctx->pc = 0x19FDFCu;
    // 0x19fdfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fe00: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19FE00u;
    {
        const bool branch_taken_0x19fe00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19fe00) {
            ctx->pc = 0x19FE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FE00u;
            // 0x19fe04: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FE24u;
            goto label_19fe24;
        }
    }
    ctx->pc = 0x19FE08u;
    // 0x19fe08: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FE08u;
    {
        const bool branch_taken_0x19fe08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fe08) {
            ctx->pc = 0x19FE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FE08u;
            // 0x19fe0c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FE18u;
            goto label_19fe18;
        }
    }
    ctx->pc = 0x19FE10u;
    // 0x19fe10: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19FE10u;
    {
        const bool branch_taken_0x19fe10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fe10) {
            ctx->pc = 0x19FE50u;
            goto label_19fe50;
        }
    }
    ctx->pc = 0x19FE18u;
label_19fe18:
    // 0x19fe18: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19fe18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19fe1c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19FE1Cu;
    {
        const bool branch_taken_0x19fe1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE1Cu;
        // 0x19fe20: 0xa464da18  sh          $a0, -0x25E8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294957592), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe1c) {
            ctx->pc = 0x19FE50u;
            goto label_19fe50;
        }
    }
    ctx->pc = 0x19FE24u;
label_19fe24:
    // 0x19fe24: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19fe28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19FE28u;
    {
        const bool branch_taken_0x19fe28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE28u;
        // 0x19fe2c: 0xa464da18  sh          $a0, -0x25E8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294957592), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe28) {
            ctx->pc = 0x19FE50u;
            goto label_19fe50;
        }
    }
    ctx->pc = 0x19FE30u;
label_19fe30:
    // 0x19fe30: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19fe34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19FE34u;
    {
        const bool branch_taken_0x19fe34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE34u;
        // 0x19fe38: 0xa464da18  sh          $a0, -0x25E8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294957592), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe34) {
            ctx->pc = 0x19FE50u;
            goto label_19fe50;
        }
    }
    ctx->pc = 0x19FE3Cu;
label_19fe3c:
    // 0x19fe3c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19fe40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19FE40u;
    {
        const bool branch_taken_0x19fe40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE40u;
        // 0x19fe44: 0xa464da18  sh          $a0, -0x25E8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294957592), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe40) {
            ctx->pc = 0x19FE50u;
            goto label_19fe50;
        }
    }
    ctx->pc = 0x19FE48u;
label_19fe48:
    // 0x19fe48: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19fe4c: 0xa464da18  sh          $a0, -0x25E8($v1)
    ctx->pc = 0x19fe4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957592), (uint16_t)GPR_U32(ctx, 4));
label_19fe50:
    // 0x19fe50: 0x3e00008  jr          $ra
    ctx->pc = 0x19FE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FE58u;
    // 0x19fe58: 0x0  nop
    ctx->pc = 0x19fe58u;
    // NOP
    // 0x19fe5c: 0x0  nop
    ctx->pc = 0x19fe5cu;
    // NOP
    if (ctx->pc == 0x19fe5cu) { ctx->pc = 0x19fe60u; }
}
