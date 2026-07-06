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

// Function: sub_00176CB0
// Address: 0x176cb0 - 0x176da0
void sub_00176CB0_0x176cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176CB0_0x176cb0");
#endif

    switch (ctx->pc) {
        case 0x176cc8u: goto label_176cc8;
        case 0x176d10u: goto label_176d10;
        case 0x176d24u: goto label_176d24;
        case 0x176d38u: goto label_176d38;
        case 0x176d4cu: goto label_176d4c;
        case 0x176d60u: goto label_176d60;
        case 0x176d74u: goto label_176d74;
        case 0x176d88u: goto label_176d88;
        default: break;
    }

    ctx->pc = 0x176cb0u;

    // 0x176cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x176cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x176cb4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x176cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x176cb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x176cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176cbc: 0x24043390  addiu       $a0, $zero, 0x3390
    ctx->pc = 0x176cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13200));
    // 0x176cc0: 0xc067d98  jal         func_19F660
    ctx->pc = 0x176CC0u;
    SET_GPR_U32(ctx, 31, 0x176CC8u);
    ctx->pc = 0x176CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176CC0u;
    // 0x176cc4: 0xac40a790  sw          $zero, -0x5870($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294944656), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F660u, 0x176CC0u, 0x176CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176CC8u;
label_176cc8:
    // 0x176cc8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x176cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x176ccc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x176cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x176cd0: 0xac62a7d8  sw          $v0, -0x5828($v1)
    ctx->pc = 0x176cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944728), GPR_U32(ctx, 2));
    // 0x176cd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176cd8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x176cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x176cdc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x176cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x176ce0: 0xa44437e8  sh          $a0, 0x37E8($v0)
    ctx->pc = 0x176ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14312), (uint16_t)GPR_U32(ctx, 4));
    // 0x176ce4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x176ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x176ce8: 0xa44437d8  sh          $a0, 0x37D8($v0)
    ctx->pc = 0x176ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14296), (uint16_t)GPR_U32(ctx, 4));
    // 0x176cec: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x176cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x176cf0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x176cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x176cf4: 0xac40af68  sw          $zero, -0x5098($v0)
    ctx->pc = 0x176cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294946664), GPR_U32(ctx, 0));
    // 0x176cf8: 0x2484ad80  addiu       $a0, $a0, -0x5280
    ctx->pc = 0x176cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946176));
    // 0x176cfc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x176cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x176d00: 0xac40a798  sw          $zero, -0x5868($v0)
    ctx->pc = 0x176d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294944664), GPR_U32(ctx, 0));
    // 0x176d04: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x176d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x176d08: 0xc067d64  jal         func_19F590
    ctx->pc = 0x176D08u;
    SET_GPR_U32(ctx, 31, 0x176D10u);
    ctx->pc = 0x176D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D08u;
    // 0x176d0c: 0xac40a7a0  sw          $zero, -0x5860($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294944672), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F590u, 0x176D08u, 0x176D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D10u;
label_176d10:
    // 0x176d10: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x176d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x176d14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d18: 0x2484acf0  addiu       $a0, $a0, -0x5310
    ctx->pc = 0x176d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946032));
    // 0x176d1c: 0xc067d64  jal         func_19F590
    ctx->pc = 0x176D1Cu;
    SET_GPR_U32(ctx, 31, 0x176D24u);
    ctx->pc = 0x176D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D1Cu;
    // 0x176d20: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F590u, 0x176D1Cu, 0x176D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D24u;
label_176d24:
    // 0x176d24: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x176d24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x176d28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d2c: 0x2484ac60  addiu       $a0, $a0, -0x53A0
    ctx->pc = 0x176d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945888));
    // 0x176d30: 0xc067d64  jal         func_19F590
    ctx->pc = 0x176D30u;
    SET_GPR_U32(ctx, 31, 0x176D38u);
    ctx->pc = 0x176D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D30u;
    // 0x176d34: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F590u, 0x176D30u, 0x176D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D38u;
label_176d38:
    // 0x176d38: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x176d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x176d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d40: 0x2484abe0  addiu       $a0, $a0, -0x5420
    ctx->pc = 0x176d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945760));
    // 0x176d44: 0xc067d64  jal         func_19F590
    ctx->pc = 0x176D44u;
    SET_GPR_U32(ctx, 31, 0x176D4Cu);
    ctx->pc = 0x176D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D44u;
    // 0x176d48: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F590u, 0x176D44u, 0x176D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D4Cu;
label_176d4c:
    // 0x176d4c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x176d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x176d50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d54: 0x2484af70  addiu       $a0, $a0, -0x5090
    ctx->pc = 0x176d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946672));
    // 0x176d58: 0xc067d64  jal         func_19F590
    ctx->pc = 0x176D58u;
    SET_GPR_U32(ctx, 31, 0x176D60u);
    ctx->pc = 0x176D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D58u;
    // 0x176d5c: 0x24060600  addiu       $a2, $zero, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F590u, 0x176D58u, 0x176D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D60u;
label_176d60:
    // 0x176d60: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x176d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x176d64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d68: 0x2484a580  addiu       $a0, $a0, -0x5A80
    ctx->pc = 0x176d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944128));
    // 0x176d6c: 0xc067d6c  jal         func_19F5B0
    ctx->pc = 0x176D6Cu;
    SET_GPR_U32(ctx, 31, 0x176D74u);
    ctx->pc = 0x176D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D6Cu;
    // 0x176d70: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F5B0u, 0x176D6Cu, 0x176D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D74u;
label_176d74:
    // 0x176d74: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x176d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x176d78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d7c: 0x2484a380  addiu       $a0, $a0, -0x5C80
    ctx->pc = 0x176d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943616));
    // 0x176d80: 0xc067d6c  jal         func_19F5B0
    ctx->pc = 0x176D80u;
    SET_GPR_U32(ctx, 31, 0x176D88u);
    ctx->pc = 0x176D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D80u;
    // 0x176d84: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F5B0u, 0x176D80u, 0x176D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D88u;
label_176d88:
    // 0x176d88: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x176d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x176d8c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x176d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x176d90: 0xa46437e0  sh          $a0, 0x37E0($v1)
    ctx->pc = 0x176d90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14304), (uint16_t)GPR_U32(ctx, 4));
    // 0x176d94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176d98: 0x3e00008  jr          $ra
    ctx->pc = 0x176D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D98u;
        // 0x176d9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176DA0u;
}
