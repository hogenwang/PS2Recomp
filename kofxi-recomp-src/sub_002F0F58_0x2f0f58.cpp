#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F0F58
// Address: 0x2f0f58 - 0x2f1010
void sub_002F0F58_0x2f0f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0F58_0x2f0f58");
#endif

    switch (ctx->pc) {
        case 0x2f0fa0u: goto label_2f0fa0;
        case 0x2f0fa4u: goto label_2f0fa4;
        case 0x2f0fa8u: goto label_2f0fa8;
        case 0x2f0fbcu: goto label_2f0fbc;
        case 0x2f0fd0u: goto label_2f0fd0;
        case 0x2f0ff8u: goto label_2f0ff8;
        default: break;
    }

    ctx->pc = 0x2f0f58u;

    // 0x2f0f58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f0f5c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f0f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0f60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f0f64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f0f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f0f68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f0f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f0f6c: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x2f0f6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2f0f70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f0f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2f0f74: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F0F74u;
    {
        const bool branch_taken_0x2f0f74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0F74u;
            // 0x2f0f78: 0x30d200ff  andi        $s2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f74) {
            ctx->pc = 0x2F0FBCu;
            goto label_2f0fbc;
        }
    }
    ctx->pc = 0x2F0F7Cu;
    // 0x2f0f7c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2f0f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2f0f80: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f0f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f0f84: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2f0f84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2f0f88: 0x24841828  addiu       $a0, $a0, 0x1828
    ctx->pc = 0x2f0f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6184));
    // 0x2f0f8c: 0x25081840  addiu       $t0, $t0, 0x1840
    ctx->pc = 0x2f0f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6208));
    // 0x2f0f90: 0x24050ea2  addiu       $a1, $zero, 0xEA2
    ctx->pc = 0x2f0f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3746));
    // 0x2f0f94: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f0f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f0f98: 0xc0bc73e  jal         func_2F1CF8
    ctx->pc = 0x2F0F98u;
    SET_GPR_U32(ctx, 31, 0x2F0FA0u);
    ctx->pc = 0x2F0F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0F98u;
            // 0x2f0f9c: 0x34e763bd  ori         $a3, $a3, 0x63BD (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25533);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (runtime->hasFunction(0x2F1CF8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0FA0u; }
        if (ctx->pc != 0x2F0FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0FA0u; }
        if (ctx->pc != 0x2F0FA0u) { return; }
    }
    ctx->pc = 0x2F0FA0u;
label_2f0fa0:
    // 0x2f0fa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f0fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0fa4:
    // 0x2f0fa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0fa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f0fa8:
    // 0x2f0fa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f0fa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f0fac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f0facu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0fb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f0fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f0fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0FB4u;
            // 0x2f0fb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F0FBCu;
label_2f0fbc:
    // 0x2f0fbc: 0x908e0003  lbu         $t6, 0x3($a0)
    ctx->pc = 0x2f0fbcu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2f0fc0: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x2f0fc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f0fc4: 0x11cffff7  beq         $t6, $t7, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F0FC4u;
    {
        const bool branch_taken_0x2f0fc4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2F0FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0FC4u;
            // 0x2f0fc8: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0fc4) {
            ctx->pc = 0x2F0FA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f0fa4;
        }
    }
    ctx->pc = 0x2F0FCCu;
    // 0x2f0fcc: 0x904f0000  lbu         $t7, 0x0($v0)
    ctx->pc = 0x2f0fccu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0fd0:
    // 0x2f0fd0: 0x31ef000f  andi        $t7, $t7, 0xF
    ctx->pc = 0x2f0fd0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)15);
    // 0x2f0fd4: 0x55f00005  bnel        $t7, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F0FD4u;
    {
        const bool branch_taken_0x2f0fd4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        if (branch_taken_0x2f0fd4) {
            ctx->pc = 0x2F0FD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0FD4u;
            // 0x2f0fd8: 0x90450001  lbu         $a1, 0x1($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F0FECu;
            goto label_2f0fec;
        }
    }
    ctx->pc = 0x2F0FDCu;
    // 0x2f0fdc: 0x904f0002  lbu         $t7, 0x2($v0)
    ctx->pc = 0x2f0fdcu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2f0fe0: 0x51f2fff1  beql        $t7, $s2, . + 4 + (-0xF << 2)
    ctx->pc = 0x2F0FE0u;
    {
        const bool branch_taken_0x2f0fe0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 18));
        if (branch_taken_0x2f0fe0) {
            ctx->pc = 0x2F0FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0FE0u;
            // 0x2f0fe4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F0FA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f0fa8;
        }
    }
    ctx->pc = 0x2F0FE8u;
    // 0x2f0fe8: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x2f0fe8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2f0fec:
    // 0x2f0fec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f0fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0ff0: 0xc0bc19e  jal         func_2F0678
    ctx->pc = 0x2F0FF0u;
    SET_GPR_U32(ctx, 31, 0x2F0FF8u);
    ctx->pc = 0x2F0FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0FF0u;
            // 0x2f0ff4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0678u;
    if (runtime->hasFunction(0x2F0678u)) {
        auto targetFn = runtime->lookupFunction(0x2F0678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0FF8u; }
        if (ctx->pc != 0x2F0FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0678_0x2f0678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0FF8u; }
        if (ctx->pc != 0x2F0FF8u) { return; }
    }
    ctx->pc = 0x2F0FF8u;
label_2f0ff8:
    // 0x2f0ff8: 0x904f0003  lbu         $t7, 0x3($v0)
    ctx->pc = 0x2f0ff8u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2f0ffc: 0x55f1fff4  bnel        $t7, $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F0FFCu;
    {
        const bool branch_taken_0x2f0ffc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 17));
        if (branch_taken_0x2f0ffc) {
            ctx->pc = 0x2F1000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0FFCu;
            // 0x2f1000: 0x904f0000  lbu         $t7, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F0FD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f0fd0;
        }
    }
    ctx->pc = 0x2F1004u;
    // 0x2f1004: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x2F1004u;
    {
        const bool branch_taken_0x2f1004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1004u;
            // 0x2f1008: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1004) {
            ctx->pc = 0x2F0FA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f0fa8;
        }
    }
    ctx->pc = 0x2F100Cu;
    // 0x2f100c: 0x0  nop
    ctx->pc = 0x2f100cu;
    // NOP
    ctx->pc = 0x2f1010u;
}
