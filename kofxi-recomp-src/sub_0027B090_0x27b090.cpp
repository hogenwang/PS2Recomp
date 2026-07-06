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

// Function: sub_0027B090
// Address: 0x27b090 - 0x27b370
void sub_0027B090_0x27b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B090_0x27b090");
#endif

    switch (ctx->pc) {
        case 0x27b0f4u: goto label_27b0f4;
        case 0x27b10cu: goto label_27b10c;
        case 0x27b158u: goto label_27b158;
        case 0x27b234u: goto label_27b234;
        case 0x27b2b4u: goto label_27b2b4;
        case 0x27b2c8u: goto label_27b2c8;
        case 0x27b2e8u: goto label_27b2e8;
        default: break;
    }

    ctx->pc = 0x27b090u;

    // 0x27b090: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27b090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27b094: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x27b094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x27b098: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x27b098u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x27b09c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x27b09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x27b0a0: 0x26c434b8  addiu       $a0, $s6, 0x34B8
    ctx->pc = 0x27b0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 13496));
    // 0x27b0a4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x27b0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x27b0a8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27b0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27b0ac: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x27b0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x27b0b0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x27b0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27b0b4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x27b0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x27b0b8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x27b0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x27b0bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27b0c0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27B0C0u;
    {
        const bool branch_taken_0x27b0c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B0C0u;
        // 0x27b0c4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b0c0) {
            ctx->pc = 0x27B0D8u;
            goto label_27b0d8;
        }
    }
    ctx->pc = 0x27B0C8u;
    // 0x27b0c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27b0c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b0cc: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x27B0CCu;
    {
        const bool branch_taken_0x27b0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B0CCu;
        // 0x27b0d0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b0cc) {
            ctx->pc = 0x27B348u;
            goto label_27b348;
        }
    }
    ctx->pc = 0x27B0D4u;
    // 0x27b0d4: 0x0  nop
    ctx->pc = 0x27b0d4u;
    // NOP
label_27b0d8:
    // 0x27b0d8: 0x3c1001c3  lui         $s0, 0x1C3
    ctx->pc = 0x27b0d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)451 << 16));
    // 0x27b0dc: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x27b0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x27b0e0: 0x26045440  addiu       $a0, $s0, 0x5440
    ctx->pc = 0x27b0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21568));
    // 0x27b0e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b0e8: 0x34c6e800  ori         $a2, $a2, 0xE800
    ctx->pc = 0x27b0e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)59392);
    // 0x27b0ec: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x27B0ECu;
    SET_GPR_U32(ctx, 31, 0x27B0F4u);
    ctx->pc = 0x27B0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B0ECu;
    // 0x27b0f0: 0x3c1201c3  lui         $s2, 0x1C3 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)451 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x27B0ECu, 0x27B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B0F4u;
label_27b0f4:
    // 0x27b0f4: 0x3c0401c3  lui         $a0, 0x1C3
    ctx->pc = 0x27b0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)451 << 16));
    // 0x27b0f8: 0x248453b8  addiu       $a0, $a0, 0x53B8
    ctx->pc = 0x27b0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21432));
    // 0x27b0fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b100: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x27b100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x27b104: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x27B104u;
    SET_GPR_U32(ctx, 31, 0x27B10Cu);
    ctx->pc = 0x27B108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B104u;
    // 0x27b108: 0x3c15003b  lui         $s5, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x27B104u, 0x27B10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B10Cu;
label_27b10c:
    // 0x27b10c: 0x3c0501c3  lui         $a1, 0x1C3
    ctx->pc = 0x27b10cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)451 << 16));
    // 0x27b110: 0x26475390  addiu       $a3, $s2, 0x5390
    ctx->pc = 0x27b110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 21392));
    // 0x27b114: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x27b114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x27b118: 0x24060fff  addiu       $a2, $zero, 0xFFF
    ctx->pc = 0x27b118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x27b11c: 0x3c1401c3  lui         $s4, 0x1C3
    ctx->pc = 0x27b11cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)451 << 16));
    // 0x27b120: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x27b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27b124: 0x3c1101c3  lui         $s1, 0x1C3
    ctx->pc = 0x27b124u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)451 << 16));
    // 0x27b128: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x27b128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x27b12c: 0xaca053a8  sw          $zero, 0x53A8($a1)
    ctx->pc = 0x27b12cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 21416), GPR_U32(ctx, 0));
    // 0x27b130: 0xac6053d0  sw          $zero, 0x53D0($v1)
    ctx->pc = 0x27b130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21456), GPR_U32(ctx, 0));
    // 0x27b134: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x27b134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x27b138: 0xae865394  sw          $a2, 0x5394($s4)
    ctx->pc = 0x27b138u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 21396), GPR_U32(ctx, 6));
    // 0x27b13c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27b13cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b140: 0xaea234bc  sw          $v0, 0x34BC($s5)
    ctx->pc = 0x27b140u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 13500), GPR_U32(ctx, 2));
    // 0x27b144: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x27b144u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b148: 0xae24538c  sw          $a0, 0x538C($s1)
    ctx->pc = 0x27b148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 21388), GPR_U32(ctx, 4));
    // 0x27b14c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27b14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b150: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x27b150u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x27b154: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x27b154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_27b158:
    // 0x27b158: 0xc51014  dsllv       $v0, $a1, $a2
    ctx->pc = 0x27b158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x27b15c: 0x0  nop
    ctx->pc = 0x27b15cu;
    // NOP
    // 0x27b160: 0x0  nop
    ctx->pc = 0x27b160u;
    // NOP
    // 0x27b164: 0x0  nop
    ctx->pc = 0x27b164u;
    // NOP
    // 0x27b168: 0x0  nop
    ctx->pc = 0x27b168u;
    // NOP
    // 0x27b16c: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27B16Cu;
    {
        const bool branch_taken_0x27b16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27b16c) {
            ctx->pc = 0x27B170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B16Cu;
            // 0x27b170: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27b158;
        }
    }
    ctx->pc = 0x27B174u;
    // 0x27b174: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x27b174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
    // 0x27b178: 0x26045440  addiu       $a0, $s0, 0x5440
    ctx->pc = 0x27b178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21568));
    // 0x27b17c: 0x8c4553e0  lw          $a1, 0x53E0($v0)
    ctx->pc = 0x27b17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21472)));
    // 0x27b180: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x27b180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
    // 0x27b184: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x27b184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x27b188: 0x24535388  addiu       $s3, $v0, 0x5388
    ctx->pc = 0x27b188u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 21384));
    // 0x27b18c: 0x24675380  addiu       $a3, $v1, 0x5380
    ctx->pc = 0x27b18cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 21376));
    // 0x27b190: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x27b190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x27b194: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x27b194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x27b198: 0x3442e800  ori         $v0, $v0, 0xE800
    ctx->pc = 0x27b198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59392);
    // 0x27b19c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27b1a0: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x27b1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x27b1a4: 0xac625384  sw          $v0, 0x5384($v1)
    ctx->pc = 0x27b1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21380), GPR_U32(ctx, 2));
    // 0x27b1a8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x27b1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x27b1ac: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27B1ACu;
    {
        const bool branch_taken_0x27b1ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B1ACu;
        // 0x27b1b0: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b1ac) {
            ctx->pc = 0x27B1C8u;
            goto label_27b1c8;
        }
    }
    ctx->pc = 0x27B1B4u;
    // 0x27b1b4: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x27b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x27b1b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b1bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27B1BCu;
    {
        const bool branch_taken_0x27b1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B1BCu;
        // 0x27b1c0: 0xac6253e4  sw          $v0, 0x53E4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 21476), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b1bc) {
            ctx->pc = 0x27B1CCu;
            goto label_27b1cc;
        }
    }
    ctx->pc = 0x27B1C4u;
    // 0x27b1c4: 0x0  nop
    ctx->pc = 0x27b1c4u;
    // NOP
label_27b1c8:
    // 0x27b1c8: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x27b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
label_27b1cc:
    // 0x27b1cc: 0x8c6253e4  lw          $v0, 0x53E4($v1)
    ctx->pc = 0x27b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21476)));
    // 0x27b1d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B1D0u;
    {
        const bool branch_taken_0x27b1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B1D0u;
        // 0x27b1d4: 0x3c0301c3  lui         $v1, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b1d0) {
            ctx->pc = 0x27B1E0u;
            goto label_27b1e0;
        }
    }
    ctx->pc = 0x27B1D8u;
    // 0x27b1d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b1dc: 0xac6253d4  sw          $v0, 0x53D4($v1)
    ctx->pc = 0x27b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21460), GPR_U32(ctx, 2));
label_27b1e0:
    // 0x27b1e0: 0x26525390  addiu       $s2, $s2, 0x5390
    ctx->pc = 0x27b1e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 21392));
    // 0x27b1e4: 0x2631538c  addiu       $s1, $s1, 0x538C
    ctx->pc = 0x27b1e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 21388));
    // 0x27b1e8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x27b1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27b1ec: 0x3c100005  lui         $s0, 0x5
    ctx->pc = 0x27b1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)5 << 16));
    // 0x27b1f0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x27b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27b1f4: 0x3610e800  ori         $s0, $s0, 0xE800
    ctx->pc = 0x27b1f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)59392);
    // 0x27b1f8: 0x61082  srl         $v0, $a2, 2
    ctx->pc = 0x27b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x27b1fc: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x27b1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27b200: 0x708007  srav        $s0, $s0, $v1
    ctx->pc = 0x27b200u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
    // 0x27b204: 0x3c0801c3  lui         $t0, 0x1C3
    ctx->pc = 0x27b204u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)451 << 16));
    // 0x27b208: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x27b208u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x27b20c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x27b20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b210: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b214: 0xad0753ac  sw          $a3, 0x53AC($t0)
    ctx->pc = 0x27b214u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 21420), GPR_U32(ctx, 7));
    // 0x27b218: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27B218u;
    {
        const bool branch_taken_0x27b218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b218) {
            ctx->pc = 0x27B21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B218u;
            // 0x27b21c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B220u;
            goto label_27b220;
        }
    }
    ctx->pc = 0x27B220u;
label_27b220:
    // 0x27b220: 0x8012  mflo        $s0
    ctx->pc = 0x27b220u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x27b224: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27b224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27b228: 0x2060018  mult        $zero, $s0, $a2
    ctx->pc = 0x27b228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x27b22c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x27B22Cu;
    SET_GPR_U32(ctx, 31, 0x27B234u);
    ctx->pc = 0x27B230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B22Cu;
    // 0x27b230: 0x3012  mflo        $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ctx->lo);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x27B22Cu, 0x27B234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B234u;
label_27b234:
    // 0x27b234: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x27b234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27b238: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x27b238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x27b23c: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x27b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
    // 0x27b240: 0x2058018  mult        $s0, $s0, $a1
    ctx->pc = 0x27b240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x27b244: 0x8e835394  lw          $v1, 0x5394($s4)
    ctx->pc = 0x27b244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 21396)));
    // 0x27b248: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x27b248u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27b24c: 0x26a934bc  addiu       $t1, $s5, 0x34BC
    ctx->pc = 0x27b24cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), 13500));
    // 0x27b250: 0x32827  nor         $a1, $zero, $v1
    ctx->pc = 0x27b250u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x27b254: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x27b254u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x27b258: 0x3c0701c3  lui         $a3, 0x1C3
    ctx->pc = 0x27b258u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)451 << 16));
    // 0x27b25c: 0x3c0601c3  lui         $a2, 0x1C3
    ctx->pc = 0x27b25cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)451 << 16));
    // 0x27b260: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x27b260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x27b264: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x27b264u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x27b268: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x27b268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27b26c: 0xac5053b0  sw          $s0, 0x53B0($v0)
    ctx->pc = 0x27b26cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 21424), GPR_U32(ctx, 16));
    // 0x27b270: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x27b270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x27b274: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x27b274u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x27b278: 0x2431006  srlv        $v0, $v1, $s2
    ctx->pc = 0x27b278u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x27b27c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x27b27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27b280: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x27b280u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x27b284: 0xace353a0  sw          $v1, 0x53A0($a3)
    ctx->pc = 0x27b284u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 21408), GPR_U32(ctx, 3));
    // 0x27b288: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27B288u;
    {
        const bool branch_taken_0x27b288 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B288u;
        // 0x27b28c: 0xacc253a4  sw          $v0, 0x53A4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 21412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b288) {
            ctx->pc = 0x27B29Cu;
            goto label_27b29c;
        }
    }
    ctx->pc = 0x27B290u;
    // 0x27b290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b294: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x27b294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b298: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x27b298u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_27b29c:
    // 0x27b29c: 0x2481004  sllv        $v0, $t0, $s2
    ctx->pc = 0x27b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 18) & 0x1F));
    // 0x27b2a0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x27b2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x27b2a4: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x27b2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x27b2a8: 0x3c1001c3  lui         $s0, 0x1C3
    ctx->pc = 0x27b2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)451 << 16));
    // 0x27b2ac: 0xc09e6f8  jal         func_279BE0
    ctx->pc = 0x27B2ACu;
    SET_GPR_U32(ctx, 31, 0x27B2B4u);
    ctx->pc = 0x27B2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B2ACu;
    // 0x27b2b0: 0x261053e8  addiu       $s0, $s0, 0x53E8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279BE0u, 0x27B2ACu, 0x27B2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B2B4u;
label_27b2b4:
    // 0x27b2b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b2b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x27b2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x27b2bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27b2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b2c0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x27B2C0u;
    SET_GPR_U32(ctx, 31, 0x27B2C8u);
    ctx->pc = 0x27B2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B2C0u;
    // 0x27b2c4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x27B2C0u, 0x27B2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B2C8u;
label_27b2c8:
    // 0x27b2c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b2cc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x27b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x27b2d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27b2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b2d4: 0x24429fe8  addiu       $v0, $v0, -0x6018
    ctx->pc = 0x27b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942696));
    // 0x27b2d8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x27b2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x27b2dc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x27b2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x27b2e0: 0xc043318  jal         func_10CC60
    ctx->pc = 0x27B2E0u;
    SET_GPR_U32(ctx, 31, 0x27B2E8u);
    ctx->pc = 0x27B2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B2E0u;
    // 0x27b2e4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x27B2E0u, 0x27B2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B2E8u;
label_27b2e8:
    // 0x27b2e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27b2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b2ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27b2f0: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x27b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x27b2f4: 0x4800014  bltz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x27B2F4u;
    {
        const bool branch_taken_0x27b2f4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B2F4u;
        // 0x27b2f8: 0xac645398  sw          $a0, 0x5398($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 21400), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b2f4) {
            ctx->pc = 0x27B348u;
            goto label_27b348;
        }
    }
    ctx->pc = 0x27B2FCu;
    // 0x27b2fc: 0x26c334b8  addiu       $v1, $s6, 0x34B8
    ctx->pc = 0x27b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 13496));
    // 0x27b300: 0x3c0a01c3  lui         $t2, 0x1C3
    ctx->pc = 0x27b300u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)451 << 16));
    // 0x27b304: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27b304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27b308: 0x3c0701c3  lui         $a3, 0x1C3
    ctx->pc = 0x27b308u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)451 << 16));
    // 0x27b30c: 0x3c0801c3  lui         $t0, 0x1C3
    ctx->pc = 0x27b30cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)451 << 16));
    // 0x27b310: 0x3c0901c3  lui         $t1, 0x1C3
    ctx->pc = 0x27b310u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)451 << 16));
    // 0x27b314: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27b314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27b318: 0x3c0401c3  lui         $a0, 0x1C3
    ctx->pc = 0x27b318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)451 << 16));
    // 0x27b31c: 0x3c0501c3  lui         $a1, 0x1C3
    ctx->pc = 0x27b31cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)451 << 16));
    // 0x27b320: 0x3c0601c3  lui         $a2, 0x1C3
    ctx->pc = 0x27b320u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)451 << 16));
    // 0x27b324: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x27b324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x27b328: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27b328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b32c: 0xad4053f0  sw          $zero, 0x53F0($t2)
    ctx->pc = 0x27b32cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 21488), GPR_U32(ctx, 0));
    // 0x27b330: 0xace053f4  sw          $zero, 0x53F4($a3)
    ctx->pc = 0x27b330u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 21492), GPR_U32(ctx, 0));
    // 0x27b334: 0xad0053f8  sw          $zero, 0x53F8($t0)
    ctx->pc = 0x27b334u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 21496), GPR_U32(ctx, 0));
    // 0x27b338: 0xad205400  sw          $zero, 0x5400($t1)
    ctx->pc = 0x27b338u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 21504), GPR_U32(ctx, 0));
    // 0x27b33c: 0xac8053fc  sw          $zero, 0x53FC($a0)
    ctx->pc = 0x27b33cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 21500), GPR_U32(ctx, 0));
    // 0x27b340: 0xaca05404  sw          $zero, 0x5404($a1)
    ctx->pc = 0x27b340u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 21508), GPR_U32(ctx, 0));
    // 0x27b344: 0xacc05408  sw          $zero, 0x5408($a2)
    ctx->pc = 0x27b344u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 21512), GPR_U32(ctx, 0));
label_27b348:
    // 0x27b348: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x27b348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b34c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x27b34cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27b350: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27b350u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b354: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x27b354u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27b358: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x27b358u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b35c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x27b35cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x27b360: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x27b360u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27b364: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x27b364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x27b368: 0x3e00008  jr          $ra
    ctx->pc = 0x27B368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B368u;
        // 0x27b36c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B370u;
}
