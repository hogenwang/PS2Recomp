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

// Function: sub_0021FFD8
// Address: 0x21ffd8 - 0x220070
void sub_0021FFD8_0x21ffd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FFD8_0x21ffd8");
#endif

    switch (ctx->pc) {
        case 0x22002cu: goto label_22002c;
        case 0x220040u: goto label_220040;
        case 0x220054u: goto label_220054;
        case 0x22005cu: goto label_22005c;
        default: break;
    }

    ctx->pc = 0x21ffd8u;

    // 0x21ffd8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21ffd8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21ffdc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21ffdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21ffe0: 0x8deeca18  lw          $t6, -0x35E8($t7)
    ctx->pc = 0x21ffe0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953496)));
    // 0x21ffe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21ffe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21ffe8: 0x5c00004  bltz        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x21FFE8u;
    {
        const bool branch_taken_0x21ffe8 = (GPR_S32(ctx, 14) < 0);
        ctx->pc = 0x21FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFE8u;
        // 0x21ffec: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffe8) {
            ctx->pc = 0x21FFFCu;
            goto label_21fffc;
        }
    }
    ctx->pc = 0x21FFF0u;
    // 0x21fff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21fff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fff4: 0x8043320  j           func_10CC80
    ctx->pc = 0x21FFF4u;
    ctx->pc = 0x21FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFF4u;
    // 0x21fff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    sub_0010CC80_0x10cc80(rdram, ctx, runtime); return;
    ctx->pc = 0x21FFFCu;
label_21fffc:
    // 0x21fffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21fffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220000: 0x3e00008  jr          $ra
    ctx->pc = 0x220000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220000u;
        // 0x220004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220008u;
    // 0x220008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x220008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22000c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22000cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220010: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x220010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x220014: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x220014u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x220018: 0x8e0fc9e8  lw          $t7, -0x3618($s0)
    ctx->pc = 0x220018u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953448)));
    // 0x22001c: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x22001Cu;
    {
        const bool branch_taken_0x22001c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x220020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22001Cu;
        // 0x220020: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22001c) {
            ctx->pc = 0x220054u;
            goto label_220054;
        }
    }
    ctx->pc = 0x220024u;
    // 0x220024: 0xc088696  jal         func_221A58
    ctx->pc = 0x220024u;
    SET_GPR_U32(ctx, 31, 0x22002Cu);
    ctx->pc = 0x221A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A58u, 0x220024u, 0x22002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22002Cu;
label_22002c:
    // 0x22002c: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x22002cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x220030: 0x104f0006  beq         $v0, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x220030u;
    {
        const bool branch_taken_0x220030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        if (branch_taken_0x220030) {
            ctx->pc = 0x22004Cu;
            goto label_22004c;
        }
    }
    ctx->pc = 0x220038u;
    // 0x220038: 0xc088696  jal         func_221A58
    ctx->pc = 0x220038u;
    SET_GPR_U32(ctx, 31, 0x220040u);
    ctx->pc = 0x22003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220038u;
    // 0x22003c: 0x8e04c9e8  lw          $a0, -0x3618($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953448)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A58u, 0x220038u, 0x220040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220040u;
label_220040:
    // 0x220040: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x220040u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220044: 0x144f0003  bne         $v0, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x220044u;
    {
        const bool branch_taken_0x220044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x220044) {
            ctx->pc = 0x220054u;
            goto label_220054;
        }
    }
    ctx->pc = 0x22004Cu;
label_22004c:
    // 0x22004c: 0xc0885d0  jal         func_221740
    ctx->pc = 0x22004Cu;
    SET_GPR_U32(ctx, 31, 0x220054u);
    ctx->pc = 0x220050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22004Cu;
    // 0x220050: 0x8e04c9e8  lw          $a0, -0x3618($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953448)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221740u, 0x22004Cu, 0x220054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220054u;
label_220054:
    // 0x220054: 0xc087fea  jal         func_21FFA8
    ctx->pc = 0x220054u;
    SET_GPR_U32(ctx, 31, 0x22005Cu);
    ctx->pc = 0x21FFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFA8u, 0x220054u, 0x22005Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22005Cu;
label_22005c:
    // 0x22005c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22005cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220060: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x220060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220064: 0x8087fa0  j           func_21FE80
    ctx->pc = 0x220064u;
    ctx->pc = 0x220068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220064u;
    // 0x220068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FE80u;
    sub_0021FE80_0x21fe80(rdram, ctx, runtime); return;
    ctx->pc = 0x22006Cu;
    // 0x22006c: 0x0  nop
    ctx->pc = 0x22006cu;
    // NOP
}
