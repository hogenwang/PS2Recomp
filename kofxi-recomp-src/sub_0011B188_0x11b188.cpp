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

// Function: sub_0011B188
// Address: 0x11b188 - 0x11b270
void sub_0011B188_0x11b188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B188_0x11b188");
#endif

    switch (ctx->pc) {
        case 0x11b1f8u: goto label_11b1f8;
        case 0x11b210u: goto label_11b210;
        case 0x11b228u: goto label_11b228;
        case 0x11b244u: goto label_11b244;
        default: break;
    }

    ctx->pc = 0x11b188u;

    // 0x11b188: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11b188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11b18c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b190: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x11b190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x11b194: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x11b194u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x11b198: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11b198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11b19c: 0x8e229de8  lw          $v0, -0x6218($s1)
    ctx->pc = 0x11b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942184)));
    // 0x11b1a0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x11b1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x11b1a4: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11B1A4u;
    {
        const bool branch_taken_0x11b1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1A4u;
        // 0x11b1a8: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1a4) {
            ctx->pc = 0x11B1D0u;
            goto label_11b1d0;
        }
    }
    ctx->pc = 0x11B1ACu;
    // 0x11b1ac: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x11b1acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x11b1b0: 0x8e029dec  lw          $v0, -0x6214($s0)
    ctx->pc = 0x11b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942188)));
    // 0x11b1b4: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B1B4u;
    {
        const bool branch_taken_0x11b1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1B4u;
        // 0x11b1b8: 0x3c120036  lui         $s2, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1b4) {
            ctx->pc = 0x11B1D4u;
            goto label_11b1d4;
        }
    }
    ctx->pc = 0x11B1BCu;
    // 0x11b1bc: 0x8e429df0  lw          $v0, -0x6210($s2)
    ctx->pc = 0x11b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294942192)));
    // 0x11b1c0: 0x14430025  bne         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x11B1C0u;
    {
        const bool branch_taken_0x11b1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11B1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1C0u;
        // 0x11b1c4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1c0) {
            ctx->pc = 0x11B258u;
            goto label_11b258;
        }
    }
    ctx->pc = 0x11B1C8u;
    // 0x11b1c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11B1C8u;
    {
        const bool branch_taken_0x11b1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1C8u;
        // 0x11b1cc: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1c8) {
            ctx->pc = 0x11B1DCu;
            goto label_11b1dc;
        }
    }
    ctx->pc = 0x11B1D0u;
label_11b1d0:
    // 0x11b1d0: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x11b1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
label_11b1d4:
    // 0x11b1d4: 0x3c120036  lui         $s2, 0x36
    ctx->pc = 0x11b1d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
    // 0x11b1d8: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x11b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_11b1dc:
    // 0x11b1dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11b1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b1e0: 0x2442b1c8  addiu       $v0, $v0, -0x4E38
    ctx->pc = 0x11b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947272));
    // 0x11b1e4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x11b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x11b1e8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x11b1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11b1ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11b1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1f0: 0xc043318  jal         func_10CC60
    ctx->pc = 0x11B1F0u;
    SET_GPR_U32(ctx, 31, 0x11B1F8u);
    ctx->pc = 0x11B1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B1F0u;
    // 0x11b1f4: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x11B1F0u, 0x11B1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B1F8u;
label_11b1f8:
    // 0x11b1f8: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x11b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x11b1fc: 0xae229de8  sw          $v0, -0x6218($s1)
    ctx->pc = 0x11b1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294942184), GPR_U32(ctx, 2));
    // 0x11b200: 0x2463b1d8  addiu       $v1, $v1, -0x4E28
    ctx->pc = 0x11b200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947288));
    // 0x11b204: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11b204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b208: 0xc043318  jal         func_10CC60
    ctx->pc = 0x11B208u;
    SET_GPR_U32(ctx, 31, 0x11B210u);
    ctx->pc = 0x11B20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B208u;
    // 0x11b20c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x11B208u, 0x11B210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B210u;
label_11b210:
    // 0x11b210: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x11b210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x11b214: 0xae029dec  sw          $v0, -0x6214($s0)
    ctx->pc = 0x11b214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294942188), GPR_U32(ctx, 2));
    // 0x11b218: 0x2463b1e8  addiu       $v1, $v1, -0x4E18
    ctx->pc = 0x11b218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947304));
    // 0x11b21c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11b21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b220: 0xc043318  jal         func_10CC60
    ctx->pc = 0x11B220u;
    SET_GPR_U32(ctx, 31, 0x11B228u);
    ctx->pc = 0x11B224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B220u;
    // 0x11b224: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x11B220u, 0x11B228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B228u;
label_11b228:
    // 0x11b228: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x11b228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x11b22c: 0xae429df0  sw          $v0, -0x6210($s2)
    ctx->pc = 0x11b22cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294942192), GPR_U32(ctx, 2));
    // 0x11b230: 0x2463b1f8  addiu       $v1, $v1, -0x4E08
    ctx->pc = 0x11b230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947320));
    // 0x11b234: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11b234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b238: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x11b238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x11b23c: 0xc043318  jal         func_10CC60
    ctx->pc = 0x11B23Cu;
    SET_GPR_U32(ctx, 31, 0x11B244u);
    ctx->pc = 0x11B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B23Cu;
    // 0x11b240: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x11B23Cu, 0x11B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B244u;
label_11b244:
    // 0x11b244: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11b244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11b248: 0xac629de0  sw          $v0, -0x6220($v1)
    ctx->pc = 0x11b248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942176), GPR_U32(ctx, 2));
    // 0x11b24c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11b250: 0xac409df4  sw          $zero, -0x620C($v0)
    ctx->pc = 0x11b250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942196), GPR_U32(ctx, 0));
    // 0x11b254: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11b254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_11b258:
    // 0x11b258: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x11b258u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11b25c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x11b25cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b260: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x11b260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b264: 0x3e00008  jr          $ra
    ctx->pc = 0x11B264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B264u;
        // 0x11b268: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B26Cu;
    // 0x11b26c: 0x0  nop
    ctx->pc = 0x11b26cu;
    // NOP
}
