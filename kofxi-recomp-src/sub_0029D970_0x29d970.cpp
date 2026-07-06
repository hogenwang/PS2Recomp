#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029D970
// Address: 0x29d970 - 0x29da80
void sub_0029D970_0x29d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D970_0x29d970");
#endif

    switch (ctx->pc) {
        case 0x29d988u: goto label_29d988;
        case 0x29d9acu: goto label_29d9ac;
        case 0x29d9c0u: goto label_29d9c0;
        case 0x29d9e0u: goto label_29d9e0;
        default: break;
    }

    ctx->pc = 0x29d970u;

    // 0x29d970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29d970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29d974: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x29d974u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29d978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29d97c: 0x18c00012  blez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x29D97Cu;
    {
        const bool branch_taken_0x29d97c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x29D980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D97Cu;
            // 0x29d980: 0x8c8a0000  lw          $t2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d97c) {
            ctx->pc = 0x29D9C8u;
            goto label_29d9c8;
        }
    }
    ctx->pc = 0x29D984u;
    // 0x29d984: 0x65840  sll         $t3, $a2, 1
    ctx->pc = 0x29d984u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_29d988:
    // 0x29d988: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x29d988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x29d98c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x29d98cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x29d990: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x29d990u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d994: 0x126102a  slt         $v0, $t1, $a2
    ctx->pc = 0x29d994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x29d998: 0x0  nop
    ctx->pc = 0x29d998u;
    // NOP
    // 0x29d99c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29D99Cu;
    {
        const bool branch_taken_0x29d99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d99c) {
            ctx->pc = 0x29D988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d988;
        }
    }
    ctx->pc = 0x29D9A4u;
    // 0x29d9a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29D9A4u;
    {
        const bool branch_taken_0x29d9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D9A4u;
            // 0x29d9a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d9a4) {
            ctx->pc = 0x29D9D0u;
            goto label_29d9d0;
        }
    }
    ctx->pc = 0x29D9ACu;
label_29d9ac:
    // 0x29d9ac: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x29d9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x29d9b0: 0x24060067  addiu       $a2, $zero, 0x67
    ctx->pc = 0x29d9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x29d9b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29d9b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d9b8: 0xc0a5648  jal         func_295920
    ctx->pc = 0x29D9B8u;
    SET_GPR_U32(ctx, 31, 0x29D9C0u);
    ctx->pc = 0x29D9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D9B8u;
            // 0x29d9bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D9C0u; }
        if (ctx->pc != 0x29D9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D9C0u; }
        if (ctx->pc != 0x29D9C0u) { return; }
    }
    ctx->pc = 0x29D9C0u;
label_29d9c0:
    // 0x29d9c0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x29D9C0u;
    {
        const bool branch_taken_0x29d9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D9C0u;
            // 0x29d9c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d9c0) {
            ctx->pc = 0x29DA74u;
            goto label_29da74;
        }
    }
    ctx->pc = 0x29D9C8u;
label_29d9c8:
    // 0x29d9c8: 0x65840  sll         $t3, $a2, 1
    ctx->pc = 0x29d9c8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x29d9cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x29d9ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d9d0:
    // 0x29d9d0: 0x59600027  blezl       $t3, . + 4 + (0x27 << 2)
    ctx->pc = 0x29D9D0u;
    {
        const bool branch_taken_0x29d9d0 = (GPR_S32(ctx, 11) <= 0);
        if (branch_taken_0x29d9d0) {
            ctx->pc = 0x29D9D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29D9D0u;
            // 0x29d9d4: 0xac8a0000  sw          $t2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29DA70u;
            goto label_29da70;
        }
    }
    ctx->pc = 0x29D9D8u;
    // 0x29d9d8: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x29d9d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x29d9dc: 0x0  nop
    ctx->pc = 0x29d9dcu;
    // NOP
label_29d9e0:
    // 0x29d9e0: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x29d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x29d9e4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x29d9e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x29d9e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D9E8u;
    {
        const bool branch_taken_0x29d9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D9E8u;
            // 0x29d9ec: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d9e8) {
            ctx->pc = 0x29D9F8u;
            goto label_29d9f8;
        }
    }
    ctx->pc = 0x29D9F0u;
    // 0x29d9f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x29D9F0u;
    {
        const bool branch_taken_0x29d9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D9F0u;
            // 0x29d9f4: 0x2448ffd0  addiu       $t0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d9f0) {
            ctx->pc = 0x29DA28u;
            goto label_29da28;
        }
    }
    ctx->pc = 0x29D9F8u;
label_29d9f8:
    // 0x29d9f8: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x29d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
    // 0x29d9fc: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x29d9fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x29da00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29DA00u;
    {
        const bool branch_taken_0x29da00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DA00u;
            // 0x29da04: 0x2462ff9f  addiu       $v0, $v1, -0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29da00) {
            ctx->pc = 0x29DA14u;
            goto label_29da14;
        }
    }
    ctx->pc = 0x29DA08u;
    // 0x29da08: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x29da08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x29da0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29DA0Cu;
    {
        const bool branch_taken_0x29da0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DA0Cu;
            // 0x29da10: 0x2448ffc9  addiu       $t0, $v0, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29da0c) {
            ctx->pc = 0x29DA28u;
            goto label_29da28;
        }
    }
    ctx->pc = 0x29DA14u;
label_29da14:
    // 0x29da14: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x29da14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x29da18: 0x5040ffe4  beql        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x29DA18u;
    {
        const bool branch_taken_0x29da18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29da18) {
            ctx->pc = 0x29DA1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29DA18u;
            // 0x29da1c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29D9ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d9ac;
        }
    }
    ctx->pc = 0x29DA20u;
    // 0x29da20: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x29da20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x29da24: 0x2448ffa9  addiu       $t0, $v0, -0x57
    ctx->pc = 0x29da24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967209));
label_29da28:
    // 0x29da28: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x29da28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x29da2c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x29da2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x29da30: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x29da30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x29da34: 0x31230001  andi        $v1, $t1, 0x1
    ctx->pc = 0x29da34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x29da38: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29da38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29da3c: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x29da3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x29da40: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29DA40u;
    {
        const bool branch_taken_0x29da40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DA40u;
            // 0x29da44: 0x90c70000  lbu         $a3, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29da40) {
            ctx->pc = 0x29DA54u;
            goto label_29da54;
        }
    }
    ctx->pc = 0x29DA48u;
    // 0x29da48: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x29da48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x29da4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29DA4Cu;
    {
        const bool branch_taken_0x29da4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DA4Cu;
            // 0x29da50: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29da4c) {
            ctx->pc = 0x29DA58u;
            goto label_29da58;
        }
    }
    ctx->pc = 0x29DA54u;
label_29da54:
    // 0x29da54: 0xe81025  or          $v0, $a3, $t0
    ctx->pc = 0x29da54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_29da58:
    // 0x29da58: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x29da58u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x29da5c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x29da5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x29da60: 0x12b102a  slt         $v0, $t1, $t3
    ctx->pc = 0x29da60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x29da64: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x29DA64u;
    {
        const bool branch_taken_0x29da64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29da64) {
            ctx->pc = 0x29DA68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29DA64u;
            // 0x29da68: 0x91430000  lbu         $v1, 0x0($t2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29D9E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d9e0;
        }
    }
    ctx->pc = 0x29DA6Cu;
    // 0x29da6c: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x29da6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
label_29da70:
    // 0x29da70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29da70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29da74:
    // 0x29da74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29da74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29da78: 0x3e00008  jr          $ra
    ctx->pc = 0x29DA78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DA78u;
            // 0x29da7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DA80u;
    ctx->pc = 0x29da80u;
}
