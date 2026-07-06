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

// Function: sub_001E8178
// Address: 0x1e8178 - 0x1e82c0
void sub_001E8178_0x1e8178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8178_0x1e8178");
#endif

    switch (ctx->pc) {
        case 0x1e81b0u: goto label_1e81b0;
        case 0x1e81bcu: goto label_1e81bc;
        case 0x1e823cu: goto label_1e823c;
        case 0x1e824cu: goto label_1e824c;
        case 0x1e8268u: goto label_1e8268;
        case 0x1e8274u: goto label_1e8274;
        case 0x1e8280u: goto label_1e8280;
        case 0x1e828cu: goto label_1e828c;
        case 0x1e8294u: goto label_1e8294;
        case 0x1e829cu: goto label_1e829c;
        case 0x1e82a4u: goto label_1e82a4;
        default: break;
    }

    ctx->pc = 0x1e8178u;

label_1e8178:
    // 0x1e8178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e8178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e817c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e817cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e8180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e8180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8184: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e8184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e8188: 0x26020d88  addiu       $v0, $s0, 0xD88
    ctx->pc = 0x1e8188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
    // 0x1e818c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e818cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e8190: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e8190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e8194: 0x8e04205c  lw          $a0, 0x205C($s0)
    ctx->pc = 0x1e8194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8284)));
    // 0x1e8198: 0x8c4501f8  lw          $a1, 0x1F8($v0)
    ctx->pc = 0x1e8198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 504)));
    // 0x1e819c: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x1e819cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
    // 0x1e81a0: 0x14650013  bne         $v1, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E81A0u;
    {
        const bool branch_taken_0x1e81a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1E81A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E81A0u;
        // 0x1e81a4: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e81a0) {
            ctx->pc = 0x1E81F0u;
            goto label_1e81f0;
        }
    }
    ctx->pc = 0x1E81A8u;
    // 0x1e81a8: 0xc06e6b0  jal         func_1B9AC0
    ctx->pc = 0x1E81A8u;
    SET_GPR_U32(ctx, 31, 0x1E81B0u);
    ctx->pc = 0x1E81ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E81A8u;
    // 0x1e81ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9AC0u, 0x1E81A8u, 0x1E81B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E81B0u;
label_1e81b0:
    // 0x1e81b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e81b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e81b4: 0xc06e6d2  jal         func_1B9B48
    ctx->pc = 0x1E81B4u;
    SET_GPR_U32(ctx, 31, 0x1E81BCu);
    ctx->pc = 0x1E81B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E81B4u;
    // 0x1e81b8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9B48u, 0x1E81B4u, 0x1E81BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E81BCu;
label_1e81bc:
    // 0x1e81bc: 0x5a40000d  blezl       $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1E81BCu;
    {
        const bool branch_taken_0x1e81bc = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1e81bc) {
            ctx->pc = 0x1E81C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E81BCu;
            // 0x1e81c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E81F4u;
            goto label_1e81f4;
        }
    }
    ctx->pc = 0x1E81C4u;
    // 0x1e81c4: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E81C4u;
    {
        const bool branch_taken_0x1e81c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e81c4) {
            ctx->pc = 0x1E81C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E81C4u;
            // 0x1e81c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E81F4u;
            goto label_1e81f4;
        }
    }
    ctx->pc = 0x1E81CCu;
    // 0x1e81cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e81ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e81d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e81d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e81d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e81d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e81d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e81d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e81dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e81dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e81e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e81e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e81e4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e81e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e81e8: 0x807ae7a  j           func_1EB9E8
    ctx->pc = 0x1E81E8u;
    ctx->pc = 0x1E81ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E81E8u;
    // 0x1e81ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9E8u, 0x1E81E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E81F0u;
label_1e81f0:
    // 0x1e81f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e81f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e81f4:
    // 0x1e81f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e81f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e81f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e81f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e81fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e81fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e8200: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8200u;
        // 0x1e8204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8208u;
    // 0x1e8208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e8208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e820c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e820cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8214: 0x807a088  j           func_1E8220
    ctx->pc = 0x1E8214u;
    ctx->pc = 0x1E8218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8214u;
    // 0x1e8218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8220u;
    goto label_1e8220;
    ctx->pc = 0x1E821Cu;
    // 0x1e821c: 0x0  nop
    ctx->pc = 0x1e821cu;
    // NOP
label_1e8220:
    // 0x1e8220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e8220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e8224: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1e8224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e8228: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e8228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e822c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e822cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e8230: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e8230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e8234: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1E8234u;
    SET_GPR_U32(ctx, 31, 0x1E823Cu);
    ctx->pc = 0x1E8238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8234u;
    // 0x1e8238: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1E8234u, 0x1E823Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E823Cu;
label_1e823c:
    // 0x1e823c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E823Cu;
    {
        const bool branch_taken_0x1e823c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E823Cu;
        // 0x1e8240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e823c) {
            ctx->pc = 0x1E82A8u;
            goto label_1e82a8;
        }
    }
    ctx->pc = 0x1E8244u;
    // 0x1e8244: 0xc07a3ae  jal         func_1E8EB8
    ctx->pc = 0x1E8244u;
    SET_GPR_U32(ctx, 31, 0x1E824Cu);
    ctx->pc = 0x1E8EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EB8u, 0x1E8244u, 0x1E824Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E824Cu;
label_1e824c:
    // 0x1e824c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e824cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8250: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8250u;
    {
        const bool branch_taken_0x1e8250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E8254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8250u;
        // 0x1e8254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8250) {
            ctx->pc = 0x1E8260u;
            goto label_1e8260;
        }
    }
    ctx->pc = 0x1E8258u;
    // 0x1e8258: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E8258u;
    {
        const bool branch_taken_0x1e8258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8258u;
        // 0x1e825c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8258) {
            ctx->pc = 0x1E82A8u;
            goto label_1e82a8;
        }
    }
    ctx->pc = 0x1E8260u;
label_1e8260:
    // 0x1e8260: 0xc07a0b0  jal         func_1E82C0
    ctx->pc = 0x1E8260u;
    SET_GPR_U32(ctx, 31, 0x1E8268u);
    ctx->pc = 0x1E82C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E82C0u, 0x1E8260u, 0x1E8268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8268u;
label_1e8268:
    // 0x1e8268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e826c: 0xc07a0b2  jal         func_1E82C8
    ctx->pc = 0x1E826Cu;
    SET_GPR_U32(ctx, 31, 0x1E8274u);
    ctx->pc = 0x1E8270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E826Cu;
    // 0x1e8270: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E82C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E82C8u, 0x1E826Cu, 0x1E8274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8274u;
label_1e8274:
    // 0x1e8274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8278: 0xc07a2c8  jal         func_1E8B20
    ctx->pc = 0x1E8278u;
    SET_GPR_U32(ctx, 31, 0x1E8280u);
    ctx->pc = 0x1E827Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8278u;
    // 0x1e827c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8B20u, 0x1E8278u, 0x1E8280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8280u;
label_1e8280:
    // 0x1e8280: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1e8280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8284: 0xc07a2fc  jal         func_1E8BF0
    ctx->pc = 0x1E8284u;
    SET_GPR_U32(ctx, 31, 0x1E828Cu);
    ctx->pc = 0x1E8288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8284u;
    // 0x1e8288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8BF0u, 0x1E8284u, 0x1E828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E828Cu;
label_1e828c:
    // 0x1e828c: 0xc07a3bc  jal         func_1E8EF0
    ctx->pc = 0x1E828Cu;
    SET_GPR_U32(ctx, 31, 0x1E8294u);
    ctx->pc = 0x1E8290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E828Cu;
    // 0x1e8290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EF0u, 0x1E828Cu, 0x1E8294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8294u;
label_1e8294:
    // 0x1e8294: 0xc07a3f4  jal         func_1E8FD0
    ctx->pc = 0x1E8294u;
    SET_GPR_U32(ctx, 31, 0x1E829Cu);
    ctx->pc = 0x1E8298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8294u;
    // 0x1e8298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8FD0u, 0x1E8294u, 0x1E829Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E829Cu;
label_1e829c:
    // 0x1e829c: 0xc07a05e  jal         func_1E8178
    ctx->pc = 0x1E829Cu;
    SET_GPR_U32(ctx, 31, 0x1E82A4u);
    ctx->pc = 0x1E82A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E829Cu;
    // 0x1e82a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8178u;
    goto label_1e8178;
    ctx->pc = 0x1E82A4u;
label_1e82a4:
    // 0x1e82a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e82a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e82a8:
    // 0x1e82a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e82a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e82ac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e82acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e82b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e82b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e82b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E82B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E82B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E82B4u;
        // 0x1e82b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E82B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E82BCu;
    // 0x1e82bc: 0x0  nop
    ctx->pc = 0x1e82bcu;
    // NOP
}
