#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E5738
// Address: 0x2e5738 - 0x2e5978
void sub_002E5738_0x2e5738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5738_0x2e5738");
#endif

    switch (ctx->pc) {
        case 0x2e57b8u: goto label_2e57b8;
        case 0x2e57c0u: goto label_2e57c0;
        case 0x2e57e0u: goto label_2e57e0;
        case 0x2e5818u: goto label_2e5818;
        case 0x2e5848u: goto label_2e5848;
        case 0x2e586cu: goto label_2e586c;
        case 0x2e5888u: goto label_2e5888;
        case 0x2e589cu: goto label_2e589c;
        case 0x2e58b0u: goto label_2e58b0;
        case 0x2e58d8u: goto label_2e58d8;
        case 0x2e58e8u: goto label_2e58e8;
        case 0x2e58f4u: goto label_2e58f4;
        case 0x2e5910u: goto label_2e5910;
        case 0x2e5938u: goto label_2e5938;
        default: break;
    }

    ctx->pc = 0x2e5738u;

    // 0x2e5738: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2e5738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2e573c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e573cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e5740: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x2e5740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2e5744: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e5744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2e5748: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x2e5748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x2e574c: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x2e574cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5750: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2e5750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2e5754: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x2e5754u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5758: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x2e5758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2e575c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2e575cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5760: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2e5760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2e5764: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2e5764u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5768: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2e5768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2e576c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2e576cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5770: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2e5770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2e5774: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e5774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5778: 0xafab0030  sw          $t3, 0x30($sp)
    ctx->pc = 0x2e5778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 11));
    // 0x2e577c: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2e577cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2e5780: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2e5780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2e5784: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2e5784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2e5788: 0xac40e3d0  sw          $zero, -0x1C30($v0)
    ctx->pc = 0x2e5788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960080), GPR_U32(ctx, 0));
    // 0x2e578c: 0xac60e3d4  sw          $zero, -0x1C2C($v1)
    ctx->pc = 0x2e578cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960084), GPR_U32(ctx, 0));
    // 0x2e5790: 0x3c0201ca  lui         $v0, 0x1CA
    ctx->pc = 0x2e5790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)458 << 16));
    // 0x2e5794: 0xac404dc0  sw          $zero, 0x4DC0($v0)
    ctx->pc = 0x2e5794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 19904), GPR_U32(ctx, 0));
    // 0x2e5798: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e5798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2e579c: 0x2463e3e0  addiu       $v1, $v1, -0x1C20
    ctx->pc = 0x2e579cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960096));
    // 0x2e57a0: 0x80620204  lb          $v0, 0x204($v1)
    ctx->pc = 0x2e57a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x2e57a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E57A4u;
    {
        const bool branch_taken_0x2e57a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E57A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E57A4u;
            // 0x2e57a8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e57a4) {
            ctx->pc = 0x2E57D4u;
            goto label_2e57d4;
        }
    }
    ctx->pc = 0x2E57ACu;
    // 0x2e57ac: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2e57acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e57b0: 0x24700204  addiu       $s0, $v1, 0x204
    ctx->pc = 0x2e57b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 516));
    // 0x2e57b4: 0x0  nop
    ctx->pc = 0x2e57b4u;
    // NOP
label_2e57b8:
    // 0x2e57b8: 0xc0b9468  jal         func_2E51A0
    ctx->pc = 0x2E57B8u;
    SET_GPR_U32(ctx, 31, 0x2E57C0u);
    ctx->pc = 0x2E57BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E57B8u;
            // 0x2e57bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E51A0u;
    if (runtime->hasFunction(0x2E51A0u)) {
        auto targetFn = runtime->lookupFunction(0x2E51A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E57C0u; }
        if (ctx->pc != 0x2E57C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E51A0_0x2e51a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E57C0u; }
        if (ctx->pc != 0x2E57C0u) { return; }
    }
    ctx->pc = 0x2E57C0u;
label_2e57c0:
    // 0x2e57c0: 0x4400060  bltz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x2E57C0u;
    {
        const bool branch_taken_0x2e57c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E57C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E57C0u;
            // 0x2e57c4: 0x26100214  addiu       $s0, $s0, 0x214 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e57c0) {
            ctx->pc = 0x2E5944u;
            goto label_2e5944;
        }
    }
    ctx->pc = 0x2E57C8u;
    // 0x2e57c8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2e57c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e57cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E57CCu;
    {
        const bool branch_taken_0x2e57cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E57D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E57CCu;
            // 0x2e57d0: 0x26310214  addiu       $s1, $s1, 0x214 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e57cc) {
            ctx->pc = 0x2E57B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e57b8;
        }
    }
    ctx->pc = 0x2E57D4u;
label_2e57d4:
    // 0x2e57d4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2e57d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e57d8: 0xc098590  jal         func_261640
    ctx->pc = 0x2E57D8u;
    SET_GPR_U32(ctx, 31, 0x2E57E0u);
    ctx->pc = 0x2E57DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E57D8u;
            // 0x2e57dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261640u;
    if (runtime->hasFunction(0x261640u)) {
        auto targetFn = runtime->lookupFunction(0x261640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E57E0u; }
        if (ctx->pc != 0x2E57E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261640_0x261640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E57E0u; }
        if (ctx->pc != 0x2E57E0u) { return; }
    }
    ctx->pc = 0x2E57E0u;
label_2e57e0:
    // 0x2e57e0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e57e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2e57e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E57E4u;
    {
        const bool branch_taken_0x2e57e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E57E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E57E4u;
            // 0x2e57e8: 0xac62e3dc  sw          $v0, -0x1C24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960092), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e57e4) {
            ctx->pc = 0x2E57F4u;
            goto label_2e57f4;
        }
    }
    ctx->pc = 0x2E57ECu;
    // 0x2e57ec: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2E57ECu;
    {
        const bool branch_taken_0x2e57ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E57F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E57ECu;
            // 0x2e57f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e57ec) {
            ctx->pc = 0x2E5944u;
            goto label_2e5944;
        }
    }
    ctx->pc = 0x2E57F4u;
label_2e57f4:
    // 0x2e57f4: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e57f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e57f8: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x2e57f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x2e57fc: 0x248456c8  addiu       $a0, $a0, 0x56C8
    ctx->pc = 0x2e57fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22216));
    // 0x2e5800: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e5800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5804: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e5804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5808: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e5808u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e580c: 0x2529f190  addiu       $t1, $t1, -0xE70
    ctx->pc = 0x2e580cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963600));
    // 0x2e5810: 0xc0b943a  jal         func_2E50E8
    ctx->pc = 0x2E5810u;
    SET_GPR_U32(ctx, 31, 0x2E5818u);
    ctx->pc = 0x2E5814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5810u;
            // 0x2e5814: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E50E8u;
    if (runtime->hasFunction(0x2E50E8u)) {
        auto targetFn = runtime->lookupFunction(0x2E50E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5818u; }
        if (ctx->pc != 0x2E5818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E50E8_0x2e50e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5818u; }
        if (ctx->pc != 0x2E5818u) { return; }
    }
    ctx->pc = 0x2E5818u;
label_2e5818:
    // 0x2e5818: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e5818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2e581c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E581Cu;
    {
        const bool branch_taken_0x2e581c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E5820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E581Cu;
            // 0x2e5820: 0xac62e3d8  sw          $v0, -0x1C28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e581c) {
            ctx->pc = 0x2E582Cu;
            goto label_2e582c;
        }
    }
    ctx->pc = 0x2E5824u;
    // 0x2e5824: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2E5824u;
    {
        const bool branch_taken_0x2e5824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5824u;
            // 0x2e5828: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5824) {
            ctx->pc = 0x2E5944u;
            goto label_2e5944;
        }
    }
    ctx->pc = 0x2E582Cu;
label_2e582c:
    // 0x2e582c: 0x8fa90030  lw          $t1, 0x30($sp)
    ctx->pc = 0x2e582cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5830: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e5830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5834: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e5834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5838: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2e5838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e583c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2e583cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5840: 0xc0ba086  jal         func_2E8218
    ctx->pc = 0x2E5840u;
    SET_GPR_U32(ctx, 31, 0x2E5848u);
    ctx->pc = 0x2E5844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5840u;
            // 0x2e5844: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8218u;
    if (runtime->hasFunction(0x2E8218u)) {
        auto targetFn = runtime->lookupFunction(0x2E8218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5848u; }
        if (ctx->pc != 0x2E5848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8218_0x2e8218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5848u; }
        if (ctx->pc != 0x2E5848u) { return; }
    }
    ctx->pc = 0x2E5848u;
label_2e5848:
    // 0x2e5848: 0x440003e  bltz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2E5848u;
    {
        const bool branch_taken_0x2e5848 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E584Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5848u;
            // 0x2e584c: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5848) {
            ctx->pc = 0x2E5944u;
            goto label_2e5944;
        }
    }
    ctx->pc = 0x2E5850u;
    // 0x2e5850: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2e5850u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2e5854: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2e5854u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2e5858: 0x2484f1b0  addiu       $a0, $a0, -0xE50
    ctx->pc = 0x2e5858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963632));
    // 0x2e585c: 0x24c6f1b8  addiu       $a2, $a2, -0xE48
    ctx->pc = 0x2e585cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963640));
    // 0x2e5860: 0x24e7f1c8  addiu       $a3, $a3, -0xE38
    ctx->pc = 0x2e5860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963656));
    // 0x2e5864: 0xc099f6c  jal         func_267DB0
    ctx->pc = 0x2E5864u;
    SET_GPR_U32(ctx, 31, 0x2E586Cu);
    ctx->pc = 0x2E5868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5864u;
            // 0x2e5868: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x267DB0u;
    if (runtime->hasFunction(0x267DB0u)) {
        auto targetFn = runtime->lookupFunction(0x267DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E586Cu; }
        if (ctx->pc != 0x2E586Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267DB0_0x267db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E586Cu; }
        if (ctx->pc != 0x2E586Cu) { return; }
    }
    ctx->pc = 0x2E586Cu;
label_2e586c:
    // 0x2e586c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E586Cu;
    {
        const bool branch_taken_0x2e586c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E5870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E586Cu;
            // 0x2e5870: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e586c) {
            ctx->pc = 0x2E587Cu;
            goto label_2e587c;
        }
    }
    ctx->pc = 0x2E5874u;
    // 0x2e5874: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2E5874u;
    {
        const bool branch_taken_0x2e5874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5874u;
            // 0x2e5878: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5874) {
            ctx->pc = 0x2E5944u;
            goto label_2e5944;
        }
    }
    ctx->pc = 0x2E587Cu;
label_2e587c:
    // 0x2e587c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e587cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5880: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2E5880u;
    SET_GPR_U32(ctx, 31, 0x2E5888u);
    ctx->pc = 0x2E5884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5880u;
            // 0x2e5884: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5888u; }
        if (ctx->pc != 0x2E5888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5888u; }
        if (ctx->pc != 0x2E5888u) { return; }
    }
    ctx->pc = 0x2E5888u;
label_2e5888:
    // 0x2e5888: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2e5888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e588c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e588cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5894: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2E5894u;
    SET_GPR_U32(ctx, 31, 0x2E589Cu);
    ctx->pc = 0x2E5898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5894u;
            // 0x2e5898: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E589Cu; }
        if (ctx->pc != 0x2E589Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E589Cu; }
        if (ctx->pc != 0x2E589Cu) { return; }
    }
    ctx->pc = 0x2E589Cu;
label_2e589c:
    // 0x2e589c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2e589cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e58a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e58a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e58a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e58a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e58a8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2E58A8u;
    SET_GPR_U32(ctx, 31, 0x2E58B0u);
    ctx->pc = 0x2E58ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E58A8u;
            // 0x2e58ac: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E58B0u; }
        if (ctx->pc != 0x2E58B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E58B0u; }
        if (ctx->pc != 0x2E58B0u) { return; }
    }
    ctx->pc = 0x2E58B0u;
label_2e58b0:
    // 0x2e58b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e58b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e58b4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e58b8: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x2e58b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e58bc: 0x3c047f00  lui         $a0, 0x7F00
    ctx->pc = 0x2e58bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32512 << 16));
    // 0x2e58c0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x2e58c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e58c4: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x2e58c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e58c8: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x2e58c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e58cc: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x2e58ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e58d0: 0xc08a254  jal         func_228950
    ctx->pc = 0x2E58D0u;
    SET_GPR_U32(ctx, 31, 0x2E58D8u);
    ctx->pc = 0x2E58D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E58D0u;
            // 0x2e58d4: 0xa3a20010  sb          $v0, 0x10($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E58D8u; }
        if (ctx->pc != 0x2E58D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E58D8u; }
        if (ctx->pc != 0x2E58D8u) { return; }
    }
    ctx->pc = 0x2E58D8u;
label_2e58d8:
    // 0x2e58d8: 0x3c047f00  lui         $a0, 0x7F00
    ctx->pc = 0x2e58d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32512 << 16));
    // 0x2e58dc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2e58dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2e58e0: 0xc08a254  jal         func_228950
    ctx->pc = 0x2E58E0u;
    SET_GPR_U32(ctx, 31, 0x2E58E8u);
    ctx->pc = 0x2E58E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E58E0u;
            // 0x2e58e4: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E58E8u; }
        if (ctx->pc != 0x2E58E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E58E8u; }
        if (ctx->pc != 0x2E58E8u) { return; }
    }
    ctx->pc = 0x2E58E8u;
label_2e58e8:
    // 0x2e58e8: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x2e58e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x2e58ec: 0xc08a254  jal         func_228950
    ctx->pc = 0x2E58ECu;
    SET_GPR_U32(ctx, 31, 0x2E58F4u);
    ctx->pc = 0x2E58F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E58ECu;
            // 0x2e58f0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E58F4u; }
        if (ctx->pc != 0x2E58F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E58F4u; }
        if (ctx->pc != 0x2E58F4u) { return; }
    }
    ctx->pc = 0x2E58F4u;
label_2e58f4:
    // 0x2e58f4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2e58f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2e58f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e58f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e58fc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e58fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5900: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e5900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5904: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e5904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5908: 0xc09a0dc  jal         func_268370
    ctx->pc = 0x2E5908u;
    SET_GPR_U32(ctx, 31, 0x2E5910u);
    ctx->pc = 0x2E590Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5908u;
            // 0x2e590c: 0x2408080b  addiu       $t0, $zero, 0x80B (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2059));
        ctx->in_delay_slot = false;
    ctx->pc = 0x268370u;
    if (runtime->hasFunction(0x268370u)) {
        auto targetFn = runtime->lookupFunction(0x268370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5910u; }
        if (ctx->pc != 0x2E5910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00268370_0x268370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5910u; }
        if (ctx->pc != 0x2E5910u) { return; }
    }
    ctx->pc = 0x2E5910u;
label_2e5910:
    // 0x2e5910: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5910u;
    {
        const bool branch_taken_0x2e5910 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E5914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5910u;
            // 0x2e5914: 0x3c04002e  lui         $a0, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5910) {
            ctx->pc = 0x2E5920u;
            goto label_2e5920;
        }
    }
    ctx->pc = 0x2E5918u;
    // 0x2e5918: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E5918u;
    {
        const bool branch_taken_0x2e5918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E591Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5918u;
            // 0x2e591c: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5918) {
            ctx->pc = 0x2E5944u;
            goto label_2e5944;
        }
    }
    ctx->pc = 0x2E5920u;
label_2e5920:
    // 0x2e5920: 0x3c05002e  lui         $a1, 0x2E
    ctx->pc = 0x2e5920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46 << 16));
    // 0x2e5924: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x2e5924u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x2e5928: 0x248451a0  addiu       $a0, $a0, 0x51A0
    ctx->pc = 0x2e5928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20896));
    // 0x2e592c: 0x24a552a8  addiu       $a1, $a1, 0x52A8
    ctx->pc = 0x2e592cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21160));
    // 0x2e5930: 0xc0989be  jal         func_2626F8
    ctx->pc = 0x2E5930u;
    SET_GPR_U32(ctx, 31, 0x2E5938u);
    ctx->pc = 0x2E5934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5930u;
            // 0x2e5934: 0x24c68568  addiu       $a2, $a2, -0x7A98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2626F8u;
    if (runtime->hasFunction(0x2626F8u)) {
        auto targetFn = runtime->lookupFunction(0x2626F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5938u; }
        if (ctx->pc != 0x2E5938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002626F8_0x2626f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5938u; }
        if (ctx->pc != 0x2E5938u) { return; }
    }
    ctx->pc = 0x2E5938u;
label_2e5938:
    // 0x2e5938: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e5938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e593c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2e593cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e5940: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2e5940u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2e5944:
    // 0x2e5944: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2e5944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e5948: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x2e5948u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e594c: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x2e594cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e5950: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2e5950u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e5954: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x2e5954u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e5958: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2e5958u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e595c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x2e595cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5960: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2e5960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e5964: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2e5964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e5968: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2e5968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e596c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E596Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E596Cu;
            // 0x2e5970: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5974u;
    // 0x2e5974: 0x0  nop
    ctx->pc = 0x2e5974u;
    // NOP
    ctx->pc = 0x2e5978u;
}
