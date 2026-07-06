#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010FC48
// Address: 0x10fc48 - 0x10fec8
void sub_0010FC48_0x10fc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FC48_0x10fc48");
#endif

    switch (ctx->pc) {
        case 0x10fc68u: goto label_10fc68;
        case 0x10fc98u: goto label_10fc98;
        case 0x10fd00u: goto label_10fd00;
        case 0x10fd30u: goto label_10fd30;
        case 0x10fd7cu: goto label_10fd7c;
        case 0x10fd84u: goto label_10fd84;
        case 0x10fdc4u: goto label_10fdc4;
        case 0x10fdd8u: goto label_10fdd8;
        case 0x10fde8u: goto label_10fde8;
        case 0x10fdf4u: goto label_10fdf4;
        case 0x10fe3cu: goto label_10fe3c;
        case 0x10fe40u: goto label_10fe40;
        case 0x10fe48u: goto label_10fe48;
        case 0x10fe5cu: goto label_10fe5c;
        case 0x10fe6cu: goto label_10fe6c;
        case 0x10fe7cu: goto label_10fe7c;
        default: break;
    }

    ctx->pc = 0x10fc48u;

    // 0x10fc48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10fc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10fc4c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x10fc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10fc50: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10fc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10fc54: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10fc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10fc58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10fc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10fc5c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10fc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10fc60: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10FC60u;
    SET_GPR_U32(ctx, 31, 0x10FC68u);
    ctx->pc = 0x10FC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FC60u;
            // 0x10fc64: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FC68u; }
        if (ctx->pc != 0x10FC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FC68u; }
        if (ctx->pc != 0x10FC68u) { return; }
    }
    ctx->pc = 0x10FC68u;
label_10fc68:
    // 0x10fc68: 0x3c0a0036  lui         $t2, 0x36
    ctx->pc = 0x10fc68u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)54 << 16));
    // 0x10fc6c: 0x8d4286a8  lw          $v0, -0x7958($t2)
    ctx->pc = 0x10fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294936232)));
    // 0x10fc70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10FC70u;
    {
        const bool branch_taken_0x10fc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FC70u;
            // 0x10fc74: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc70) {
            ctx->pc = 0x10FC98u;
            goto label_10fc98;
        }
    }
    ctx->pc = 0x10FC78u;
    // 0x10fc78: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10fc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10fc7c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10fc7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10fc80: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10fc80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10fc84: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10fc84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fc88: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10fc88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fc8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10fc8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fc90: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x10FC90u;
    ctx->pc = 0x10FC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FC90u;
            // 0x10fc94: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10FC98u;
label_10fc98:
    // 0x10fc98: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x10fc98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x10fc9c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x10fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x10fca0: 0x24a56780  addiu       $a1, $a1, 0x6780
    ctx->pc = 0x10fca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26496));
    // 0x10fca4: 0x26666700  addiu       $a2, $s3, 0x6700
    ctx->pc = 0x10fca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 26368));
    // 0x10fca8: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x10fca8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x10fcac: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x10fcacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x10fcb0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x10fcb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x10fcb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10fcb8: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x10fcb8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x10fcbc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x10fcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x10fcc0: 0x264267d8  addiu       $v0, $s2, 0x67D8
    ctx->pc = 0x10fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 26584));
    // 0x10fcc4: 0xad4386a8  sw          $v1, -0x7958($t2)
    ctx->pc = 0x10fcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294936232), GPR_U32(ctx, 3));
    // 0x10fcc8: 0x24846980  addiu       $a0, $a0, 0x6980
    ctx->pc = 0x10fcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27008));
    // 0x10fccc: 0x25286800  addiu       $t0, $t1, 0x6800
    ctx->pc = 0x10fcccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 26624));
    // 0x10fcd0: 0xae4667d8  sw          $a2, 0x67D8($s2)
    ctx->pc = 0x10fcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 26584), GPR_U32(ctx, 6));
    // 0x10fcd4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x10fcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10fcd8: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x10fcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x10fcdc: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x10fcdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fce0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x10fce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x10fce4: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x10fce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x10fce8: 0x24640180  addiu       $a0, $v1, 0x180
    ctx->pc = 0x10fce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x10fcec: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x10fcecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x10fcf0: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x10fcf0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x10fcf4: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x10fcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x10fcf8: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x10fcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x10fcfc: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x10fcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_10fd00:
    // 0x10fd00: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x10fd00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x10fd04: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x10fd04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x10fd08: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x10fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x10fd0c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x10fd0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x10fd10: 0x0  nop
    ctx->pc = 0x10fd10u;
    // NOP
    // 0x10fd14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10FD14u;
    {
        const bool branch_taken_0x10fd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fd14) {
            ctx->pc = 0x10FD00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10fd00;
        }
    }
    ctx->pc = 0x10FD1Cu;
    // 0x10fd1c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x10fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x10fd20: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x10fd20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x10fd24: 0x24426980  addiu       $v0, $v0, 0x6980
    ctx->pc = 0x10fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27008));
    // 0x10fd28: 0x2442007c  addiu       $v0, $v0, 0x7C
    ctx->pc = 0x10fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x10fd2c: 0x0  nop
    ctx->pc = 0x10fd2cu;
    // NOP
label_10fd30:
    // 0x10fd30: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10fd30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x10fd34: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x10fd34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x10fd38: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x10fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x10fd3c: 0x0  nop
    ctx->pc = 0x10fd3cu;
    // NOP
    // 0x10fd40: 0x0  nop
    ctx->pc = 0x10fd40u;
    // NOP
    // 0x10fd44: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10FD44u;
    {
        const bool branch_taken_0x10fd44 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x10fd44) {
            ctx->pc = 0x10FD30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10fd30;
        }
    }
    ctx->pc = 0x10FD4Cu;
    // 0x10fd4c: 0x3c020011  lui         $v0, 0x11
    ctx->pc = 0x10fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17 << 16));
    // 0x10fd50: 0x3c030011  lui         $v1, 0x11
    ctx->pc = 0x10fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17 << 16));
    // 0x10fd54: 0x2442fa68  addiu       $v0, $v0, -0x598
    ctx->pc = 0x10fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965864));
    // 0x10fd58: 0x25246800  addiu       $a0, $t1, 0x6800
    ctx->pc = 0x10fd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 26624));
    // 0x10fd5c: 0x2463fa48  addiu       $v1, $v1, -0x5B8
    ctx->pc = 0x10fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965832));
    // 0x10fd60: 0x265167d8  addiu       $s1, $s2, 0x67D8
    ctx->pc = 0x10fd60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 26584));
    // 0x10fd64: 0xad226800  sw          $v0, 0x6800($t1)
    ctx->pc = 0x10fd64u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 26624), GPR_U32(ctx, 2));
    // 0x10fd68: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x10fd68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10fd6c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x10fd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x10fd70: 0xac910010  sw          $s1, 0x10($a0)
    ctx->pc = 0x10fd70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 17));
    // 0x10fd74: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10FD74u;
    SET_GPR_U32(ctx, 31, 0x10FD7Cu);
    ctx->pc = 0x10FD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FD74u;
            // 0x10fd78: 0xac910004  sw          $s1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FD7Cu; }
        if (ctx->pc != 0x10FD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FD7Cu; }
        if (ctx->pc != 0x10FD7Cu) { return; }
    }
    ctx->pc = 0x10FD7Cu;
label_10fd7c:
    // 0x10fd7c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x10FD7Cu;
    SET_GPR_U32(ctx, 31, 0x10FD84u);
    ctx->pc = 0x10FD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FD7Cu;
            // 0x10fd80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FD84u; }
        if (ctx->pc != 0x10FD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FD84u; }
        if (ctx->pc != 0x10FD84u) { return; }
    }
    ctx->pc = 0x10FD84u;
label_10fd84:
    // 0x10fd84: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10fd88: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x10fd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x10fd8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10fd90: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x10fd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x10fd94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FD94u;
    {
        const bool branch_taken_0x10fd94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FD94u;
            // 0x10fd98: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd94) {
            ctx->pc = 0x10FDA8u;
            goto label_10fda8;
        }
    }
    ctx->pc = 0x10FD9Cu;
    // 0x10fd9c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x10fd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x10fda0: 0xac30e010  sw          $s0, -0x1FF0($at)
    ctx->pc = 0x10fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959120), GPR_U32(ctx, 16));
    // 0x10fda4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_10fda8:
    // 0x10fda8: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x10fda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x10fdac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10fdb0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x10fdb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x10fdb4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FDB4u;
    {
        const bool branch_taken_0x10fdb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FDB4u;
            // 0x10fdb8: 0x3c050011  lui         $a1, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fdb4) {
            ctx->pc = 0x10FDC8u;
            goto label_10fdc8;
        }
    }
    ctx->pc = 0x10FDBCu;
    // 0x10fdbc: 0xc043410  jal         func_10D040
    ctx->pc = 0x10FDBCu;
    SET_GPR_U32(ctx, 31, 0x10FDC4u);
    ctx->pc = 0x10D040u;
    if (runtime->hasFunction(0x10D040u)) {
        auto targetFn = runtime->lookupFunction(0x10D040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FDC4u; }
        if (ctx->pc != 0x10FDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D040_0x10d040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FDC4u; }
        if (ctx->pc != 0x10FDC4u) { return; }
    }
    ctx->pc = 0x10FDC4u;
label_10fdc4:
    // 0x10fdc4: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x10fdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
label_10fdc8:
    // 0x10fdc8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x10fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10fdcc: 0x24a501b0  addiu       $a1, $a1, 0x1B0
    ctx->pc = 0x10fdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 432));
    // 0x10fdd0: 0xc04325c  jal         func_10C970
    ctx->pc = 0x10FDD0u;
    SET_GPR_U32(ctx, 31, 0x10FDD8u);
    ctx->pc = 0x10FDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FDD0u;
            // 0x10fdd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C970u;
    if (runtime->hasFunction(0x10C970u)) {
        auto targetFn = runtime->lookupFunction(0x10C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FDD8u; }
        if (ctx->pc != 0x10FDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C970_0x10c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FDD8u; }
        if (ctx->pc != 0x10FDD8u) { return; }
    }
    ctx->pc = 0x10FDD8u;
label_10fdd8:
    // 0x10fdd8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x10fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x10fddc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x10fddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10fde0: 0xc04361e  jal         func_10D878
    ctx->pc = 0x10FDE0u;
    SET_GPR_U32(ctx, 31, 0x10FDE8u);
    ctx->pc = 0x10FDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FDE0u;
            // 0x10fde4: 0xac6267d4  sw          $v0, 0x67D4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 26580), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D878u;
    if (runtime->hasFunction(0x10D878u)) {
        auto targetFn = runtime->lookupFunction(0x10D878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FDE8u; }
        if (ctx->pc != 0x10FDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadRequestQueueHelpers_0x10d878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FDE8u; }
        if (ctx->pc != 0x10FDE8u) { return; }
    }
    ctx->pc = 0x10FDE8u;
label_10fde8:
    // 0x10fde8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10fdec: 0xc04341c  jal         func_10D070
    ctx->pc = 0x10FDECu;
    SET_GPR_U32(ctx, 31, 0x10FDF4u);
    ctx->pc = 0x10D070u;
    if (runtime->hasFunction(0x10D070u)) {
        auto targetFn = runtime->lookupFunction(0x10D070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FDF4u; }
        if (ctx->pc != 0x10FDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D070_0x10d070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FDF4u; }
        if (ctx->pc != 0x10FDF4u) { return; }
    }
    ctx->pc = 0x10FDF4u;
label_10fdf4:
    // 0x10fdf4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10FDF4u;
    {
        const bool branch_taken_0x10fdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FDF4u;
            // 0x10fdf8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fdf4) {
            ctx->pc = 0x10FE3Cu;
            goto label_10fe3c;
        }
    }
    ctx->pc = 0x10FDFCu;
    // 0x10fdfc: 0x268567c0  addiu       $a1, $s4, 0x67C0
    ctx->pc = 0x10fdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 26560));
    // 0x10fe00: 0x26626700  addiu       $v0, $s3, 0x6700
    ctx->pc = 0x10fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 26368));
    // 0x10fe04: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10fe04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10fe08: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10fe08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10fe0c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10fe0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10fe10: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x10fe10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10fe14: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10fe14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10fe18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10fe18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10fe1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fe20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10fe20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10fe24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fe28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10fe28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10fe2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fe30: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x10fe30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x10fe34: 0x804404c  j           func_110130
    ctx->pc = 0x10FE34u;
    ctx->pc = 0x10FE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FE34u;
            // 0x10fe38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110130u;
    if (runtime->hasFunction(0x110130u)) {
        auto targetFn = runtime->lookupFunction(0x110130u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00110130_0x110130(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10FE3Cu;
label_10fe3c:
    // 0x10fe3c: 0x3c100002  lui         $s0, 0x2
    ctx->pc = 0x10fe3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)2 << 16));
label_10fe40:
    // 0x10fe40: 0xc04341c  jal         func_10D070
    ctx->pc = 0x10FE40u;
    SET_GPR_U32(ctx, 31, 0x10FE48u);
    ctx->pc = 0x10FE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FE40u;
            // 0x10fe44: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D070u;
    if (runtime->hasFunction(0x10D070u)) {
        auto targetFn = runtime->lookupFunction(0x10D070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FE48u; }
        if (ctx->pc != 0x10FE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D070_0x10d070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FE48u; }
        if (ctx->pc != 0x10FE48u) { return; }
    }
    ctx->pc = 0x10FE48u;
label_10fe48:
    // 0x10fe48: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x10fe48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x10fe4c: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x10FE4Cu;
    {
        const bool branch_taken_0x10fe4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FE4Cu;
            // 0x10fe50: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe4c) {
            ctx->pc = 0x10FE40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10fe40;
        }
    }
    ctx->pc = 0x10FE54u;
    // 0x10fe54: 0xc04341c  jal         func_10D070
    ctx->pc = 0x10FE54u;
    SET_GPR_U32(ctx, 31, 0x10FE5Cu);
    ctx->pc = 0x10FE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FE54u;
            // 0x10fe58: 0x265067d8  addiu       $s0, $s2, 0x67D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 26584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D070u;
    if (runtime->hasFunction(0x10D070u)) {
        auto targetFn = runtime->lookupFunction(0x10D070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FE5Cu; }
        if (ctx->pc != 0x10FE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D070_0x10d070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FE5Cu; }
        if (ctx->pc != 0x10FE5Cu) { return; }
    }
    ctx->pc = 0x10FE5Cu;
label_10fe5c:
    // 0x10fe5c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10fe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x10fe60: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10fe60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10fe64: 0xc043418  jal         func_10D060
    ctx->pc = 0x10FE64u;
    SET_GPR_U32(ctx, 31, 0x10FE6Cu);
    ctx->pc = 0x10FE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FE64u;
            // 0x10fe68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D060u;
    if (runtime->hasFunction(0x10D060u)) {
        auto targetFn = runtime->lookupFunction(0x10D060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FE6Cu; }
        if (ctx->pc != 0x10FE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D060_0x10d060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FE6Cu; }
        if (ctx->pc != 0x10FE6Cu) { return; }
    }
    ctx->pc = 0x10FE6Cu;
label_10fe6c:
    // 0x10fe6c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10fe70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10fe70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe74: 0xc043418  jal         func_10D060
    ctx->pc = 0x10FE74u;
    SET_GPR_U32(ctx, 31, 0x10FE7Cu);
    ctx->pc = 0x10FE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FE74u;
            // 0x10fe78: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D060u;
    if (runtime->hasFunction(0x10D060u)) {
        auto targetFn = runtime->lookupFunction(0x10D060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FE7Cu; }
        if (ctx->pc != 0x10FE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D060_0x10d060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FE7Cu; }
        if (ctx->pc != 0x10FE7Cu) { return; }
    }
    ctx->pc = 0x10FE7Cu;
label_10fe7c:
    // 0x10fe7c: 0x268367c0  addiu       $v1, $s4, 0x67C0
    ctx->pc = 0x10fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 26560));
    // 0x10fe80: 0x26626700  addiu       $v0, $s3, 0x6700
    ctx->pc = 0x10fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 26368));
    // 0x10fe84: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10fe84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10fe88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10fe88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10fe8c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10fe8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10fe90: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x10fe90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe94: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10fe94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10fe98: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x10fe98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x10fe9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10fe9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fea0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x10fea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10fea4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10fea4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fea8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10fea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10feac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10feacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10feb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10feb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10feb4: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x10feb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x10feb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10feb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10febc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x10febcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x10fec0: 0x804404c  j           func_110130
    ctx->pc = 0x10FEC0u;
    ctx->pc = 0x10FEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FEC0u;
            // 0x10fec4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110130u;
    if (runtime->hasFunction(0x110130u)) {
        auto targetFn = runtime->lookupFunction(0x110130u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00110130_0x110130(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10FEC8u;
    ctx->pc = 0x10fec8u;
}
