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

// Function: sub_00289850
// Address: 0x289850 - 0x2899d8
void sub_00289850_0x289850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289850_0x289850");
#endif

    switch (ctx->pc) {
        case 0x289964u: goto label_289964;
        case 0x289974u: goto label_289974;
        case 0x289988u: goto label_289988;
        default: break;
    }

    ctx->pc = 0x289850u;

    // 0x289850: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x289850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289854: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x289854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x289858: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x289858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28985c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x28985cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x289860: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x289860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x289864: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x289864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x289868: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x289868u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28986c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28986cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x289870: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x289870u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x289874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x289878: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x289878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x28987c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x28987cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x289880: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x289880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x289884: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x289884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289888: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x289888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28988c: 0xe29021  addu        $s2, $a3, $v0
    ctx->pc = 0x28988cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x289890: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x289890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x289894: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x289894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x289898: 0x10c00045  beqz        $a2, . + 4 + (0x45 << 2)
    ctx->pc = 0x289898u;
    {
        const bool branch_taken_0x289898 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x28989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289898u;
        // 0x28989c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289898) {
            ctx->pc = 0x2899B0u;
            goto label_2899b0;
        }
    }
    ctx->pc = 0x2898A0u;
    // 0x2898a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2898a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2898a4: 0x14c20017  bne         $a2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2898A4u;
    {
        const bool branch_taken_0x2898a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2898A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898A4u;
        // 0x2898a8: 0x28620100  slti        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898a4) {
            ctx->pc = 0x289904u;
            goto label_289904;
        }
    }
    ctx->pc = 0x2898ACu;
    // 0x2898ac: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2898acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2898b0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2898b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2898b4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2898b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2898b8: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x2898b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2898bc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2898BCu;
    {
        const bool branch_taken_0x2898bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2898C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898BCu;
        // 0x2898c0: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898bc) {
            ctx->pc = 0x2898D0u;
            goto label_2898d0;
        }
    }
    ctx->pc = 0x2898C4u;
    // 0x2898c4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2898c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2898c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2898C8u;
    {
        const bool branch_taken_0x2898c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2898CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898C8u;
        // 0x2898cc: 0x2450a770  addiu       $s0, $v0, -0x5890 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898c8) {
            ctx->pc = 0x2898F4u;
            goto label_2898f4;
        }
    }
    ctx->pc = 0x2898D0u;
label_2898d0:
    // 0x2898d0: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2898D0u;
    {
        const bool branch_taken_0x2898d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2898D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898D0u;
        // 0x2898d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898d0) {
            ctx->pc = 0x2898E4u;
            goto label_2898e4;
        }
    }
    ctx->pc = 0x2898D8u;
    // 0x2898d8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2898d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2898dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2898DCu;
    {
        const bool branch_taken_0x2898dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2898E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898DCu;
        // 0x2898e0: 0x2450a760  addiu       $s0, $v0, -0x58A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898dc) {
            ctx->pc = 0x2898F4u;
            goto label_2898f4;
        }
    }
    ctx->pc = 0x2898E4u;
label_2898e4:
    // 0x2898e4: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2898E4u;
    {
        const bool branch_taken_0x2898e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2898E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898E4u;
        // 0x2898e8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898e4) {
            ctx->pc = 0x2898F8u;
            goto label_2898f8;
        }
    }
    ctx->pc = 0x2898ECu;
    // 0x2898ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2898ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2898f0: 0x2450a750  addiu       $s0, $v0, -0x58B0
    ctx->pc = 0x2898f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944592));
label_2898f4:
    // 0x2898f4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2898f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2898f8:
    // 0x2898f8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2898f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2898fc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2898FCu;
    {
        const bool branch_taken_0x2898fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898FCu;
        // 0x289900: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898fc) {
            ctx->pc = 0x28993Cu;
            goto label_28993c;
        }
    }
    ctx->pc = 0x289904u;
label_289904:
    // 0x289904: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x289904u;
    {
        const bool branch_taken_0x289904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289904u;
        // 0x289908: 0x28620080  slti        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289904) {
            ctx->pc = 0x28991Cu;
            goto label_28991c;
        }
    }
    ctx->pc = 0x28990Cu;
    // 0x28990c: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x28990cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x289910: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x289910u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x289914: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x289914u;
    {
        const bool branch_taken_0x289914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289914u;
        // 0x289918: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289914) {
            ctx->pc = 0x28993Cu;
            goto label_28993c;
        }
    }
    ctx->pc = 0x28991Cu;
label_28991c:
    // 0x28991c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28991Cu;
    {
        const bool branch_taken_0x28991c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28991Cu;
        // 0x289920: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28991c) {
            ctx->pc = 0x289934u;
            goto label_289934;
        }
    }
    ctx->pc = 0x289924u;
    // 0x289924: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x289924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x289928: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x289928u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28992c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28992Cu;
    {
        const bool branch_taken_0x28992c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28992Cu;
        // 0x289930: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28992c) {
            ctx->pc = 0x28993Cu;
            goto label_28993c;
        }
    }
    ctx->pc = 0x289934u;
label_289934:
    // 0x289934: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x289934u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x289938: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x289938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_28993c:
    // 0x28993c: 0xc31018  mult        $v0, $a2, $v1
    ctx->pc = 0x28993cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x289940: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x289940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x289944: 0x24440005  addiu       $a0, $v0, 0x5
    ctx->pc = 0x289944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x289948: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x289948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x28994c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x28994cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x289950: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x289950u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x289954: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x289954u;
    {
        const bool branch_taken_0x289954 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x289958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289954u;
        // 0x289958: 0x22883  sra         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289954) {
            ctx->pc = 0x2899A4u;
            goto label_2899a4;
        }
    }
    ctx->pc = 0x28995Cu;
    // 0x28995c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x28995cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x289960: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x289960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_289964:
    // 0x289964: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x289964u;
    {
        const bool branch_taken_0x289964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x289964) {
            ctx->pc = 0x289968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289964u;
            // 0x289968: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289978u;
            goto label_289978;
        }
    }
    ctx->pc = 0x28996Cu;
    // 0x28996c: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x28996Cu;
    SET_GPR_U32(ctx, 31, 0x289974u);
    ctx->pc = 0x289970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28996Cu;
    // 0x289970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x28996Cu, 0x289974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289974u;
label_289974:
    // 0x289974: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x289974u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_289978:
    // 0x289978: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x289978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28997c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28997cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289980: 0xc0a2676  jal         func_2899D8
    ctx->pc = 0x289980u;
    SET_GPR_U32(ctx, 31, 0x289988u);
    ctx->pc = 0x289984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289980u;
    // 0x289984: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2899D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2899D8u, 0x289980u, 0x289988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289988u;
label_289988:
    // 0x289988: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x289988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x28998c: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x28998cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x289990: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x289990u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
    // 0x289994: 0xa2130003  sb          $s3, 0x3($s0)
    ctx->pc = 0x289994u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x289998: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x289998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28999c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28999Cu;
    {
        const bool branch_taken_0x28999c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2899A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28999Cu;
        // 0x2899a0: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28999c) {
            ctx->pc = 0x2899A8u;
            goto label_2899a8;
        }
    }
    ctx->pc = 0x2899A4u;
label_2899a4:
    // 0x2899a4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2899a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2899a8:
    // 0x2899a8: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x2899a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x2899ac: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x2899acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_2899b0:
    // 0x2899b0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2899b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2899b4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2899b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2899b8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2899b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2899bc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2899bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2899c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2899c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2899c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2899c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2899c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2899c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2899cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2899CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2899D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899CCu;
        // 0x2899d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2899CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2899D4u;
    // 0x2899d4: 0x0  nop
    ctx->pc = 0x2899d4u;
    // NOP
    if (ctx->pc == 0x2899d4u) { ctx->pc = 0x2899d8u; }
}
