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

// Function: sub_00289118
// Address: 0x289118 - 0x2892e8
void sub_00289118_0x289118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289118_0x289118");
#endif

    switch (ctx->pc) {
        case 0x289140u: goto label_289140;
        case 0x2891f8u: goto label_2891f8;
        case 0x289208u: goto label_289208;
        default: break;
    }

    ctx->pc = 0x289118u;

    // 0x289118: 0x5ce00003  bgtzl       $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x289118u;
    {
        const bool branch_taken_0x289118 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x289118) {
            ctx->pc = 0x28911Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289118u;
            // 0x28911c: 0xdca30000  ld          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289128u;
            goto label_289128;
        }
    }
    ctx->pc = 0x289120u;
    // 0x289120: 0x3e00008  jr          $ra
    ctx->pc = 0x289120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289120u;
        // 0x289124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289128u;
label_289128:
    // 0x289128: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x289128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x28912c: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x28912cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x289130: 0x62402d  daddu       $t0, $v1, $v0
    ctx->pc = 0x289130u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x289134: 0x103482b  sltu        $t1, $t0, $v1
    ctx->pc = 0x289134u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x289138: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x289138u;
    {
        const bool branch_taken_0x289138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289138u;
        // 0x28913c: 0xfc880000  sd          $t0, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289138) {
            ctx->pc = 0x2891C0u;
            goto label_2891c0;
        }
    }
    ctx->pc = 0x289140u;
label_289140:
    // 0x289140: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x289140u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x289144: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x289144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x289148: 0xdcc20010  ld          $v0, 0x10($a2)
    ctx->pc = 0x289148u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x28914c: 0x69182d  daddu       $v1, $v1, $t1
    ctx->pc = 0x28914cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 9));
    // 0x289150: 0x62402d  daddu       $t0, $v1, $v0
    ctx->pc = 0x289150u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x289154: 0x69482b  sltu        $t1, $v1, $t1
    ctx->pc = 0x289154u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x289158: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x289158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28915c: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x28915cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x289160: 0x18e00022  blez        $a3, . + 4 + (0x22 << 2)
    ctx->pc = 0x289160u;
    {
        const bool branch_taken_0x289160 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x289164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289160u;
        // 0x289164: 0x122482d  daddu       $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289160) {
            ctx->pc = 0x2891ECu;
            goto label_2891ec;
        }
    }
    ctx->pc = 0x289168u;
    // 0x289168: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x289168u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x28916c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x28916cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x289170: 0xdcc20018  ld          $v0, 0x18($a2)
    ctx->pc = 0x289170u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x289174: 0x69182d  daddu       $v1, $v1, $t1
    ctx->pc = 0x289174u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 9));
    // 0x289178: 0x62402d  daddu       $t0, $v1, $v0
    ctx->pc = 0x289178u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x28917c: 0x69482b  sltu        $t1, $v1, $t1
    ctx->pc = 0x28917cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x289180: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x289180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x289184: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x289184u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x289188: 0x18e00018  blez        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x289188u;
    {
        const bool branch_taken_0x289188 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x28918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289188u;
        // 0x28918c: 0x122482d  daddu       $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289188) {
            ctx->pc = 0x2891ECu;
            goto label_2891ec;
        }
    }
    ctx->pc = 0x289190u;
    // 0x289190: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x289190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x289194: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x289194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x289198: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x289198u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28919c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x28919cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2891a0: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2891a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2891a4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2891a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2891a8: 0x69182d  daddu       $v1, $v1, $t1
    ctx->pc = 0x2891a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 9));
    // 0x2891ac: 0x62402d  daddu       $t0, $v1, $v0
    ctx->pc = 0x2891acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2891b0: 0x69482b  sltu        $t1, $v1, $t1
    ctx->pc = 0x2891b0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2891b4: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x2891b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2891b8: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x2891b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x2891bc: 0x122482d  daddu       $t1, $t1, $v0
    ctx->pc = 0x2891bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 2));
label_2891c0:
    // 0x2891c0: 0x18e0000a  blez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2891C0u;
    {
        const bool branch_taken_0x2891c0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2891C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891C0u;
        // 0x2891c4: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891c0) {
            ctx->pc = 0x2891ECu;
            goto label_2891ec;
        }
    }
    ctx->pc = 0x2891C8u;
    // 0x2891c8: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x2891c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2891cc: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x2891ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2891d0: 0x69182d  daddu       $v1, $v1, $t1
    ctx->pc = 0x2891d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 9));
    // 0x2891d4: 0x62402d  daddu       $t0, $v1, $v0
    ctx->pc = 0x2891d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2891d8: 0x69482b  sltu        $t1, $v1, $t1
    ctx->pc = 0x2891d8u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2891dc: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x2891dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2891e0: 0xfc880008  sd          $t0, 0x8($a0)
    ctx->pc = 0x2891e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
    // 0x2891e4: 0x1ce0ffd6  bgtz        $a3, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2891E4u;
    {
        const bool branch_taken_0x2891e4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2891E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891E4u;
        // 0x2891e8: 0x122482d  daddu       $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891e4) {
            ctx->pc = 0x289140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289140;
        }
    }
    ctx->pc = 0x2891ECu;
label_2891ec:
    // 0x2891ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2891ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2891F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891ECu;
        // 0x2891f0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2891ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2891F4u;
    // 0x2891f4: 0x0  nop
    ctx->pc = 0x2891f4u;
    // NOP
label_2891f8:
    // 0x2891f8: 0x1ce00018  bgtz        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x2891F8u;
    {
        const bool branch_taken_0x2891f8 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2891FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891F8u;
        // 0x2891fc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891f8) {
            ctx->pc = 0x28925Cu;
            goto label_28925c;
        }
    }
    ctx->pc = 0x289200u;
    // 0x289200: 0x3e00008  jr          $ra
    ctx->pc = 0x289200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289200u;
        // 0x289204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289208u;
label_289208:
    // 0x289208: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x289208u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x28920c: 0x103102f  dsubu       $v0, $t0, $v1
    ctx->pc = 0x28920cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) - GPR_U64(ctx, 3));
    // 0x289210: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x289210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x289214: 0x11030002  beq         $t0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x289214u;
    {
        const bool branch_taken_0x289214 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x289218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289214u;
        // 0x289218: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289214) {
            ctx->pc = 0x289220u;
            goto label_289220;
        }
    }
    ctx->pc = 0x28921Cu;
    // 0x28921c: 0x103482b  sltu        $t1, $t0, $v1
    ctx->pc = 0x28921cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_289220:
    // 0x289220: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x289220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x289224: 0x18e00021  blez        $a3, . + 4 + (0x21 << 2)
    ctx->pc = 0x289224u;
    {
        const bool branch_taken_0x289224 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x289224) {
            ctx->pc = 0x2892ACu;
            goto label_2892ac;
        }
    }
    ctx->pc = 0x28922Cu;
    // 0x28922c: 0xdca80018  ld          $t0, 0x18($a1)
    ctx->pc = 0x28922cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x289230: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x289230u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x289234: 0x103102f  dsubu       $v0, $t0, $v1
    ctx->pc = 0x289234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) - GPR_U64(ctx, 3));
    // 0x289238: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x289238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x28923c: 0x11030002  beq         $t0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28923Cu;
    {
        const bool branch_taken_0x28923c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x289240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28923Cu;
        // 0x289240: 0xfc820018  sd          $v0, 0x18($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28923c) {
            ctx->pc = 0x289248u;
            goto label_289248;
        }
    }
    ctx->pc = 0x289244u;
    // 0x289244: 0x103482b  sltu        $t1, $t0, $v1
    ctx->pc = 0x289244u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_289248:
    // 0x289248: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x289248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x28924c: 0x18e00017  blez        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x28924Cu;
    {
        const bool branch_taken_0x28924c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x289250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28924Cu;
        // 0x289250: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28924c) {
            ctx->pc = 0x2892ACu;
            goto label_2892ac;
        }
    }
    ctx->pc = 0x289254u;
    // 0x289254: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x289254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x289258: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x289258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_28925c:
    // 0x28925c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x28925cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289260: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x289260u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x289264: 0x103102f  dsubu       $v0, $t0, $v1
    ctx->pc = 0x289264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) - GPR_U64(ctx, 3));
    // 0x289268: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x289268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x28926c: 0x11030002  beq         $t0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28926Cu;
    {
        const bool branch_taken_0x28926c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x289270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28926Cu;
        // 0x289270: 0xfc820000  sd          $v0, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28926c) {
            ctx->pc = 0x289278u;
            goto label_289278;
        }
    }
    ctx->pc = 0x289274u;
    // 0x289274: 0x103482b  sltu        $t1, $t0, $v1
    ctx->pc = 0x289274u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_289278:
    // 0x289278: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x289278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x28927c: 0x18e0000b  blez        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x28927Cu;
    {
        const bool branch_taken_0x28927c = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x28927c) {
            ctx->pc = 0x2892ACu;
            goto label_2892ac;
        }
    }
    ctx->pc = 0x289284u;
    // 0x289284: 0xdca80008  ld          $t0, 0x8($a1)
    ctx->pc = 0x289284u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x289288: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x289288u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x28928c: 0x103102f  dsubu       $v0, $t0, $v1
    ctx->pc = 0x28928cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) - GPR_U64(ctx, 3));
    // 0x289290: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x289290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x289294: 0x11030002  beq         $t0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x289294u;
    {
        const bool branch_taken_0x289294 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x289298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289294u;
        // 0x289298: 0xfc820008  sd          $v0, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289294) {
            ctx->pc = 0x2892A0u;
            goto label_2892a0;
        }
    }
    ctx->pc = 0x28929Cu;
    // 0x28929c: 0x103482b  sltu        $t1, $t0, $v1
    ctx->pc = 0x28929cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2892a0:
    // 0x2892a0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2892a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2892a4: 0x5ce0ffd8  bgtzl       $a3, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2892A4u;
    {
        const bool branch_taken_0x2892a4 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x2892a4) {
            ctx->pc = 0x2892A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2892A4u;
            // 0x2892a8: 0xdca80010  ld          $t0, 0x10($a1) (Delay Slot)
            SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289208u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289208;
        }
    }
    ctx->pc = 0x2892ACu;
label_2892ac:
    // 0x2892ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2892ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2892B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892ACu;
        // 0x2892b0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2892ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2892B4u;
    // 0x2892b4: 0x0  nop
    ctx->pc = 0x2892b4u;
    // NOP
    // 0x2892b8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2892b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2892bc: 0x8c6236f0  lw          $v0, 0x36F0($v1)
    ctx->pc = 0x2892bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14064)));
    // 0x2892c0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2892c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2892c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2892C4u;
    {
        const bool branch_taken_0x2892c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2892C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892C4u;
        // 0x2892c8: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892c4) {
            ctx->pc = 0x2892D4u;
            goto label_2892d4;
        }
    }
    ctx->pc = 0x2892CCu;
    // 0x2892cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2892CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2892D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892CCu;
        // 0x2892d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2892CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2892D4u;
label_2892d4:
    // 0x2892d4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2892d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2892d8: 0x244243b8  addiu       $v0, $v0, 0x43B8
    ctx->pc = 0x2892d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17336));
    // 0x2892dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2892DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2892E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892DCu;
        // 0x2892e0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2892DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2892E4u;
    // 0x2892e4: 0x0  nop
    ctx->pc = 0x2892e4u;
    // NOP
    if (ctx->pc == 0x2892e4u) { ctx->pc = 0x2892e8u; }
}
