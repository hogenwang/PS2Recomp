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

// Function: sub_002CE8E8
// Address: 0x2ce8e8 - 0x2ceac0
void sub_002CE8E8_0x2ce8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE8E8_0x2ce8e8");
#endif

    switch (ctx->pc) {
        case 0x2ce938u: goto label_2ce938;
        case 0x2ce9e4u: goto label_2ce9e4;
        case 0x2ceaa0u: goto label_2ceaa0;
        default: break;
    }

    ctx->pc = 0x2ce8e8u;

    // 0x2ce8e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ce8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ce8ec: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2ce8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2ce8f0: 0x30ec001f  andi        $t4, $a3, 0x1F
    ctx->pc = 0x2ce8f0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x2ce8f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ce8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ce8f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ce8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ce8fc: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x2ce8fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce900: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ce900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ce904: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2ce904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce908: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x2ce908u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce90c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2ce90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce910: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ce910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ce914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ce914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce918: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ce918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ce91c: 0x1582000d  bne         $t4, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CE91Cu;
    {
        const bool branch_taken_0x2ce91c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CE920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE91Cu;
        // 0x2ce920: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce91c) {
            ctx->pc = 0x2CE954u;
            goto label_2ce954;
        }
    }
    ctx->pc = 0x2CE924u;
    // 0x2ce924: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2ce924u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ce928: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2ce928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2ce92c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CE92Cu;
    {
        const bool branch_taken_0x2ce92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE92Cu;
        // 0x2ce930: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce92c) {
            ctx->pc = 0x2CE954u;
            goto label_2ce954;
        }
    }
    ctx->pc = 0x2CE934u;
    // 0x2ce934: 0x0  nop
    ctx->pc = 0x2ce934u;
    // NOP
label_2ce938:
    // 0x2ce938: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x2ce938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2ce93c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2ce93cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce940: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2ce940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2ce944: 0x0  nop
    ctx->pc = 0x2ce944u;
    // NOP
    // 0x2ce948: 0x0  nop
    ctx->pc = 0x2ce948u;
    // NOP
    // 0x2ce94c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CE94Cu;
    {
        const bool branch_taken_0x2ce94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE94Cu;
        // 0x2ce950: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce94c) {
            ctx->pc = 0x2CE938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ce938;
        }
    }
    ctx->pc = 0x2CE954u;
label_2ce954:
    // 0x2ce954: 0x2e320080  sltiu       $s2, $s1, 0x80
    ctx->pc = 0x2ce954u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x2ce958: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x2CE958u;
    {
        const bool branch_taken_0x2ce958 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE958u;
        // 0x2ce95c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce958) {
            ctx->pc = 0x2CE994u;
            goto label_2ce994;
        }
    }
    ctx->pc = 0x2CE960u;
    // 0x2ce960: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x2ce960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2ce964: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CE964u;
    {
        const bool branch_taken_0x2ce964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE964u;
        // 0x2ce968: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce964) {
            ctx->pc = 0x2CE994u;
            goto label_2ce994;
        }
    }
    ctx->pc = 0x2CE96Cu;
    // 0x2ce96c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ce96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ce970: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2ce970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2ce974: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CE974u;
    {
        const bool branch_taken_0x2ce974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE974u;
        // 0x2ce978: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce974) {
            ctx->pc = 0x2CE994u;
            goto label_2ce994;
        }
    }
    ctx->pc = 0x2CE97Cu;
    // 0x2ce97c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x2ce97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x2ce980: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2ce980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ce984: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ce984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ce988: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ce988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ce98c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2ce98cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2ce990: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2ce990u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2ce994:
    // 0x2ce994: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x2ce994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2ce998: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ce998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ce99c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE99Cu;
    {
        const bool branch_taken_0x2ce99c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE99Cu;
        // 0x2ce9a0: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce99c) {
            ctx->pc = 0x2CE9ACu;
            goto label_2ce9ac;
        }
    }
    ctx->pc = 0x2CE9A4u;
    // 0x2ce9a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2ce9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ce9a8: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x2ce9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_2ce9ac:
    // 0x2ce9ac: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2CE9ACu;
    {
        const bool branch_taken_0x2ce9ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE9ACu;
        // 0x2ce9b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce9ac) {
            ctx->pc = 0x2CEAA4u;
            goto label_2ceaa4;
        }
    }
    ctx->pc = 0x2CE9B4u;
    // 0x2ce9b4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x2ce9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2ce9b8: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x2ce9b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ce9bc: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2CE9BCu;
    {
        const bool branch_taken_0x2ce9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE9BCu;
        // 0x2ce9c0: 0x24020802  addiu       $v0, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce9bc) {
            ctx->pc = 0x2CEAA4u;
            goto label_2ceaa4;
        }
    }
    ctx->pc = 0x2CE9C4u;
    // 0x2ce9c4: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2ce9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2ce9c8: 0xa2070000  sb          $a3, 0x0($s0)
    ctx->pc = 0x2ce9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x2ce9cc: 0x15820005  bne         $t4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE9CCu;
    {
        const bool branch_taken_0x2ce9cc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE9CCu;
        // 0x2ce9d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce9cc) {
            ctx->pc = 0x2CE9E4u;
            goto label_2ce9e4;
        }
    }
    ctx->pc = 0x2CE9D4u;
    // 0x2ce9d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce9d8: 0x2098021  addu        $s0, $s0, $t1
    ctx->pc = 0x2ce9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x2ce9dc: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2CE9DCu;
    SET_GPR_U32(ctx, 31, 0x2CE9E4u);
    ctx->pc = 0x2CE9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE9DCu;
    // 0x2ce9e0: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8260u, 0x2CE9DCu, 0x2CE9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE9E4u;
label_2ce9e4:
    // 0x2ce9e4: 0x56400028  bnel        $s2, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2CE9E4u;
    {
        const bool branch_taken_0x2ce9e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce9e4) {
            ctx->pc = 0x2CE9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE9E4u;
            // 0x2ce9e8: 0xa2110000  sb          $s1, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEA88u;
            goto label_2cea88;
        }
    }
    ctx->pc = 0x2CE9ECu;
    // 0x2ce9ec: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x2ce9ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2ce9f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE9F0u;
    {
        const bool branch_taken_0x2ce9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE9F0u;
        // 0x2ce9f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce9f0) {
            ctx->pc = 0x2CEA08u;
            goto label_2cea08;
        }
    }
    ctx->pc = 0x2CE9F8u;
    // 0x2ce9f8: 0x2402ff81  addiu       $v0, $zero, -0x7F
    ctx->pc = 0x2ce9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967169));
    // 0x2ce9fc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2CE9FCu;
    {
        const bool branch_taken_0x2ce9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE9FCu;
        // 0x2cea00: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce9fc) {
            ctx->pc = 0x2CEA80u;
            goto label_2cea80;
        }
    }
    ctx->pc = 0x2CEA04u;
    // 0x2cea04: 0x0  nop
    ctx->pc = 0x2cea04u;
    // NOP
label_2cea08:
    // 0x2cea08: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2cea08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2cea0c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CEA0Cu;
    {
        const bool branch_taken_0x2cea0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cea0c) {
            ctx->pc = 0x2CEA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEA0Cu;
            // 0x2cea10: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEA20u;
            goto label_2cea20;
        }
    }
    ctx->pc = 0x2CEA14u;
    // 0x2cea14: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2CEA14u;
    {
        const bool branch_taken_0x2cea14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA14u;
        // 0x2cea18: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea14) {
            ctx->pc = 0x2CEA70u;
            goto label_2cea70;
        }
    }
    ctx->pc = 0x2CEA1Cu;
    // 0x2cea1c: 0x0  nop
    ctx->pc = 0x2cea1cu;
    // NOP
label_2cea20:
    // 0x2cea20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cea20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cea24: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2cea24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2cea28: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CEA28u;
    {
        const bool branch_taken_0x2cea28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA28u;
        // 0x2cea2c: 0x2402ff84  addiu       $v0, $zero, -0x7C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea28) {
            ctx->pc = 0x2CEA58u;
            goto label_2cea58;
        }
    }
    ctx->pc = 0x2CEA30u;
    // 0x2cea30: 0x2402ff83  addiu       $v0, $zero, -0x7D
    ctx->pc = 0x2cea30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967171));
    // 0x2cea34: 0x111c02  srl         $v1, $s1, 16
    ctx->pc = 0x2cea34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x2cea38: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2cea38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cea3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cea3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cea40: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2cea40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cea44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cea44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cea48: 0x111202  srl         $v0, $s1, 8
    ctx->pc = 0x2cea48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
    // 0x2cea4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CEA4Cu;
    {
        const bool branch_taken_0x2cea4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA4Cu;
        // 0x2cea50: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea4c) {
            ctx->pc = 0x2CEA80u;
            goto label_2cea80;
        }
    }
    ctx->pc = 0x2CEA54u;
    // 0x2cea54: 0x0  nop
    ctx->pc = 0x2cea54u;
    // NOP
label_2cea58:
    // 0x2cea58: 0x111e02  srl         $v1, $s1, 24
    ctx->pc = 0x2cea58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 24));
    // 0x2cea5c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2cea5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cea60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cea60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cea64: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2cea64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cea68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cea68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cea6c: 0x111402  srl         $v0, $s1, 16
    ctx->pc = 0x2cea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
label_2cea70:
    // 0x2cea70: 0x111a02  srl         $v1, $s1, 8
    ctx->pc = 0x2cea70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
    // 0x2cea74: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2cea74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cea78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cea78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cea7c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2cea7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_2cea80:
    // 0x2cea80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cea80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cea84: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x2cea84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
label_2cea88:
    // 0x2cea88: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CEA88u;
    {
        const bool branch_taken_0x2cea88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA88u;
        // 0x2cea8c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea88) {
            ctx->pc = 0x2CEAA0u;
            goto label_2ceaa0;
        }
    }
    ctx->pc = 0x2CEA90u;
    // 0x2cea90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cea90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cea94: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2cea94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cea98: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2CEA98u;
    SET_GPR_U32(ctx, 31, 0x2CEAA0u);
    ctx->pc = 0x2CEA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEA98u;
    // 0x2cea9c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8260u, 0x2CEA98u, 0x2CEAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEAA0u;
label_2ceaa0:
    // 0x2ceaa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ceaa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ceaa4:
    // 0x2ceaa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ceaa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ceaa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ceaa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ceaac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ceaacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ceab0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ceab0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ceab4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ceab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ceab8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEAB8u;
        // 0x2ceabc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEAC0u;
}
