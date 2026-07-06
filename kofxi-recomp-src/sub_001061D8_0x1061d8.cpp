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

// Function: sub_001061D8
// Address: 0x1061d8 - 0x106600
void sub_001061D8_0x1061d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001061D8_0x1061d8");
#endif

    switch (ctx->pc) {
        case 0x106228u: goto label_106228;
        case 0x10624cu: goto label_10624c;
        case 0x1062c4u: goto label_1062c4;
        case 0x10635cu: goto label_10635c;
        case 0x106380u: goto label_106380;
        case 0x1063ecu: goto label_1063ec;
        case 0x106410u: goto label_106410;
        case 0x106484u: goto label_106484;
        case 0x106548u: goto label_106548;
        case 0x10656cu: goto label_10656c;
        default: break;
    }

    ctx->pc = 0x1061d8u;

    // 0x1061d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1061d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1061dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1061dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1061e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1061e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061e4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1061e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1061e8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1061e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1061ec: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1061ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061f0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1061f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1061f4: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x1061f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061f8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1061f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1061fc: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x1061fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106200: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x106200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x106204: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x106204u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106208: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x106208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10620c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x10620cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106210: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x106210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x106214: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x106214u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106218: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x106218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10621c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x10621cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106220: 0xc041cda  jal         func_107368
    ctx->pc = 0x106220u;
    SET_GPR_U32(ctx, 31, 0x106228u);
    ctx->pc = 0x106224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106220u;
    // 0x106224: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107368u, 0x106220u, 0x106228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106228u;
label_106228:
    // 0x106228: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10622c: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x10622cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
    // 0x106230: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x106230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x106234: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x106234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x106238: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x106238u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10623c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10623cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106240: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x106240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x106244: 0xc041bf6  jal         func_106FD8
    ctx->pc = 0x106244u;
    SET_GPR_U32(ctx, 31, 0x10624Cu);
    ctx->pc = 0x106248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106244u;
    // 0x106248: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106FD8u, 0x106244u, 0x10624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10624Cu;
label_10624c:
    // 0x10624c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10624cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106250: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x106250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x106254: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106258: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x106258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x10625c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x10625cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x106260: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x106260u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x106264: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x106264u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x106268: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x106268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x10626c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10626cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x106270: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106270u;
    {
        const bool branch_taken_0x106270 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x106274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106270u;
        // 0x106274: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106270) {
            ctx->pc = 0x106288u;
            goto label_106288;
        }
    }
    ctx->pc = 0x106278u;
    // 0x106278: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x106278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x10627c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x10627cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x106280: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106280u;
    {
        const bool branch_taken_0x106280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106280u;
        // 0x106284: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106280) {
            ctx->pc = 0x10628Cu;
            goto label_10628c;
        }
    }
    ctx->pc = 0x106288u;
label_106288:
    // 0x106288: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x106288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_10628c:
    // 0x10628c: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x10628cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x106290: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x106290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x106294: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x106294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x106298: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x106298u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10629c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x10629cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1062a0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1062a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1062a4: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x1062a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x1062a8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1062A8u;
    {
        const bool branch_taken_0x1062a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1062ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062A8u;
        // 0x1062ac: 0x38403  sra         $s0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062a8) {
            ctx->pc = 0x1062CCu;
            goto label_1062cc;
        }
    }
    ctx->pc = 0x1062B0u;
    // 0x1062b0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1062B0u;
    {
        const bool branch_taken_0x1062b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1062B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062B0u;
        // 0x1062b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062b0) {
            ctx->pc = 0x1062D0u;
            goto label_1062d0;
        }
    }
    ctx->pc = 0x1062B8u;
    // 0x1062b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1062b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062bc: 0xc041c56  jal         func_107158
    ctx->pc = 0x1062BCu;
    SET_GPR_U32(ctx, 31, 0x1062C4u);
    ctx->pc = 0x1062C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1062BCu;
    // 0x1062c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x1062BCu, 0x1062C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1062C4u;
label_1062c4:
    // 0x1062c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1062C4u;
    {
        const bool branch_taken_0x1062c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1062C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062C4u;
        // 0x1062c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062c4) {
            ctx->pc = 0x1062D0u;
            goto label_1062d0;
        }
    }
    ctx->pc = 0x1062CCu;
label_1062cc:
    // 0x1062cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1062ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1062d0:
    // 0x1062d0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1062d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1062d4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1062d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1062d8: 0x2423004  sllv        $a2, $v0, $s2
    ctx->pc = 0x1062d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x1062dc: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x1062dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1062e0: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1062E0u;
    {
        const bool branch_taken_0x1062e0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1062E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062E0u;
        // 0x1062e4: 0x75200b  movn        $a0, $v1, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062e0) {
            ctx->pc = 0x106314u;
            goto label_106314;
        }
    }
    ctx->pc = 0x1062E8u;
    // 0x1062e8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1062e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1062ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1062ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1062f0: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x1062f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x1062f4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1062f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1062f8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1062f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1062fc: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x1062fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x106300: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x106300u;
    {
        const bool branch_taken_0x106300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106300u;
        // 0x106304: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106300) {
            ctx->pc = 0x106348u;
            goto label_106348;
        }
    }
    ctx->pc = 0x106308u;
    // 0x106308: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x106308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x10630c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x10630Cu;
    {
        const bool branch_taken_0x10630c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10630Cu;
        // 0x106310: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10630c) {
            ctx->pc = 0x106344u;
            goto label_106344;
        }
    }
    ctx->pc = 0x106314u;
label_106314:
    // 0x106314: 0x601000c  bgez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x106314u;
    {
        const bool branch_taken_0x106314 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x106318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106314u;
        // 0x106318: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106314) {
            ctx->pc = 0x106348u;
            goto label_106348;
        }
    }
    ctx->pc = 0x10631Cu;
    // 0x10631c: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x10631cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x106320: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x106320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x106324: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x106324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x106328: 0x61823  negu        $v1, $a2
    ctx->pc = 0x106328u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x10632c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x106330: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x106330u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x106334: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x106334u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x106338: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x106338u;
    {
        const bool branch_taken_0x106338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106338u;
        // 0x10633c: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106338) {
            ctx->pc = 0x106344u;
            goto label_106344;
        }
    }
    ctx->pc = 0x106340u;
    // 0x106340: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x106340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_106344:
    // 0x106344: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x106344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_106348:
    // 0x106348: 0x95100a  movz        $v0, $a0, $s5
    ctx->pc = 0x106348u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x10634c: 0x12e00025  beqz        $s7, . + 4 + (0x25 << 2)
    ctx->pc = 0x10634Cu;
    {
        const bool branch_taken_0x10634c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x106350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10634Cu;
        // 0x106350: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10634c) {
            ctx->pc = 0x1063E4u;
            goto label_1063e4;
        }
    }
    ctx->pc = 0x106354u;
    // 0x106354: 0xc041cda  jal         func_107368
    ctx->pc = 0x106354u;
    SET_GPR_U32(ctx, 31, 0x10635Cu);
    ctx->pc = 0x106358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106354u;
    // 0x106358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107368u, 0x106354u, 0x10635Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10635Cu;
label_10635c:
    // 0x10635c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10635cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106360: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x106360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x106364: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x106364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x106368: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x106368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x10636c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10636cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x106370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106374: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x106374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x106378: 0xc041bf6  jal         func_106FD8
    ctx->pc = 0x106378u;
    SET_GPR_U32(ctx, 31, 0x106380u);
    ctx->pc = 0x10637Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106378u;
    // 0x10637c: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106FD8u, 0x106378u, 0x106380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106380u;
label_106380:
    // 0x106380: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x106380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106384: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x106384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x106388: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10638c: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x10638cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x106390: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x106390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x106394: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x106394u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x106398: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x106398u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10639c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x10639cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1063a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1063a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1063a4: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1063A4u;
    {
        const bool branch_taken_0x1063a4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1063A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063A4u;
        // 0x1063a8: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1063a4) {
            ctx->pc = 0x1063BCu;
            goto label_1063bc;
        }
    }
    ctx->pc = 0x1063ACu;
    // 0x1063ac: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x1063acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1063b0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1063b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1063b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1063B4u;
    {
        const bool branch_taken_0x1063b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1063B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063B4u;
        // 0x1063b8: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1063b4) {
            ctx->pc = 0x1063C0u;
            goto label_1063c0;
        }
    }
    ctx->pc = 0x1063BCu;
label_1063bc:
    // 0x1063bc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1063bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1063c0:
    // 0x1063c0: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x1063c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x1063c4: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x1063c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1063c8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1063c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1063cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1063ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1063d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1063d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1063d4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1063d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1063d8: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x1063d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x1063dc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1063dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1063e0: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x1063e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_1063e4:
    // 0x1063e4: 0xc041cda  jal         func_107368
    ctx->pc = 0x1063E4u;
    SET_GPR_U32(ctx, 31, 0x1063ECu);
    ctx->pc = 0x1063E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1063E4u;
    // 0x1063e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107368u, 0x1063E4u, 0x1063ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1063ECu;
label_1063ec:
    // 0x1063ec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1063ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1063f0: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x1063f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
    // 0x1063f4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1063f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1063f8: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x1063f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x1063fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1063fcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x106400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106404: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x106404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x106408: 0xc041bf6  jal         func_106FD8
    ctx->pc = 0x106408u;
    SET_GPR_U32(ctx, 31, 0x106410u);
    ctx->pc = 0x10640Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106408u;
    // 0x10640c: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106FD8u, 0x106408u, 0x106410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106410u;
label_106410:
    // 0x106410: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x106410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106414: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x106414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x106418: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10641c: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x10641cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x106420: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x106420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x106424: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x106424u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x106428: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x106428u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10642c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x10642cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x106430: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x106430u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x106434: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106434u;
    {
        const bool branch_taken_0x106434 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x106438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106434u;
        // 0x106438: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106434) {
            ctx->pc = 0x10644Cu;
            goto label_10644c;
        }
    }
    ctx->pc = 0x10643Cu;
    // 0x10643c: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x10643cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x106440: 0x21023  negu        $v0, $v0
    ctx->pc = 0x106440u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x106444: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106444u;
    {
        const bool branch_taken_0x106444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106444u;
        // 0x106448: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106444) {
            ctx->pc = 0x106450u;
            goto label_106450;
        }
    }
    ctx->pc = 0x10644Cu;
label_10644c:
    // 0x10644c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x10644cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_106450:
    // 0x106450: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x106450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x106454: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x106454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x106458: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x106458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x10645c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10645cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x106460: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x106460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x106464: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x106464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x106468: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x106468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x10646c: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x10646Cu;
    {
        const bool branch_taken_0x10646c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x106470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10646Cu;
        // 0x106470: 0x38403  sra         $s0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10646c) {
            ctx->pc = 0x10648Cu;
            goto label_10648c;
        }
    }
    ctx->pc = 0x106474u;
    // 0x106474: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106474u;
    {
        const bool branch_taken_0x106474 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106474u;
        // 0x106478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106474) {
            ctx->pc = 0x10648Cu;
            goto label_10648c;
        }
    }
    ctx->pc = 0x10647Cu;
    // 0x10647c: 0xc041c56  jal         func_107158
    ctx->pc = 0x10647Cu;
    SET_GPR_U32(ctx, 31, 0x106484u);
    ctx->pc = 0x106480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10647Cu;
    // 0x106480: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x10647Cu, 0x106484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106484u;
label_106484:
    // 0x106484: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106484u;
    {
        const bool branch_taken_0x106484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106484u;
        // 0x106488: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106484) {
            ctx->pc = 0x106490u;
            goto label_106490;
        }
    }
    ctx->pc = 0x10648Cu;
label_10648c:
    // 0x10648c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10648cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106490:
    // 0x106490: 0x52c00005  beql        $s6, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x106490u;
    {
        const bool branch_taken_0x106490 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x106490) {
            ctx->pc = 0x106494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106490u;
            // 0x106494: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1064A8u;
            goto label_1064a8;
        }
    }
    ctx->pc = 0x106498u;
    // 0x106498: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x106498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x10649c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10649cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1064a0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1064a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1064a4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1064a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1064a8:
    // 0x1064a8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1064a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1064ac: 0x2823004  sllv        $a2, $v0, $s4
    ctx->pc = 0x1064acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x1064b0: 0x26670004  addiu       $a3, $s3, 0x4
    ctx->pc = 0x1064b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1064b4: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x1064b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1064b8: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1064B8u;
    {
        const bool branch_taken_0x1064b8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1064BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064B8u;
        // 0x1064bc: 0x55200b  movn        $a0, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064b8) {
            ctx->pc = 0x1064ECu;
            goto label_1064ec;
        }
    }
    ctx->pc = 0x1064C0u;
    // 0x1064c0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1064c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1064c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1064c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1064c8: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x1064c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x1064cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1064ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1064d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1064d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1064d4: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x1064d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1064d8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1064D8u;
    {
        const bool branch_taken_0x1064d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1064DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064D8u;
        // 0x1064dc: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064d8) {
            ctx->pc = 0x106520u;
            goto label_106520;
        }
    }
    ctx->pc = 0x1064E0u;
    // 0x1064e0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1064e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1064e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1064E4u;
    {
        const bool branch_taken_0x1064e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1064E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064E4u;
        // 0x1064e8: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064e4) {
            ctx->pc = 0x10651Cu;
            goto label_10651c;
        }
    }
    ctx->pc = 0x1064ECu;
label_1064ec:
    // 0x1064ec: 0x601000c  bgez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1064ECu;
    {
        const bool branch_taken_0x1064ec = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1064F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064ECu;
        // 0x1064f0: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064ec) {
            ctx->pc = 0x106520u;
            goto label_106520;
        }
    }
    ctx->pc = 0x1064F4u;
    // 0x1064f4: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x1064f4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x1064f8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1064f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1064fc: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x1064fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x106500: 0x61823  negu        $v1, $a2
    ctx->pc = 0x106500u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x106504: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x106504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x106508: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x106508u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10650c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x10650cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x106510: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x106510u;
    {
        const bool branch_taken_0x106510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106510u;
        // 0x106514: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106510) {
            ctx->pc = 0x10651Cu;
            goto label_10651c;
        }
    }
    ctx->pc = 0x106518u;
    // 0x106518: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x106518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10651c:
    // 0x10651c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x10651cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_106520:
    // 0x106520: 0x95100a  movz        $v0, $a0, $s5
    ctx->pc = 0x106520u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x106524: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x106524u;
    {
        const bool branch_taken_0x106524 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x106528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106524u;
        // 0x106528: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106524) {
            ctx->pc = 0x106538u;
            goto label_106538;
        }
    }
    ctx->pc = 0x10652Cu;
    // 0x10652c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x10652cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x106530: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x106530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x106534: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x106534u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_106538:
    // 0x106538: 0x12e00026  beqz        $s7, . + 4 + (0x26 << 2)
    ctx->pc = 0x106538u;
    {
        const bool branch_taken_0x106538 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x10653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106538u;
        // 0x10653c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106538) {
            ctx->pc = 0x1065D4u;
            goto label_1065d4;
        }
    }
    ctx->pc = 0x106540u;
    // 0x106540: 0xc041cda  jal         func_107368
    ctx->pc = 0x106540u;
    SET_GPR_U32(ctx, 31, 0x106548u);
    ctx->pc = 0x106544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106540u;
    // 0x106544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107368u, 0x106540u, 0x106548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106548u;
label_106548:
    // 0x106548: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10654c: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x10654cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x106550: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x106550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x106554: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x106554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x106558: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x106558u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10655c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10655cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106560: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x106560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x106564: 0xc041bf6  jal         func_106FD8
    ctx->pc = 0x106564u;
    SET_GPR_U32(ctx, 31, 0x10656Cu);
    ctx->pc = 0x106568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106564u;
    // 0x106568: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106FD8u, 0x106564u, 0x10656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10656Cu;
label_10656c:
    // 0x10656c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10656cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106570: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x106570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x106574: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106578: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x106578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x10657c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x10657cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x106580: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x106580u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x106584: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x106584u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x106588: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x106588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x10658c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10658cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x106590: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106590u;
    {
        const bool branch_taken_0x106590 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x106594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106590u;
        // 0x106594: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106590) {
            ctx->pc = 0x1065A8u;
            goto label_1065a8;
        }
    }
    ctx->pc = 0x106598u;
    // 0x106598: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x106598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x10659c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x10659cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1065a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1065A0u;
    {
        const bool branch_taken_0x1065a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1065A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065A0u;
        // 0x1065a4: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1065a0) {
            ctx->pc = 0x1065ACu;
            goto label_1065ac;
        }
    }
    ctx->pc = 0x1065A8u;
label_1065a8:
    // 0x1065a8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1065a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1065ac:
    // 0x1065ac: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x1065acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x1065b0: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x1065b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1065b4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1065b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1065b8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1065b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1065bc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1065bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1065c0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1065c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1065c4: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x1065c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x1065c8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1065c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1065cc: 0xafc30004  sw          $v1, 0x4($fp)
    ctx->pc = 0x1065ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x1065d0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1065d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1065d4:
    // 0x1065d4: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x1065d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1065d8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1065d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1065dc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1065dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1065e0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1065e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1065e4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1065e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1065e8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1065e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1065ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1065ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1065f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1065f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1065f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1065f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1065f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1065F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1065FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065F8u;
        // 0x1065fc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1065F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106600u;
}
