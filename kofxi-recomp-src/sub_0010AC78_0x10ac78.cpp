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

// Function: sub_0010AC78
// Address: 0x10ac78 - 0x10af08
void sub_0010AC78_0x10ac78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AC78_0x10ac78");
#endif

    switch (ctx->pc) {
        case 0x10ad60u: goto label_10ad60;
        case 0x10ad70u: goto label_10ad70;
        case 0x10ad78u: goto label_10ad78;
        case 0x10adbcu: goto label_10adbc;
        case 0x10add0u: goto label_10add0;
        case 0x10adf4u: goto label_10adf4;
        case 0x10ae38u: goto label_10ae38;
        case 0x10ae48u: goto label_10ae48;
        case 0x10ae70u: goto label_10ae70;
        default: break;
    }

    ctx->pc = 0x10ac78u;

    // 0x10ac78: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x10ac78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10ac7c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x10ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x10ac80: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x10ac80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x10ac84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10ac84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10ac88: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10ac88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10ac8c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x10ac8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac90: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10ac90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10ac94: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x10ac94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x10ac98: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x10ac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x10ac9c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x10ac9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x10aca0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x10aca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x10aca4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x10aca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x10aca8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x10aca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x10acac: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10acacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10acb0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10acb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10acb4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x10acb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10acb8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x10acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x10acbc: 0x8c8400ec  lw          $a0, 0xEC($a0)
    ctx->pc = 0x10acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x10acc0: 0x8cc50184  lw          $a1, 0x184($a2)
    ctx->pc = 0x10acc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 388)));
    // 0x10acc4: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x10acc4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x10acc8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x10acc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10accc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10acccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10acd0: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10ACD0u;
    {
        const bool branch_taken_0x10acd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACD0u;
        // 0x10acd4: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10acd0) {
            ctx->pc = 0x10ACECu;
            goto label_10acec;
        }
    }
    ctx->pc = 0x10ACD8u;
    // 0x10acd8: 0x8cc400f4  lw          $a0, 0xF4($a2)
    ctx->pc = 0x10acd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 244)));
    // 0x10acdc: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10ACDCu;
    {
        const bool branch_taken_0x10acdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACDCu;
        // 0x10ace0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10acdc) {
            ctx->pc = 0x10AD24u;
            goto label_10ad24;
        }
    }
    ctx->pc = 0x10ACE4u;
    // 0x10ace4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10ACE4u;
    {
        const bool branch_taken_0x10ace4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACE4u;
        // 0x10ace8: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ace4) {
            ctx->pc = 0x10ACF8u;
            goto label_10acf8;
        }
    }
    ctx->pc = 0x10ACECu;
label_10acec:
    // 0x10acec: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x10acecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10acf0: 0x8ce300f4  lw          $v1, 0xF4($a3)
    ctx->pc = 0x10acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 244)));
    // 0x10acf4: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x10acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_10acf8:
    // 0x10acf8: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x10acf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x10acfc: 0x44a818  mult        $s5, $v0, $a0
    ctx->pc = 0x10acfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x10ad00: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AD00u;
    {
        const bool branch_taken_0x10ad00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD00u;
        // 0x10ad04: 0x15a103  sra         $s4, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad00) {
            ctx->pc = 0x10AD14u;
            goto label_10ad14;
        }
    }
    ctx->pc = 0x10AD08u;
    // 0x10ad08: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x10ad08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x10ad0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10AD0Cu;
    {
        const bool branch_taken_0x10ad0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD0Cu;
        // 0x10ad10: 0x44f018  mult        $fp, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad0c) {
            ctx->pc = 0x10AD18u;
            goto label_10ad18;
        }
    }
    ctx->pc = 0x10AD14u;
label_10ad14:
    // 0x10ad14: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x10ad14u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10ad18:
    // 0x10ad18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ad1c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10AD1Cu;
    {
        const bool branch_taken_0x10ad1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD1Cu;
        // 0x10ad20: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad1c) {
            ctx->pc = 0x10AD4Cu;
            goto label_10ad4c;
        }
    }
    ctx->pc = 0x10AD24u;
label_10ad24:
    // 0x10ad24: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x10ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x10ad28: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x10ad28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x10ad2c: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x10ad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x10ad30: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x10ad30u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x10ad34: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10ad34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10ad38: 0x83f018  mult        $fp, $a0, $v1
    ctx->pc = 0x10ad38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
    // 0x10ad3c: 0x7045a818  mult1       $s5, $v0, $a1
    ctx->pc = 0x10ad3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x10ad40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10ad40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10ad44: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x10ad44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x10ad48: 0x15a103  sra         $s4, $s5, 4
    ctx->pc = 0x10ad48u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
label_10ad4c:
    // 0x10ad4c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x10ad4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10ad50: 0x10c00061  beqz        $a2, . + 4 + (0x61 << 2)
    ctx->pc = 0x10AD50u;
    {
        const bool branch_taken_0x10ad50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD50u;
        // 0x10ad54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad50) {
            ctx->pc = 0x10AED8u;
            goto label_10aed8;
        }
    }
    ctx->pc = 0x10AD58u;
    // 0x10ad58: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x10ad58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x10ad5c: 0x0  nop
    ctx->pc = 0x10ad5cu;
    // NOP
label_10ad60:
    // 0x10ad60: 0x8fb10008  lw          $s1, 0x8($sp)
    ctx->pc = 0x10ad60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ad64: 0x18c0004f  blez        $a2, . + 4 + (0x4F << 2)
    ctx->pc = 0x10AD64u;
    {
        const bool branch_taken_0x10ad64 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x10AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD64u;
        // 0x10ad68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad64) {
            ctx->pc = 0x10AEA4u;
            goto label_10aea4;
        }
    }
    ctx->pc = 0x10AD6Cu;
    // 0x10ad6c: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x10ad6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_10ad70:
    // 0x10ad70: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10AD70u;
    SET_GPR_U32(ctx, 31, 0x10AD78u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x10AD70u, 0x10AD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD78u;
label_10ad78:
    // 0x10ad78: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10ad7c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10ad7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10ad80: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x10ad80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x10ad84: 0x34a5d410  ori         $a1, $a1, 0xD410
    ctx->pc = 0x10ad84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54288);
    // 0x10ad88: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x10ad88u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x10ad8c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10ad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10ad90: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x10ad90u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x10ad94: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x10ad94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x10ad98: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10ad98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10ad9c: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x10ad9cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x10ada0: 0x34a5d400  ori         $a1, $a1, 0xD400
    ctx->pc = 0x10ada0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54272);
    // 0x10ada4: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x10ada4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10ada8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10ada8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10adac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10ADACu;
    {
        const bool branch_taken_0x10adac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ADACu;
        // 0x10adb0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10adac) {
            ctx->pc = 0x10ADC0u;
            goto label_10adc0;
        }
    }
    ctx->pc = 0x10ADB4u;
    // 0x10adb4: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10ADB4u;
    SET_GPR_U32(ctx, 31, 0x10ADBCu);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x10ADB4u, 0x10ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ADBCu;
label_10adbc:
    // 0x10adbc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_10adc0:
    // 0x10adc0: 0x2559821  addu        $s3, $s2, $s5
    ctx->pc = 0x10adc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x10adc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10adc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10adc8: 0x23e9021  addu        $s2, $s1, $fp
    ctx->pc = 0x10adc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x10adcc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x10adccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_10add0:
    // 0x10add0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10add0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10add4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x10add4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x10add8: 0x0  nop
    ctx->pc = 0x10add8u;
    // NOP
    // 0x10addc: 0x0  nop
    ctx->pc = 0x10addcu;
    // NOP
    // 0x10ade0: 0x0  nop
    ctx->pc = 0x10ade0u;
    // NOP
    // 0x10ade4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10ADE4u;
    {
        const bool branch_taken_0x10ade4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ade4) {
            ctx->pc = 0x10ADD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10add0;
        }
    }
    ctx->pc = 0x10ADECu;
    // 0x10adec: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10ADECu;
    SET_GPR_U32(ctx, 31, 0x10ADF4u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x10ADECu, 0x10ADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ADF4u;
label_10adf4:
    // 0x10adf4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10adf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10adf8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10adf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10adfc: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x10adfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x10ae00: 0x34a5d010  ori         $a1, $a1, 0xD010
    ctx->pc = 0x10ae00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53264);
    // 0x10ae04: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x10ae04u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x10ae08: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10ae08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10ae0c: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x10ae0cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17)); // MMIO: 0x10000000
    // 0x10ae10: 0x3484d020  ori         $a0, $a0, 0xD020
    ctx->pc = 0x10ae10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53280);
    // 0x10ae14: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10ae14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10ae18: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x10ae18u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x10ae1c: 0x34a5d000  ori         $a1, $a1, 0xD000
    ctx->pc = 0x10ae1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53248);
    // 0x10ae20: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x10ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10ae24: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10ae24u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10ae28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AE28u;
    {
        const bool branch_taken_0x10ae28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE28u;
        // 0x10ae2c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ae28) {
            ctx->pc = 0x10AE3Cu;
            goto label_10ae3c;
        }
    }
    ctx->pc = 0x10AE30u;
    // 0x10ae30: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10AE30u;
    SET_GPR_U32(ctx, 31, 0x10AE38u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x10AE30u, 0x10AE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE38u;
label_10ae38:
    // 0x10ae38: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_10ae3c:
    // 0x10ae3c: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x10ae3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x10ae40: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x10ae40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x10ae44: 0x0  nop
    ctx->pc = 0x10ae44u;
    // NOP
label_10ae48:
    // 0x10ae48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10ae4c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x10ae4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x10ae50: 0x0  nop
    ctx->pc = 0x10ae50u;
    // NOP
    // 0x10ae54: 0x0  nop
    ctx->pc = 0x10ae54u;
    // NOP
    // 0x10ae58: 0x0  nop
    ctx->pc = 0x10ae58u;
    // NOP
    // 0x10ae5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10AE5Cu;
    {
        const bool branch_taken_0x10ae5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ae5c) {
            ctx->pc = 0x10AE48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ae48;
        }
    }
    ctx->pc = 0x10AE64u;
    // 0x10ae64: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10ae64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10ae68: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x10ae68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x10ae6c: 0x0  nop
    ctx->pc = 0x10ae6cu;
    // NOP
label_10ae70:
    // 0x10ae70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10ae74: 0x0  nop
    ctx->pc = 0x10ae74u;
    // NOP
    // 0x10ae78: 0x0  nop
    ctx->pc = 0x10ae78u;
    // NOP
    // 0x10ae7c: 0x0  nop
    ctx->pc = 0x10ae7cu;
    // NOP
    // 0x10ae80: 0x0  nop
    ctx->pc = 0x10ae80u;
    // NOP
    // 0x10ae84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10AE84u;
    {
        const bool branch_taken_0x10ae84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ae84) {
            ctx->pc = 0x10AE70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ae70;
        }
    }
    ctx->pc = 0x10AE8Cu;
    // 0x10ae8c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x10ae8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ae90: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x10ae90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x10ae94: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x10AE94u;
    {
        const bool branch_taken_0x10ae94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE94u;
        // 0x10ae98: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ae94) {
            ctx->pc = 0x10AD70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ad70;
        }
    }
    ctx->pc = 0x10AE9Cu;
    // 0x10ae9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10AE9Cu;
    {
        const bool branch_taken_0x10ae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE9Cu;
        // 0x10aea0: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ae9c) {
            ctx->pc = 0x10AEACu;
            goto label_10aeac;
        }
    }
    ctx->pc = 0x10AEA4u;
label_10aea4:
    // 0x10aea4: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x10aea4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10aea8: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x10aea8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10aeac:
    // 0x10aeac: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x10aeacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aeb0: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x10aeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x10aeb4: 0x8ce200f8  lw          $v0, 0xF8($a3)
    ctx->pc = 0x10aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 248)));
    // 0x10aeb8: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x10aeb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10aebc: 0xa7202a  slt         $a0, $a1, $a3
    ctx->pc = 0x10aebcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x10aec0: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x10aec0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10aec4: 0xe00013  mtlo        $a3
    ctx->pc = 0x10aec4u;
    ctx->lo = GPR_U64(ctx, 7);
    // 0x10aec8: 0x70430000  madd        $zero, $v0, $v1
    ctx->pc = 0x10aec8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x10aecc: 0x3812  mflo        $a3
    ctx->pc = 0x10aeccu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x10aed0: 0x1480ffa3  bnez        $a0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x10AED0u;
    {
        const bool branch_taken_0x10aed0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AED0u;
        // 0x10aed4: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aed0) {
            ctx->pc = 0x10AD60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ad60;
        }
    }
    ctx->pc = 0x10AED8u;
label_10aed8:
    // 0x10aed8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x10aed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10aedc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x10aedcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10aee0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x10aee0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10aee4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x10aee4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10aee8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x10aee8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10aeec: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x10aeecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10aef0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x10aef0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10aef4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10aef4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10aef8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10aef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10aefc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10aefcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10af00: 0x3e00008  jr          $ra
    ctx->pc = 0x10AF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF00u;
        // 0x10af04: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AF08u;
}
