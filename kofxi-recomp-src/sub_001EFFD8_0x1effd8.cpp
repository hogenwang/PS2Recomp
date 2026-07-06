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

// Function: sub_001EFFD8
// Address: 0x1effd8 - 0x1f0178
void sub_001EFFD8_0x1effd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFFD8_0x1effd8");
#endif

    switch (ctx->pc) {
        case 0x1efff8u: goto label_1efff8;
        case 0x1f0028u: goto label_1f0028;
        case 0x1f007cu: goto label_1f007c;
        case 0x1f00c8u: goto label_1f00c8;
        case 0x1f00f0u: goto label_1f00f0;
        case 0x1f011cu: goto label_1f011c;
        default: break;
    }

    ctx->pc = 0x1effd8u;

    // 0x1effd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1effd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1effdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1effdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1effe0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1effe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1effe4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1effe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1effe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1effe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1effec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1effecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1efff0: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1EFFF0u;
    SET_GPR_U32(ctx, 31, 0x1EFFF8u);
    ctx->pc = 0x1EFFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFFF0u;
    // 0x1efff4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1EFFF0u, 0x1EFFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFFF8u;
label_1efff8:
    // 0x1efff8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1efff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1efffc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFFFCu;
    {
        const bool branch_taken_0x1efffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFFCu;
        // 0x1f0000: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efffc) {
            ctx->pc = 0x1F0020u;
            goto label_1f0020;
        }
    }
    ctx->pc = 0x1F0004u;
    // 0x1f0004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0008: 0x34a50182  ori         $a1, $a1, 0x182
    ctx->pc = 0x1f0008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)386);
    // 0x1f000c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f000cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f0010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f0010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0014: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F0014u;
    ctx->pc = 0x1F0018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0014u;
    // 0x1f0018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F001Cu;
    // 0x1f001c: 0x0  nop
    ctx->pc = 0x1f001cu;
    // NOP
label_1f0020:
    // 0x1f0020: 0xc07d4a8  jal         func_1F52A0
    ctx->pc = 0x1F0020u;
    SET_GPR_U32(ctx, 31, 0x1F0028u);
    ctx->pc = 0x1F0024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0020u;
    // 0x1f0024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F52A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F52A0u, 0x1F0020u, 0x1F0028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0028u;
label_1f0028:
    // 0x1f0028: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f0028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1f002c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f002cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0034: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f0034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f0038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f0038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f003c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F003Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F003Cu;
        // 0x1f0040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F003Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0044u;
    // 0x1f0044: 0x0  nop
    ctx->pc = 0x1f0044u;
    // NOP
    // 0x1f0048: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f0048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f004c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f004cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f0050: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f0050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0054: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f0054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f0058: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1f0058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f005c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f005cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f0060: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1f0060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0064: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f0064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f0068: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f0068u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f006c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f006cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f0070: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f0070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f0074: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F0074u;
    SET_GPR_U32(ctx, 31, 0x1F007Cu);
    ctx->pc = 0x1F0078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0074u;
    // 0x1f0078: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1F0074u, 0x1F007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F007Cu;
label_1f007c:
    // 0x1f007c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f007cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f0080: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f0080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0084: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f0084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0088: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1f0088u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f008c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f008cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0090: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F0090u;
    {
        const bool branch_taken_0x1f0090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0090u;
        // 0x1f0094: 0x34a50184  ori         $a1, $a1, 0x184 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)388);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0090) {
            ctx->pc = 0x1F00B8u;
            goto label_1f00b8;
        }
    }
    ctx->pc = 0x1F0098u;
    // 0x1f0098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f009c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f009cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f00a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f00a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f00a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f00a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f00a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f00a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f00ac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f00acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f00b0: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F00B0u;
    ctx->pc = 0x1F00B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F00B0u;
    // 0x1f00b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F00B8u;
label_1f00b8:
    // 0x1f00b8: 0x8e622018  lw          $v0, 0x2018($s3)
    ctx->pc = 0x1f00b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8216)));
    // 0x1f00bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f00bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f00c0: 0xc0767f8  jal         func_1D9FE0
    ctx->pc = 0x1F00C0u;
    SET_GPR_U32(ctx, 31, 0x1F00C8u);
    ctx->pc = 0x1F00C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F00C0u;
    // 0x1f00c4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FE0u, 0x1F00C0u, 0x1F00C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F00C8u;
label_1f00c8:
    // 0x1f00c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f00c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f00cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f00ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f00d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f00d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f00d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f00d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f00d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f00d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f00dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f00dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f00e0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f00e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f00e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F00E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F00E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00E4u;
        // 0x1f00e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F00E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F00ECu;
    // 0x1f00ec: 0x0  nop
    ctx->pc = 0x1f00ecu;
    // NOP
label_1f00f0:
    // 0x1f00f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f00f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f00f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f00f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f00f8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f00f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f00fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f00fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f0100: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1f0100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0104: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f0104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f0108: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f0108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f010c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f010cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f0110: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f0110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f0114: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F0114u;
    SET_GPR_U32(ctx, 31, 0x1F011Cu);
    ctx->pc = 0x1F0118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0114u;
    // 0x1f0118: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1F0114u, 0x1F011Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F011Cu;
label_1f011c:
    // 0x1f011c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f011cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f0120: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f0120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0124: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f0124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0128: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f0128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f012c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F012Cu;
    {
        const bool branch_taken_0x1f012c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F012Cu;
        // 0x1f0130: 0x34a50185  ori         $a1, $a1, 0x185 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)389);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f012c) {
            ctx->pc = 0x1F0150u;
            goto label_1f0150;
        }
    }
    ctx->pc = 0x1F0134u;
    // 0x1f0134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0138: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f0138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f013c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f013cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0140: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f0140u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f0144: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f0144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0148: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F0148u;
    ctx->pc = 0x1F014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0148u;
    // 0x1f014c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F0150u;
label_1f0150:
    // 0x1f0150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f0150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0154: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f0154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0158: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f0158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f015c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f015cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f0160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0164: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f0164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f0168: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f0168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f016c: 0x807c05e  j           func_1F0178
    ctx->pc = 0x1F016Cu;
    ctx->pc = 0x1F0170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F016Cu;
    // 0x1f0170: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0178u;
    sub_001F0178_0x1f0178(rdram, ctx, runtime); return;
    ctx->pc = 0x1F0174u;
    // 0x1f0174: 0x0  nop
    ctx->pc = 0x1f0174u;
    // NOP
}
