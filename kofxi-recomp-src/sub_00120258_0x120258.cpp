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

// Function: sub_00120258
// Address: 0x120258 - 0x1202f0
void sub_00120258_0x120258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120258_0x120258");
#endif

    switch (ctx->pc) {
        case 0x120280u: goto label_120280;
        case 0x120290u: goto label_120290;
        case 0x1202a4u: goto label_1202a4;
        case 0x1202b4u: goto label_1202b4;
        case 0x1202ccu: goto label_1202cc;
        case 0x1202d8u: goto label_1202d8;
        default: break;
    }

    ctx->pc = 0x120258u;

    // 0x120258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x120258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12025c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12025cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x120260: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x120260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x120264: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x120264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x120268: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x120268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12026c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12026cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x120270: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x120270u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x120274: 0x2411040f  addiu       $s1, $zero, 0x40F
    ctx->pc = 0x120274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x120278: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x120278u;
    SET_GPR_U32(ctx, 31, 0x120280u);
    ctx->pc = 0x12027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120278u;
    // 0x12027c: 0x10803c  dsll32      $s0, $s0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x120278u, 0x120280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120280u;
label_120280:
    // 0x120280: 0x118d3c  dsll32      $s1, $s1, 20
    ctx->pc = 0x120280u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 20));
    // 0x120284: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120288: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x120288u;
    SET_GPR_U32(ctx, 31, 0x120290u);
    ctx->pc = 0x12028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120288u;
    // 0x12028c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x120288u, 0x120290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120290u;
label_120290:
    // 0x120290: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x120290u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x120294: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x120294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120298: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12029c: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x12029Cu;
    SET_GPR_U32(ctx, 31, 0x1202A4u);
    ctx->pc = 0x1202A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12029Cu;
    // 0x1202a0: 0x10803c  dsll32      $s0, $s0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x12029Cu, 0x1202A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1202A4u;
label_1202a4:
    // 0x1202a4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1202a4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1202a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1202a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1202ac: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x1202ACu;
    SET_GPR_U32(ctx, 31, 0x1202B4u);
    ctx->pc = 0x1202B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1202ACu;
    // 0x1202b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x1202ACu, 0x1202B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1202B4u;
label_1202b4:
    // 0x1202b4: 0x2405041f  addiu       $a1, $zero, 0x41F
    ctx->pc = 0x1202b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
    // 0x1202b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1202b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1202bc: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1202BCu;
    {
        const bool branch_taken_0x1202bc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1202C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1202BCu;
        // 0x1202c0: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1202bc) {
            ctx->pc = 0x1202CCu;
            goto label_1202cc;
        }
    }
    ctx->pc = 0x1202C4u;
    // 0x1202c4: 0xc048a46  jal         func_122918
    ctx->pc = 0x1202C4u;
    SET_GPR_U32(ctx, 31, 0x1202CCu);
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x1202C4u, 0x1202CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1202CCu;
label_1202cc:
    // 0x1202cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1202ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1202d0: 0xc048a46  jal         func_122918
    ctx->pc = 0x1202D0u;
    SET_GPR_U32(ctx, 31, 0x1202D8u);
    ctx->pc = 0x1202D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1202D0u;
    // 0x1202d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x1202D0u, 0x1202D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1202D8u;
label_1202d8:
    // 0x1202d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1202d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1202dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1202dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1202e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1202e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1202e4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1202e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1202e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1202E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1202ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1202E8u;
        // 0x1202ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1202E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1202F0u;
}
