#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F0178
// Address: 0x1f0178 - 0x1f0248
void sub_001F0178_0x1f0178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0178_0x1f0178");
#endif

    switch (ctx->pc) {
        case 0x1f01a8u: goto label_1f01a8;
        case 0x1f01d8u: goto label_1f01d8;
        case 0x1f0208u: goto label_1f0208;
        default: break;
    }

    ctx->pc = 0x1f0178u;

    // 0x1f0178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f017c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1f017cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f0180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f0184: 0x8d222018  lw          $v0, 0x2018($t1)
    ctx->pc = 0x1f0184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8216)));
    // 0x1f0188: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0188u;
    {
        const bool branch_taken_0x1f0188 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F018Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0188u;
            // 0x1f018c: 0x24481080  addiu       $t0, $v0, 0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0188) {
            ctx->pc = 0x1F01A0u;
            goto label_1f01a0;
        }
    }
    ctx->pc = 0x1F0190u;
    // 0x1f0190: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0190u;
    {
        const bool branch_taken_0x1f0190 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0190) {
            ctx->pc = 0x1F01A0u;
            goto label_1f01a0;
        }
    }
    ctx->pc = 0x1F0198u;
    // 0x1f0198: 0x54e00005  bnel        $a3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0198u;
    {
        const bool branch_taken_0x1f0198 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0198) {
            ctx->pc = 0x1F019Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0198u;
            // 0x1f019c: 0x8d22002c  lw          $v0, 0x2C($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F01B0u;
            goto label_1f01b0;
        }
    }
    ctx->pc = 0x1F01A0u;
label_1f01a0:
    // 0x1f01a0: 0xc07d1e8  jal         func_1F47A0
    ctx->pc = 0x1F01A0u;
    SET_GPR_U32(ctx, 31, 0x1F01A8u);
    ctx->pc = 0x1F01A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F01A0u;
            // 0x1f01a4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F47A0u;
    if (runtime->hasFunction(0x1F47A0u)) {
        auto targetFn = runtime->lookupFunction(0x1F47A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F01A8u; }
        if (ctx->pc != 0x1F01A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F47A0_0x1f47a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F01A8u; }
        if (ctx->pc != 0x1F01A8u) { return; }
    }
    ctx->pc = 0x1F01A8u;
label_1f01a8:
    // 0x1f01a8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1F01A8u;
    {
        const bool branch_taken_0x1f01a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F01ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F01A8u;
            // 0x1f01ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f01a8) {
            ctx->pc = 0x1F023Cu;
            goto label_1f023c;
        }
    }
    ctx->pc = 0x1F01B0u;
label_1f01b0:
    // 0x1f01b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1f01b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1f01b4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1f01b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f01b8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F01B8u;
    {
        const bool branch_taken_0x1f01b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f01b8) {
            ctx->pc = 0x1F01BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F01B8u;
            // 0x1f01bc: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F01D8u;
            goto label_1f01d8;
        }
    }
    ctx->pc = 0x1F01C0u;
    // 0x1f01c0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f01c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f01c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f01c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f01c8: 0x34a50f1d  ori         $a1, $a1, 0xF1D
    ctx->pc = 0x1f01c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3869);
    // 0x1f01cc: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F01CCu;
    ctx->pc = 0x1F01D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F01CCu;
            // 0x1f01d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F01D4u;
    // 0x1f01d4: 0x0  nop
    ctx->pc = 0x1f01d4u;
    // NOP
label_1f01d8:
    // 0x1f01d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f01d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f01dc: 0xad05000c  sw          $a1, 0xC($t0)
    ctx->pc = 0x1f01dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
    // 0x1f01e0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1f01e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1f01e4: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x1f01e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
    // 0x1f01e8: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x1f01e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x1f01ec: 0xad050014  sw          $a1, 0x14($t0)
    ctx->pc = 0x1f01ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 5));
    // 0x1f01f0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1f01f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1f01f4: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x1f01f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
    // 0x1f01f8: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x1f01f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x1f01fc: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x1f01fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
    // 0x1f0200: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0200u;
    {
        const bool branch_taken_0x1f0200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0200u;
            // 0x1f0204: 0x28c90011  slti        $t1, $a2, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0200) {
            ctx->pc = 0x1F0224u;
            goto label_1f0224;
        }
    }
    ctx->pc = 0x1F0208u;
label_1f0208:
    // 0x1f0208: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f0208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f020c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1f020cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1f0210: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x1f0210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1f0214: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1f0214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0218: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1f0218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1f021c: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x1f021cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x1f0220: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1f0220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1f0224:
    // 0x1f0224: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1f0224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f0228: 0xc9100b  movn        $v0, $a2, $t1
    ctx->pc = 0x1f0228u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1f022c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1f022cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f0230: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1F0230u;
    {
        const bool branch_taken_0x1f0230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0230u;
            // 0x1f0234: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0230) {
            ctx->pc = 0x1F0208u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f0208;
        }
    }
    ctx->pc = 0x1F0238u;
    // 0x1f0238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f0238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f023c:
    // 0x1f023c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f023cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0240: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0240u;
            // 0x1f0244: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F0248u;
    ctx->pc = 0x1f0248u;
}
