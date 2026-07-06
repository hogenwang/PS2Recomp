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

// Function: sub_001A7140
// Address: 0x1a7140 - 0x1a7298
void sub_001A7140_0x1a7140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7140_0x1a7140");
#endif

    switch (ctx->pc) {
        case 0x1a7170u: goto label_1a7170;
        case 0x1a7188u: goto label_1a7188;
        case 0x1a71d4u: goto label_1a71d4;
        default: break;
    }

    ctx->pc = 0x1a7140u;

    // 0x1a7140: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a7140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a7144: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a7144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a7148: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a7148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a714c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1a714cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7150: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a7150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a7154: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a7154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7158: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a715c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a715cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7160: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a7160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1a7164: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a7164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a7168: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1A7168u;
    SET_GPR_U32(ctx, 31, 0x1A7170u);
    ctx->pc = 0x1A716Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7168u;
    // 0x1a716c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1A7168u, 0x1A7170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7170u;
label_1a7170:
    // 0x1a7170: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a7170u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7178: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a7178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a717c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a717cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7180: 0xc0698ec  jal         func_1A63B0
    ctx->pc = 0x1A7180u;
    SET_GPR_U32(ctx, 31, 0x1A7188u);
    ctx->pc = 0x1A7184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7180u;
    // 0x1a7184: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A63B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A63B0u, 0x1A7180u, 0x1A7188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7188u;
label_1a7188:
    // 0x1a7188: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7188u;
    {
        const bool branch_taken_0x1a7188 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7188u;
        // 0x1a718c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7188) {
            ctx->pc = 0x1A719Cu;
            goto label_1a719c;
        }
    }
    ctx->pc = 0x1A7190u;
    // 0x1a7190: 0xf  sync
    ctx->pc = 0x1a7190u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a7194: 0x42000038  ei
    ctx->pc = 0x1a7194u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1a7198: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a7198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a719c:
    // 0x1a719c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a719cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a71a0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a71a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a71a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a71a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a71a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a71a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a71ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a71acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a71b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A71B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A71B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A71B0u;
        // 0x1a71b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A71B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A71B8u;
    // 0x1a71b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a71b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a71bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a71bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a71c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a71c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a71c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a71c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a71c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a71c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a71cc: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1A71CCu;
    SET_GPR_U32(ctx, 31, 0x1A71D4u);
    ctx->pc = 0x1A71D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A71CCu;
    // 0x1a71d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1A71CCu, 0x1A71D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A71D4u;
label_1a71d4:
    // 0x1a71d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a71d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a71d8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a71d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a71dc: 0x2444e118  addiu       $a0, $v0, -0x1EE8
    ctx->pc = 0x1a71dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959384));
    // 0x1a71e0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1a71e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a71e4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A71E4u;
    {
        const bool branch_taken_0x1a71e4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a71e4) {
            ctx->pc = 0x1A71F8u;
            goto label_1a71f8;
        }
    }
    ctx->pc = 0x1A71ECu;
    // 0x1a71ec: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x1a71f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A71F0u;
    {
        const bool branch_taken_0x1a71f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A71F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A71F0u;
        // 0x1a71f4: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a71f0) {
            ctx->pc = 0x1A7224u;
            goto label_1a7224;
        }
    }
    ctx->pc = 0x1A71F8u;
label_1a71f8:
    // 0x1a71f8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A71F8u;
    {
        const bool branch_taken_0x1a71f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a71f8) {
            ctx->pc = 0x1A7208u;
            goto label_1a7208;
        }
    }
    ctx->pc = 0x1A7200u;
    // 0x1a7200: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1a7200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a7204: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a7204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1a7208:
    // 0x1a7208: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7208u;
    {
        const bool branch_taken_0x1a7208 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7208u;
        // 0x1a720c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7208) {
            ctx->pc = 0x1A7224u;
            goto label_1a7224;
        }
    }
    ctx->pc = 0x1A7210u;
    // 0x1a7210: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1a7210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a7214: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1a7214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a7218: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a7218u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a721c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a721cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1a7220: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a7220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7224:
    // 0x1a7224: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7224u;
    {
        const bool branch_taken_0x1a7224 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7224u;
        // 0x1a7228: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7224) {
            ctx->pc = 0x1A7238u;
            goto label_1a7238;
        }
    }
    ctx->pc = 0x1A722Cu;
    // 0x1a722c: 0xf  sync
    ctx->pc = 0x1a722cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a7230: 0x42000038  ei
    ctx->pc = 0x1a7230u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1a7234: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a7238:
    // 0x1a7238: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a7238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a723c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a723cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7240: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7240u;
        // 0x1a7244: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7248u;
    // 0x1a7248: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a7248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a724c: 0x2443e118  addiu       $v1, $v0, -0x1EE8
    ctx->pc = 0x1a724cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959384));
    // 0x1a7250: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1a7250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a7254: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7254u;
    {
        const bool branch_taken_0x1a7254 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a7254) {
            ctx->pc = 0x1A7268u;
            goto label_1a7268;
        }
    }
    ctx->pc = 0x1A725Cu;
    // 0x1a725c: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a725cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x1a7260: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7260u;
        // 0x1a7264: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7268u;
label_1a7268:
    // 0x1a7268: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7268u;
    {
        const bool branch_taken_0x1a7268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7268) {
            ctx->pc = 0x1A7278u;
            goto label_1a7278;
        }
    }
    ctx->pc = 0x1A7270u;
    // 0x1a7270: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a7270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a7274: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a7274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1a7278:
    // 0x1a7278: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7278u;
    {
        const bool branch_taken_0x1a7278 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7278) {
            ctx->pc = 0x1A7290u;
            goto label_1a7290;
        }
    }
    ctx->pc = 0x1A7280u;
    // 0x1a7280: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1a7280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a7284: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1a7284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a7288: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a7288u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a728c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a728cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1a7290:
    // 0x1a7290: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7290u;
        // 0x1a7294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7298u;
}
