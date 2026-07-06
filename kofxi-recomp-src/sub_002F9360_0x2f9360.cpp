#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F9360
// Address: 0x2f9360 - 0x2f98e8
void sub_002F9360_0x2f9360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9360_0x2f9360");
#endif

    switch (ctx->pc) {
        case 0x2f93b0u: goto label_2f93b0;
        case 0x2f940cu: goto label_2f940c;
        case 0x2f9430u: goto label_2f9430;
        case 0x2f9460u: goto label_2f9460;
        case 0x2f9560u: goto label_2f9560;
        case 0x2f9700u: goto label_2f9700;
        case 0x2f9768u: goto label_2f9768;
        case 0x2f9784u: goto label_2f9784;
        case 0x2f97b0u: goto label_2f97b0;
        case 0x2f97e0u: goto label_2f97e0;
        case 0x2f97f8u: goto label_2f97f8;
        case 0x2f9858u: goto label_2f9858;
        case 0x2f986cu: goto label_2f986c;
        case 0x2f988cu: goto label_2f988c;
        case 0x2f98a0u: goto label_2f98a0;
        case 0x2f98b8u: goto label_2f98b8;
        case 0x2f98c0u: goto label_2f98c0;
        default: break;
    }

    ctx->pc = 0x2f9360u;

label_2f9360:
    // 0x2f9360: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f9360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f9364: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f9364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f9368: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x2f9368u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x2f936c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f936cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f9370: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2f9370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2f9374: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x2f9374u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x2f9378: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f9378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f937c: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x2f937cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9380: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f9380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f9384: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f9384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9388: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f9388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f938c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f938cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9390: 0x8e820658  lw          $v0, 0x658($s4)
    ctx->pc = 0x2f9390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1624)));
    // 0x2f9394: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f9394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9398: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f9398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2f939c: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x2f939cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x2f93a0: 0x1450001d  bne         $v0, $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F93A0u;
    {
        const bool branch_taken_0x2f93a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2F93A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F93A0u;
            // 0x2f93a4: 0xffb50050  sd          $s5, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f93a0) {
            ctx->pc = 0x2F9418u;
            goto label_2f9418;
        }
    }
    ctx->pc = 0x2F93A8u;
    // 0x2f93a8: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x2F93A8u;
    {
        const bool branch_taken_0x2f93a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F93ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F93A8u;
            // 0x2f93ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f93a8) {
            ctx->pc = 0x2F9788u;
            goto label_2f9788;
        }
    }
    ctx->pc = 0x2F93B0u;
label_2f93b0:
    // 0x2f93b0: 0x3c0901cb  lui         $t1, 0x1CB
    ctx->pc = 0x2f93b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)459 << 16));
    // 0x2f93b4: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x2f93b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2f93b8: 0x8d270698  lw          $a3, 0x698($t1)
    ctx->pc = 0x2f93b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1688)));
    // 0x2f93bc: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x2f93bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2f93c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f93c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f93c4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2f93c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f93c8: 0x10b4023  subu        $t0, $t0, $t3
    ctx->pc = 0x2f93c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x2f93cc: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x2f93ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2f93d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2f93d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f93d4: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x2f93d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f93d8: 0x8da30694  lw          $v1, 0x694($t5)
    ctx->pc = 0x2f93d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1684)));
    // 0x2f93dc: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x2f93dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x2f93e0: 0xe29021  addu        $s2, $a3, $v0
    ctx->pc = 0x2f93e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2f93e4: 0x52b00  sll         $a1, $a1, 12
    ctx->pc = 0x2f93e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
    // 0x2f93e8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2f93e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f93ec: 0xac8b000c  sw          $t3, 0xC($a0)
    ctx->pc = 0x2f93ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 11));
    // 0x2f93f0: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x2f93f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2f93f4: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x2f93f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x2f93f8: 0xa086fff0  sb          $a2, -0x10($a0)
    ctx->pc = 0x2f93f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967280), (uint8_t)GPR_U32(ctx, 6));
    // 0x2f93fc: 0x8d220698  lw          $v0, 0x698($t1)
    ctx->pc = 0x2f93fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1688)));
    // 0x2f9400: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f9400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f9404: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2F9404u;
    {
        const bool branch_taken_0x2f9404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9404u;
            // 0x2f9408: 0xac4a0000  sw          $t2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9404) {
            ctx->pc = 0x2F94F8u;
            goto label_2f94f8;
        }
    }
    ctx->pc = 0x2F940Cu;
label_2f940c:
    // 0x2f940c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2f940cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2f9410: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2F9410u;
    {
        const bool branch_taken_0x2f9410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9410u;
            // 0x2f9414: 0xaec20658  sw          $v0, 0x658($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 1624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9410) {
            ctx->pc = 0x2F94F8u;
            goto label_2f94f8;
        }
    }
    ctx->pc = 0x2F9418u;
label_2f9418:
    // 0x2f9418: 0x3c1501cb  lui         $s5, 0x1CB
    ctx->pc = 0x2f9418u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)459 << 16));
    // 0x2f941c: 0x8ea406c0  lw          $a0, 0x6C0($s5)
    ctx->pc = 0x2f941cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1728)));
    // 0x2f9420: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9420u;
    {
        const bool branch_taken_0x2f9420 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2F9424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9420u;
            // 0x2f9424: 0x2e220801  sltiu       $v0, $s1, 0x801 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2049) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9420) {
            ctx->pc = 0x2F9438u;
            goto label_2f9438;
        }
    }
    ctx->pc = 0x2F9428u;
    // 0x2f9428: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x2F9428u;
    SET_GPR_U32(ctx, 31, 0x2F9430u);
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9430u; }
        if (ctx->pc != 0x2F9430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9430u; }
        if (ctx->pc != 0x2F9430u) { return; }
    }
    ctx->pc = 0x2F9430u;
label_2f9430:
    // 0x2f9430: 0x2e220801  sltiu       $v0, $s1, 0x801
    ctx->pc = 0x2f9430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2049) ? 1 : 0);
    // 0x2f9434: 0x0  nop
    ctx->pc = 0x2f9434u;
    // NOP
label_2f9438:
    // 0x2f9438: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2F9438u;
    {
        const bool branch_taken_0x2f9438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F943Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9438u;
            // 0x2f943c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9438) {
            ctx->pc = 0x2F953Cu;
            goto label_2f953c;
        }
    }
    ctx->pc = 0x2F9440u;
    // 0x2f9440: 0x26220fff  addiu       $v0, $s1, 0xFFF
    ctx->pc = 0x2f9440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4095));
    // 0x2f9444: 0x8e8a0658  lw          $t2, 0x658($s4)
    ctx->pc = 0x2f9444u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1624)));
    // 0x2f9448: 0x25b02  srl         $t3, $v0, 12
    ctx->pc = 0x2f9448u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2f944c: 0x115000c8  beq         $t2, $s0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x2F944Cu;
    {
        const bool branch_taken_0x2f944c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 16));
        ctx->pc = 0x2F9450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F944Cu;
            // 0x2f9450: 0xb8b00  sll         $s1, $t3, 12 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 11), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f944c) {
            ctx->pc = 0x2F9770u;
            goto label_2f9770;
        }
    }
    ctx->pc = 0x2F9454u;
    // 0x2f9454: 0x3c0d01cb  lui         $t5, 0x1CB
    ctx->pc = 0x2f9454u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)459 << 16));
    // 0x2f9458: 0x8da30694  lw          $v1, 0x694($t5)
    ctx->pc = 0x2f9458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1684)));
    // 0x2f945c: 0x0  nop
    ctx->pc = 0x2f945cu;
    // NOP
label_2f9460:
    // 0x2f9460: 0xa6100  sll         $t4, $t2, 4
    ctx->pc = 0x2f9460u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x2f9464: 0x1833021  addu        $a2, $t4, $v1
    ctx->pc = 0x2f9464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2f9468: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x2f9468u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2f946c: 0x168102b  sltu        $v0, $t3, $t0
    ctx->pc = 0x2f946cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2f9470: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2F9470u;
    {
        const bool branch_taken_0x2f9470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9470u;
            // 0x2f9474: 0x1481021  addu        $v0, $t2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9470) {
            ctx->pc = 0x2F93B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f93b0;
        }
    }
    ctx->pc = 0x2F9478u;
    // 0x2f9478: 0x550b001b  bnel        $t0, $t3, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F9478u;
    {
        const bool branch_taken_0x2f9478 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 11));
        if (branch_taken_0x2f9478) {
            ctx->pc = 0x2F947Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9478u;
            // 0x2f947c: 0x8cca0004  lw          $t2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F94E8u;
            goto label_2f94e8;
        }
    }
    ctx->pc = 0x2F9480u;
    // 0x2f9480: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2f9480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2f9484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f9484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9488: 0x8c450698  lw          $a1, 0x698($v0)
    ctx->pc = 0x2f9488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1688)));
    // 0x2f948c: 0xa2300  sll         $a0, $t2, 12
    ctx->pc = 0x2f948cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 12));
    // 0x2f9490: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x2f9490u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f9494: 0xa49021  addu        $s2, $a1, $a0
    ctx->pc = 0x2f9494u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f9498: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2f9498u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2f949c: 0x8da40694  lw          $a0, 0x694($t5)
    ctx->pc = 0x2f949cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1684)));
    // 0x2f94a0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2f94a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2f94a4: 0x1841821  addu        $v1, $t4, $a0
    ctx->pc = 0x2f94a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x2f94a8: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x2f94a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x2f94ac: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x2f94acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2f94b0: 0x11060004  beq         $t0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F94B0u;
    {
        const bool branch_taken_0x2f94b0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        ctx->pc = 0x2F94B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F94B0u;
            // 0x2f94b4: 0x81100  sll         $v0, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f94b0) {
            ctx->pc = 0x2F94C4u;
            goto label_2f94c4;
        }
    }
    ctx->pc = 0x2F94B8u;
    // 0x2f94b8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2f94b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f94bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f94bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f94c0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2f94c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_2f94c4:
    // 0x2f94c4: 0x8da40694  lw          $a0, 0x694($t5)
    ctx->pc = 0x2f94c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1684)));
    // 0x2f94c8: 0x1841821  addu        $v1, $t4, $a0
    ctx->pc = 0x2f94c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x2f94cc: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x2f94ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f94d0: 0x1106ffce  beq         $t0, $a2, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2F94D0u;
    {
        const bool branch_taken_0x2f94d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        ctx->pc = 0x2F94D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F94D0u;
            // 0x2f94d4: 0x81100  sll         $v0, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f94d0) {
            ctx->pc = 0x2F940Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f940c;
        }
    }
    ctx->pc = 0x2F94D8u;
    // 0x2f94d8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2f94d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2f94dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f94dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f94e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F94E0u;
    {
        const bool branch_taken_0x2f94e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F94E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F94E0u;
            // 0x2f94e4: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f94e0) {
            ctx->pc = 0x2F94F8u;
            goto label_2f94f8;
        }
    }
    ctx->pc = 0x2F94E8u;
label_2f94e8:
    // 0x2f94e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f94e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f94ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f94ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f94f0: 0x1542ffdb  bne         $t2, $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2F94F0u;
    {
        const bool branch_taken_0x2f94f0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F94F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F94F0u;
            // 0x2f94f4: 0x8da30694  lw          $v1, 0x694($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f94f0) {
            ctx->pc = 0x2F9460u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f9460;
        }
    }
    ctx->pc = 0x2F94F8u;
label_2f94f8:
    // 0x2f94f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f94f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f94fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f94fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9500: 0x1142009b  beq         $t2, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x2F9500u;
    {
        const bool branch_taken_0x2f9500 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9500u;
            // 0x2f9504: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9500) {
            ctx->pc = 0x2F9770u;
            goto label_2f9770;
        }
    }
    ctx->pc = 0x2F9508u;
    // 0x2f9508: 0x8da50694  lw          $a1, 0x694($t5)
    ctx->pc = 0x2f9508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1684)));
    // 0x2f950c: 0x8c430698  lw          $v1, 0x698($v0)
    ctx->pc = 0x2f950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1688)));
    // 0x2f9510: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f9510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9514: 0x3c1001cb  lui         $s0, 0x1CB
    ctx->pc = 0x2f9514u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)459 << 16));
    // 0x2f9518: 0x3c1801cb  lui         $t8, 0x1CB
    ctx->pc = 0x2f9518u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)459 << 16));
    // 0x2f951c: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x2f951cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2f9520: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x2f9520u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x2f9524: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2f9524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2f9528: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x2f9528u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f952c: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x2f952cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2f9530: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f9530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f9534: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x2F9534u;
    {
        const bool branch_taken_0x2f9534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9534u;
            // 0x2f9538: 0xa0440000  sb          $a0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9534) {
            ctx->pc = 0x2F9738u;
            goto label_2f9738;
        }
    }
    ctx->pc = 0x2F953Cu;
label_2f953c:
    // 0x2f953c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2f953cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2f9540: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F9540u;
    {
        const bool branch_taken_0x2f9540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9540u;
            // 0x2f9544: 0x240c0004  addiu       $t4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9540) {
            ctx->pc = 0x2F9584u;
            goto label_2f9584;
        }
    }
    ctx->pc = 0x2F9548u;
    // 0x2f9548: 0x3c0d01cb  lui         $t5, 0x1CB
    ctx->pc = 0x2f9548u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)459 << 16));
    // 0x2f954c: 0x3c0f01cb  lui         $t7, 0x1CB
    ctx->pc = 0x2f954cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)459 << 16));
    // 0x2f9550: 0x3c0601cb  lui         $a2, 0x1CB
    ctx->pc = 0x2f9550u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)459 << 16));
    // 0x2f9554: 0x3c1001cb  lui         $s0, 0x1CB
    ctx->pc = 0x2f9554u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)459 << 16));
    // 0x2f9558: 0x3c1801cb  lui         $t8, 0x1CB
    ctx->pc = 0x2f9558u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)459 << 16));
    // 0x2f955c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2f955cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_2f9560:
    // 0x2f9560: 0x2982000c  slti        $v0, $t4, 0xC
    ctx->pc = 0x2f9560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2f9564: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F9564u;
    {
        const bool branch_taken_0x2f9564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9564u;
            // 0x2f9568: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9564) {
            ctx->pc = 0x2F9598u;
            goto label_2f9598;
        }
    }
    ctx->pc = 0x2F956Cu;
    // 0x2f956c: 0x1821004  sllv        $v0, $v0, $t4
    ctx->pc = 0x2f956cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 12) & 0x1F));
    // 0x2f9570: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2f9570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2f9574: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F9574u;
    {
        const bool branch_taken_0x2f9574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9574) {
            ctx->pc = 0x2F9578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9574u;
            // 0x2f9578: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F9560u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f9560;
        }
    }
    ctx->pc = 0x2F957Cu;
    // 0x2f957c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F957Cu;
    {
        const bool branch_taken_0x2f957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F957Cu;
            // 0x2f9580: 0x258efffc  addiu       $t6, $t4, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f957c) {
            ctx->pc = 0x2F959Cu;
            goto label_2f959c;
        }
    }
    ctx->pc = 0x2F9584u;
label_2f9584:
    // 0x2f9584: 0x3c0d01cb  lui         $t5, 0x1CB
    ctx->pc = 0x2f9584u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)459 << 16));
    // 0x2f9588: 0x3c0f01cb  lui         $t7, 0x1CB
    ctx->pc = 0x2f9588u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)459 << 16));
    // 0x2f958c: 0x3c0601cb  lui         $a2, 0x1CB
    ctx->pc = 0x2f958cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)459 << 16));
    // 0x2f9590: 0x3c1001cb  lui         $s0, 0x1CB
    ctx->pc = 0x2f9590u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)459 << 16));
    // 0x2f9594: 0x3c1801cb  lui         $t8, 0x1CB
    ctx->pc = 0x2f9594u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)459 << 16));
label_2f9598:
    // 0x2f9598: 0x258efffc  addiu       $t6, $t4, -0x4
    ctx->pc = 0x2f9598u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
label_2f959c:
    // 0x2f959c: 0x24c206a0  addiu       $v0, $a2, 0x6A0
    ctx->pc = 0x2f959cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1696));
    // 0x2f95a0: 0xe1880  sll         $v1, $t6, 2
    ctx->pc = 0x2f95a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x2f95a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f95a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f95a8: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x2f95a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f95ac: 0x8d0b0000  lw          $t3, 0x0($t0)
    ctx->pc = 0x2f95acu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2f95b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f95b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f95b4: 0x11650018  beq         $t3, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F95B4u;
    {
        const bool branch_taken_0x2f95b4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 5));
        ctx->pc = 0x2F95B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F95B4u;
            // 0x2f95b8: 0x1848804  sllv        $s1, $a0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 12) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f95b4) {
            ctx->pc = 0x2F9618u;
            goto label_2f9618;
        }
    }
    ctx->pc = 0x2F95BCu;
    // 0x2f95bc: 0x8da20694  lw          $v0, 0x694($t5)
    ctx->pc = 0x2f95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1684)));
    // 0x2f95c0: 0xb3900  sll         $a3, $t3, 4
    ctx->pc = 0x2f95c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x2f95c4: 0x8de40698  lw          $a0, 0x698($t7)
    ctx->pc = 0x2f95c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 1688)));
    // 0x2f95c8: 0xb1b00  sll         $v1, $t3, 12
    ctx->pc = 0x2f95c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 12));
    // 0x2f95cc: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x2f95ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2f95d0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2f95d4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2f95d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f95d8: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x2f95d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f95dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2f95dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f95e0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2f95e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x2f95e4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2f95e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f95e8: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F95E8u;
    {
        const bool branch_taken_0x2f95e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2F95ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F95E8u;
            // 0x2f95ec: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f95e8) {
            ctx->pc = 0x2F95F8u;
            goto label_2f95f8;
        }
    }
    ctx->pc = 0x2F95F0u;
    // 0x2f95f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F95F0u;
    {
        const bool branch_taken_0x2f95f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F95F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F95F0u;
            // 0x2f95f4: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f95f0) {
            ctx->pc = 0x2F9600u;
            goto label_2f9600;
        }
    }
    ctx->pc = 0x2F95F8u;
label_2f95f8:
    // 0x2f95f8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2f95f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2f95fc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2f95fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_2f9600:
    // 0x2f9600: 0x8da30694  lw          $v1, 0x694($t5)
    ctx->pc = 0x2f9600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1684)));
    // 0x2f9604: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2f9604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2f9608: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2f9608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2f960c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f960cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f9610: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2F9610u;
    {
        const bool branch_taken_0x2f9610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9610u;
            // 0x2f9614: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9610) {
            ctx->pc = 0x2F9738u;
            goto label_2f9738;
        }
    }
    ctx->pc = 0x2F9618u;
label_2f9618:
    // 0x2f9618: 0x8eca0658  lw          $t2, 0x658($s6)
    ctx->pc = 0x2f9618u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1624)));
    // 0x2f961c: 0x8da70694  lw          $a3, 0x694($t5)
    ctx->pc = 0x2f961cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1684)));
    // 0x2f9620: 0xa4900  sll         $t1, $t2, 4
    ctx->pc = 0x2f9620u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x2f9624: 0x1272021  addu        $a0, $t1, $a3
    ctx->pc = 0x2f9624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x2f9628: 0x8c8b000c  lw          $t3, 0xC($a0)
    ctx->pc = 0x2f9628u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f962c: 0x29620002  slti        $v0, $t3, 0x2
    ctx->pc = 0x2f962cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f9630: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F9630u;
    {
        const bool branch_taken_0x2f9630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9630) {
            ctx->pc = 0x2F9634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9630u;
            // 0x2f9634: 0x8c880004  lw          $t0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F9674u;
            goto label_2f9674;
        }
    }
    ctx->pc = 0x2F9638u;
    // 0x2f9638: 0x14b2821  addu        $a1, $t2, $t3
    ctx->pc = 0x2f9638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x2f963c: 0x2563ffff  addiu       $v1, $t3, -0x1
    ctx->pc = 0x2f963cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x2f9640: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2f9640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2f9644: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2f9644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2f9648: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2f9648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2f964c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2f964cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9650: 0xa044ffe0  sb          $a0, -0x20($v0)
    ctx->pc = 0x2f9650u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f9654: 0x24a3fffe  addiu       $v1, $a1, -0x2
    ctx->pc = 0x2f9654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x2f9658: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x2f9658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x2f965c: 0x8de20698  lw          $v0, 0x698($t7)
    ctx->pc = 0x2f965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 1688)));
    // 0x2f9660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f9660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f9664: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x2f9664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x2f9668: 0x24aaffff  addiu       $t2, $a1, -0x1
    ctx->pc = 0x2f9668u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2f966c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F966Cu;
    {
        const bool branch_taken_0x2f966c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F966Cu;
            // 0x2f9670: 0xa4900  sll         $t1, $t2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f966c) {
            ctx->pc = 0x2F9698u;
            goto label_2f9698;
        }
    }
    ctx->pc = 0x2F9674u;
label_2f9674:
    // 0x2f9674: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2f9674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2f9678: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2f9678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2f967c: 0x11050003  beq         $t0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F967Cu;
    {
        const bool branch_taken_0x2f967c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x2F9680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F967Cu;
            // 0x2f9680: 0x81100  sll         $v0, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f967c) {
            ctx->pc = 0x2F968Cu;
            goto label_2f968c;
        }
    }
    ctx->pc = 0x2F9684u;
    // 0x2f9684: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2f9684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2f9688: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x2f9688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
label_2f968c:
    // 0x2f968c: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x2f968cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x2f9690: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f9690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2f9694: 0xae830658  sw          $v1, 0x658($s4)
    ctx->pc = 0x2f9694u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1624), GPR_U32(ctx, 3));
label_2f9698:
    // 0x2f9698: 0x8da20694  lw          $v0, 0x694($t5)
    ctx->pc = 0x2f9698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1684)));
    // 0x2f969c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2f969cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f96a0: 0x8de70698  lw          $a3, 0x698($t7)
    ctx->pc = 0x2f96a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 1688)));
    // 0x2f96a4: 0x6c1823  subu        $v1, $v1, $t4
    ctx->pc = 0x2f96a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2f96a8: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2f96a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2f96ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f96acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f96b0: 0xa04c0000  sb          $t4, 0x0($v0)
    ctx->pc = 0x2f96b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x2f96b4: 0x642004  sllv        $a0, $a0, $v1
    ctx->pc = 0x2f96b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x2f96b8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2f96b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2f96bc: 0x24c606a0  addiu       $a2, $a2, 0x6A0
    ctx->pc = 0x2f96bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1696));
    // 0x2f96c0: 0x8da20694  lw          $v0, 0x694($t5)
    ctx->pc = 0x2f96c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1684)));
    // 0x2f96c4: 0xe1880  sll         $v1, $t6, 2
    ctx->pc = 0x2f96c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x2f96c8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2f96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2f96cc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2f96ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2f96d0: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2f96d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2f96d4: 0xa3300  sll         $a2, $t2, 12
    ctx->pc = 0x2f96d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 12));
    // 0x2f96d8: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x2f96d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x2f96dc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2f96dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2f96e0: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x2f96e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x2f96e4: 0xe69021  addu        $s2, $a3, $a2
    ctx->pc = 0x2f96e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2f96e8: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x2f96e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x2f96ec: 0x2e241000  sltiu       $a0, $s1, 0x1000
    ctx->pc = 0x2f96ecu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4096) ? 1 : 0);
    // 0x2f96f0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2f96f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x2f96f4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F96F4u;
    {
        const bool branch_taken_0x2f96f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F96F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F96F4u;
            // 0x2f96f8: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f96f4) {
            ctx->pc = 0x2F9728u;
            goto label_2f9728;
        }
    }
    ctx->pc = 0x2F96FCu;
    // 0x2f96fc: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x2f96fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_2f9700:
    // 0x2f9700: 0x1511023  subu        $v0, $t2, $s1
    ctx->pc = 0x2f9700u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x2f9704: 0x24a9821  addu        $s3, $s2, $t2
    ctx->pc = 0x2f9704u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
    // 0x2f9708: 0x1511821  addu        $v1, $t2, $s1
    ctx->pc = 0x2f9708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x2f970c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2f970cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2f9710: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x2f9710u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9714: 0x2d421000  sltiu       $v0, $t2, 0x1000
    ctx->pc = 0x2f9714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)4096) ? 1 : 0);
    // 0x2f9718: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F9718u;
    {
        const bool branch_taken_0x2f9718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F971Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9718u;
            // 0x2f971c: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9718) {
            ctx->pc = 0x2F9700u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f9700;
        }
    }
    ctx->pc = 0x2F9720u;
    // 0x2f9720: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9720u;
    {
        const bool branch_taken_0x2f9720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9720u;
            // 0x2f9724: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9720) {
            ctx->pc = 0x2F9730u;
            goto label_2f9730;
        }
    }
    ctx->pc = 0x2F9728u;
label_2f9728:
    // 0x2f9728: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x2f9728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x2f972c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f972cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f9730:
    // 0x2f9730: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f9730u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2f9734: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2f9734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2f9738:
    // 0x2f9738: 0x8e0306c4  lw          $v1, 0x6C4($s0)
    ctx->pc = 0x2f9738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1732)));
    // 0x2f973c: 0x8f0206c8  lw          $v0, 0x6C8($t8)
    ctx->pc = 0x2f973cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 1736)));
    // 0x2f9740: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x2f9740u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2f9744: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2f9744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f9748: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9748u;
    {
        const bool branch_taken_0x2f9748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F974Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9748u;
            // 0x2f974c: 0xae0306c4  sw          $v1, 0x6C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1732), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9748) {
            ctx->pc = 0x2F9754u;
            goto label_2f9754;
        }
    }
    ctx->pc = 0x2F9750u;
    // 0x2f9750: 0xaf0306c8  sw          $v1, 0x6C8($t8)
    ctx->pc = 0x2f9750u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 1736), GPR_U32(ctx, 3));
label_2f9754:
    // 0x2f9754: 0x8ea406c0  lw          $a0, 0x6C0($s5)
    ctx->pc = 0x2f9754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1728)));
    // 0x2f9758: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F9758u;
    {
        const bool branch_taken_0x2f9758 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2F975Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9758u;
            // 0x2f975c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9758) {
            ctx->pc = 0x2F9788u;
            goto label_2f9788;
        }
    }
    ctx->pc = 0x2F9760u;
    // 0x2f9760: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2F9760u;
    SET_GPR_U32(ctx, 31, 0x2F9768u);
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9768u; }
        if (ctx->pc != 0x2F9768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9768u; }
        if (ctx->pc != 0x2F9768u) { return; }
    }
    ctx->pc = 0x2F9768u;
label_2f9768:
    // 0x2f9768: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9768u;
    {
        const bool branch_taken_0x2f9768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F976Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9768u;
            // 0x2f976c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9768) {
            ctx->pc = 0x2F9788u;
            goto label_2f9788;
        }
    }
    ctx->pc = 0x2F9770u;
label_2f9770:
    // 0x2f9770: 0x8ea406c0  lw          $a0, 0x6C0($s5)
    ctx->pc = 0x2f9770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1728)));
    // 0x2f9774: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9774u;
    {
        const bool branch_taken_0x2f9774 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2F9778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9774u;
            // 0x2f9778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9774) {
            ctx->pc = 0x2F9788u;
            goto label_2f9788;
        }
    }
    ctx->pc = 0x2F977Cu;
    // 0x2f977c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2F977Cu;
    SET_GPR_U32(ctx, 31, 0x2F9784u);
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9784u; }
        if (ctx->pc != 0x2F9784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9784u; }
        if (ctx->pc != 0x2F9784u) { return; }
    }
    ctx->pc = 0x2F9784u;
label_2f9784:
    // 0x2f9784: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f9784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9788:
    // 0x2f9788: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f9788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f978c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2f978cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f9790: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2f9790u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f9794: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f9794u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f9798: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f9798u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f979c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f979cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f97a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f97a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f97a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f97a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f97a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F97A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F97ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F97A8u;
            // 0x2f97ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F97B0u;
label_2f97b0:
    // 0x2f97b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f97b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f97b4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f97b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f97b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f97b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f97bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f97bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f97c0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f97c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f97c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f97c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f97c8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f97c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f97cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f97ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f97d0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F97D0u;
    {
        const bool branch_taken_0x2f97d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F97D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F97D0u;
            // 0x2f97d4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f97d0) {
            ctx->pc = 0x2F97E8u;
            goto label_2f97e8;
        }
    }
    ctx->pc = 0x2F97D8u;
    // 0x2f97d8: 0xc0be4d8  jal         func_2F9360
    ctx->pc = 0x2F97D8u;
    SET_GPR_U32(ctx, 31, 0x2F97E0u);
    ctx->pc = 0x2F97DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F97D8u;
            // 0x2f97dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9360u;
    goto label_2f9360;
    ctx->pc = 0x2F97E0u;
label_2f97e0:
    // 0x2f97e0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2F97E0u;
    {
        const bool branch_taken_0x2f97e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F97E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F97E0u;
            // 0x2f97e4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f97e0) {
            ctx->pc = 0x2F98C8u;
            goto label_2f98c8;
        }
    }
    ctx->pc = 0x2F97E8u;
label_2f97e8:
    // 0x2f97e8: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F97E8u;
    {
        const bool branch_taken_0x2f97e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F97ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F97E8u;
            // 0x2f97ec: 0x3c0401cb  lui         $a0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f97e8) {
            ctx->pc = 0x2F9800u;
            goto label_2f9800;
        }
    }
    ctx->pc = 0x2F97F0u;
    // 0x2f97f0: 0xc0be63a  jal         func_2F98E8
    ctx->pc = 0x2F97F0u;
    SET_GPR_U32(ctx, 31, 0x2F97F8u);
    ctx->pc = 0x2F97F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F97F0u;
            // 0x2f97f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F98E8u;
    if (runtime->hasFunction(0x2F98E8u)) {
        auto targetFn = runtime->lookupFunction(0x2F98E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F97F8u; }
        if (ctx->pc != 0x2F97F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F98E8_0x2f98e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F97F8u; }
        if (ctx->pc != 0x2F97F8u) { return; }
    }
    ctx->pc = 0x2F97F8u;
label_2f97f8:
    // 0x2f97f8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2F97F8u;
    {
        const bool branch_taken_0x2f97f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F97FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F97F8u;
            // 0x2f97fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f97f8) {
            ctx->pc = 0x2F98C4u;
            goto label_2f98c4;
        }
    }
    ctx->pc = 0x2F9800u;
label_2f9800:
    // 0x2f9800: 0x3c0501cb  lui         $a1, 0x1CB
    ctx->pc = 0x2f9800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)459 << 16));
    // 0x2f9804: 0x8c820698  lw          $v0, 0x698($a0)
    ctx->pc = 0x2f9804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1688)));
    // 0x2f9808: 0x8ca3069c  lw          $v1, 0x69C($a1)
    ctx->pc = 0x2f9808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1692)));
    // 0x2f980c: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x2f980cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2f9810: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2f9810u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2f9814: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x2f9814u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2f9818: 0x1060fff7  beqz        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F9818u;
    {
        const bool branch_taken_0x2f9818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F981Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9818u;
            // 0x2f981c: 0x3c1101cb  lui         $s1, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9818) {
            ctx->pc = 0x2F97F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f97f8;
        }
    }
    ctx->pc = 0x2F9820u;
    // 0x2f9820: 0x2a100  sll         $s4, $v0, 4
    ctx->pc = 0x2f9820u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2f9824: 0x8e250694  lw          $a1, 0x694($s1)
    ctx->pc = 0x2f9824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x2f9828: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f9828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f982c: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x2f982cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2f9830: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2f9830u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f9834: 0x50430023  beql        $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2F9834u;
    {
        const bool branch_taken_0x2f9834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f9834) {
            ctx->pc = 0x2F9838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9834u;
            // 0x2f9838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F98C4u;
            goto label_2f98c4;
        }
    }
    ctx->pc = 0x2F983Cu;
    // 0x2f983c: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2F983Cu;
    {
        const bool branch_taken_0x2f983c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F983Cu;
            // 0x2f9840: 0x3c1001cb  lui         $s0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f983c) {
            ctx->pc = 0x2F97F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f97f8;
        }
    }
    ctx->pc = 0x2F9844u;
    // 0x2f9844: 0x8e0406c0  lw          $a0, 0x6C0($s0)
    ctx->pc = 0x2f9844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1728)));
    // 0x2f9848: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9848u;
    {
        const bool branch_taken_0x2f9848 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2F984Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9848u;
            // 0x2f984c: 0x2851821  addu        $v1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9848) {
            ctx->pc = 0x2F9860u;
            goto label_2f9860;
        }
    }
    ctx->pc = 0x2F9850u;
    // 0x2f9850: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x2F9850u;
    SET_GPR_U32(ctx, 31, 0x2F9858u);
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9858u; }
        if (ctx->pc != 0x2F9858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9858u; }
        if (ctx->pc != 0x2F9858u) { return; }
    }
    ctx->pc = 0x2F9858u;
label_2f9858:
    // 0x2f9858: 0x8e250694  lw          $a1, 0x694($s1)
    ctx->pc = 0x2f9858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x2f985c: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x2f985cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_2f9860:
    // 0x2f9860: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f9860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9864: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2f9864u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f9868: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
label_2f986c:
    if (ctx->pc == 0x2F986Cu) {
        ctx->pc = 0x2F986Cu;
            // 0x2f986c: 0x468804  sllv        $s1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
        ctx->pc = 0x2F9870u;
        goto label_fallthrough_0x2f9868;
    }
    ctx->pc = 0x2F9868u;
    {
        const bool branch_taken_0x2f9868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2F986Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9868u;
            // 0x2f986c: 0x468804  sllv        $s1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9868) {
            ctx->pc = 0x2F9878u;
            goto label_2f9878;
        }
    }
label_fallthrough_0x2f9868:
    ctx->pc = 0x2F9870u;
    // 0x2f9870: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2f9870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2f9874: 0x28b00  sll         $s1, $v0, 12
    ctx->pc = 0x2f9874u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
label_2f9878:
    // 0x2f9878: 0x8e0406c0  lw          $a0, 0x6C0($s0)
    ctx->pc = 0x2f9878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1728)));
    // 0x2f987c: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F987Cu;
    {
        const bool branch_taken_0x2f987c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2F9880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F987Cu;
            // 0x2f9880: 0x233102b  sltu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f987c) {
            ctx->pc = 0x2F9890u;
            goto label_2f9890;
        }
    }
    ctx->pc = 0x2F9884u;
    // 0x2f9884: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2F9884u;
    SET_GPR_U32(ctx, 31, 0x2F988Cu);
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F988Cu; }
        if (ctx->pc != 0x2F988Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F988Cu; }
        if (ctx->pc != 0x2F988Cu) { return; }
    }
    ctx->pc = 0x2F988Cu;
label_2f988c:
    // 0x2f988c: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x2f988cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2f9890:
    // 0x2f9890: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F9890u;
    {
        const bool branch_taken_0x2f9890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9890u;
            // 0x2f9894: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9890) {
            ctx->pc = 0x2F98C4u;
            goto label_2f98c4;
        }
    }
    ctx->pc = 0x2F9898u;
    // 0x2f9898: 0xc0be4d8  jal         func_2F9360
    ctx->pc = 0x2F9898u;
    SET_GPR_U32(ctx, 31, 0x2F98A0u);
    ctx->pc = 0x2F989Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9898u;
            // 0x2f989c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9360u;
    goto label_2f9360;
    ctx->pc = 0x2F98A0u;
label_2f98a0:
    // 0x2f98a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f98a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f98a4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F98A4u;
    {
        const bool branch_taken_0x2f98a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F98A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F98A4u;
            // 0x2f98a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f98a4) {
            ctx->pc = 0x2F98C0u;
            goto label_2f98c0;
        }
    }
    ctx->pc = 0x2F98ACu;
    // 0x2f98ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f98acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f98b0: 0xc049c48  jal         func_127120
    ctx->pc = 0x2F98B0u;
    SET_GPR_U32(ctx, 31, 0x2F98B8u);
    ctx->pc = 0x2F98B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F98B0u;
            // 0x2f98b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F98B8u; }
        if (ctx->pc != 0x2F98B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F98B8u; }
        if (ctx->pc != 0x2F98B8u) { return; }
    }
    ctx->pc = 0x2F98B8u;
label_2f98b8:
    // 0x2f98b8: 0xc0be63a  jal         func_2F98E8
    ctx->pc = 0x2F98B8u;
    SET_GPR_U32(ctx, 31, 0x2F98C0u);
    ctx->pc = 0x2F98BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F98B8u;
            // 0x2f98bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F98E8u;
    if (runtime->hasFunction(0x2F98E8u)) {
        auto targetFn = runtime->lookupFunction(0x2F98E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F98C0u; }
        if (ctx->pc != 0x2F98C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F98E8_0x2f98e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F98C0u; }
        if (ctx->pc != 0x2F98C0u) { return; }
    }
    ctx->pc = 0x2F98C0u;
label_2f98c0:
    // 0x2f98c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f98c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f98c4:
    // 0x2f98c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f98c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f98c8:
    // 0x2f98c8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f98c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f98cc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f98ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f98d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f98d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f98d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f98d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f98d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f98d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f98dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F98DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F98E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F98DCu;
            // 0x2f98e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F98E4u;
    // 0x2f98e4: 0x0  nop
    ctx->pc = 0x2f98e4u;
    // NOP
    ctx->pc = 0x2f98e8u;
}
