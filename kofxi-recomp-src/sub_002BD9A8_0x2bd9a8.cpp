#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BD9A8
// Address: 0x2bd9a8 - 0x2bdc00
void sub_002BD9A8_0x2bd9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD9A8_0x2bd9a8");
#endif

    switch (ctx->pc) {
        case 0x2bda08u: goto label_2bda08;
        case 0x2bda70u: goto label_2bda70;
        case 0x2bda90u: goto label_2bda90;
        case 0x2bda98u: goto label_2bda98;
        case 0x2bdaa0u: goto label_2bdaa0;
        case 0x2bdb84u: goto label_2bdb84;
        case 0x2bdbb0u: goto label_2bdbb0;
        case 0x2bdbd8u: goto label_2bdbd8;
        default: break;
    }

    ctx->pc = 0x2bd9a8u;

    // 0x2bd9a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bd9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bd9ac: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2bd9acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bd9b0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2bd9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2bd9b4: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x2bd9b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2bd9b8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2bd9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bd9bc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2bd9bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd9c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bd9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bd9c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2bd9c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd9c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bd9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bd9cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2bd9ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd9d0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2bd9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2bd9d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bd9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bd9d8: 0x8cac0008  lw          $t4, 0x8($a1)
    ctx->pc = 0x2bd9d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2bd9dc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2bd9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bd9e0: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x2bd9e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2bd9e4: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2BD9E4u;
    {
        const bool branch_taken_0x2bd9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD9E4u;
            // 0x2bd9e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd9e4) {
            ctx->pc = 0x2BDBC4u;
            goto label_2bdbc4;
        }
    }
    ctx->pc = 0x2BD9ECu;
    // 0x2bd9ec: 0xac1821  addu        $v1, $a1, $t4
    ctx->pc = 0x2bd9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x2bd9f0: 0x8062ffff  lb          $v0, -0x1($v1)
    ctx->pc = 0x2bd9f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
    // 0x2bd9f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bd9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd9f8: 0x3842005a  xori        $v0, $v0, 0x5A
    ctx->pc = 0x2bd9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)90);
    // 0x2bd9fc: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x2bd9fcu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2bda00: 0x1851821  addu        $v1, $t4, $a1
    ctx->pc = 0x2bda00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x2bda04: 0x0  nop
    ctx->pc = 0x2bda04u;
    // NOP
label_2bda08:
    // 0x2bda08: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2bda08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bda0c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2bda0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2bda10: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2bda10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2bda14: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2BDA14u;
    {
        const bool branch_taken_0x2bda14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDA14u;
            // 0x2bda18: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda14) {
            ctx->pc = 0x2BDBC4u;
            goto label_2bdbc4;
        }
    }
    ctx->pc = 0x2BDA1Cu;
    // 0x2bda1c: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x2bda1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2bda20: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BDA20u;
    {
        const bool branch_taken_0x2bda20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDA20u;
            // 0x2bda24: 0x1851821  addu        $v1, $t4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda20) {
            ctx->pc = 0x2BDA08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bda08;
        }
    }
    ctx->pc = 0x2BDA28u;
    // 0x2bda28: 0x81820000  lb          $v0, 0x0($t4)
    ctx->pc = 0x2bda28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2bda2c: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x2bda2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2bda30: 0x81830002  lb          $v1, 0x2($t4)
    ctx->pc = 0x2bda30u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x2bda34: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x2bda34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2bda38: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2bda38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2bda3c: 0x81860001  lb          $a2, 0x1($t4)
    ctx->pc = 0x2bda3cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x2bda40: 0x4e1018  mult        $v0, $v0, $t6
    ctx->pc = 0x2bda40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2bda44: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x2bda44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2bda48: 0x6e1818  mult        $v1, $v1, $t6
    ctx->pc = 0x2bda48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2bda4c: 0x81840003  lb          $a0, 0x3($t4)
    ctx->pc = 0x2bda4cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 3)));
    // 0x2bda50: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2bda50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2bda54: 0x465821  addu        $t3, $v0, $a2
    ctx->pc = 0x2bda54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2bda58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bda58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bda5c: 0x2478ffcf  addiu       $t8, $v1, -0x31
    ctx->pc = 0x2bda5cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
    // 0x2bda60: 0xab282a  slt         $a1, $a1, $t3
    ctx->pc = 0x2bda60u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2bda64: 0x25620064  addiu       $v0, $t3, 0x64
    ctx->pc = 0x2bda64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 100));
    // 0x2bda68: 0x2f03000c  sltiu       $v1, $t8, 0xC
    ctx->pc = 0x2bda68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2bda6c: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
label_2bda70:
    if (ctx->pc == 0x2BDA70u) {
        ctx->pc = 0x2BDA70u;
            // 0x2bda70: 0x45580a  movz        $t3, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 2));
        ctx->pc = 0x2BDA74u;
        goto label_fallthrough_0x2bda6c;
    }
    ctx->pc = 0x2BDA6Cu;
    {
        const bool branch_taken_0x2bda6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDA6Cu;
            // 0x2bda70: 0x45580a  movz        $t3, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda6c) {
            ctx->pc = 0x2BDBC4u;
            goto label_2bdbc4;
        }
    }
label_fallthrough_0x2bda6c:
    ctx->pc = 0x2BDA74u;
    // 0x2bda74: 0x81820004  lb          $v0, 0x4($t4)
    ctx->pc = 0x2bda74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x2bda78: 0x81830006  lb          $v1, 0x6($t4)
    ctx->pc = 0x2bda78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 6)));
    // 0x2bda7c: 0x81840008  lb          $a0, 0x8($t4)
    ctx->pc = 0x2bda7cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x2bda80: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2bda80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2bda84: 0x4e1018  mult        $v0, $v0, $t6
    ctx->pc = 0x2bda84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2bda88: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x2bda88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2bda8c: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x2bda8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_2bda90:
    // 0x2bda90: 0x6e1818  mult        $v1, $v1, $t6
    ctx->pc = 0x2bda90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2bda94: 0x708e2018  mult1       $a0, $a0, $t6
    ctx->pc = 0x2bda94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 14); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2bda98:
    // 0x2bda98: 0x81850005  lb          $a1, 0x5($t4)
    ctx->pc = 0x2bda98u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 5)));
    // 0x2bda9c: 0x918d000a  lbu         $t5, 0xA($t4)
    ctx->pc = 0x2bda9cu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 10)));
label_2bdaa0:
    // 0x2bdaa0: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2bdaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2bdaa4: 0x81870007  lb          $a3, 0x7($t4)
    ctx->pc = 0x2bdaa4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 7)));
    // 0x2bdaa8: 0x81860009  lb          $a2, 0x9($t4)
    ctx->pc = 0x2bdaa8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 9)));
    // 0x2bdaac: 0x45c821  addu        $t9, $v0, $a1
    ctx->pc = 0x2bdaacu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2bdab0: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x2bdab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2bdab4: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x2bdab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x2bdab8: 0x25a2ffd0  addiu       $v0, $t5, -0x30
    ctx->pc = 0x2bdab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967248));
    // 0x2bdabc: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x2bdabcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2bdac0: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2bdac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2bdac4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BDAC4u;
    {
        const bool branch_taken_0x2bdac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDAC4u;
            // 0x2bdac8: 0x864821  addu        $t1, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdac4) {
            ctx->pc = 0x2BDAF8u;
            goto label_2bdaf8;
        }
    }
    ctx->pc = 0x2BDACCu;
    // 0x2bdacc: 0x8183000b  lb          $v1, 0xB($t4)
    ctx->pc = 0x2bdaccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 11)));
    // 0x2bdad0: 0x28620030  slti        $v0, $v1, 0x30
    ctx->pc = 0x2bdad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2bdad4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BDAD4u;
    {
        const bool branch_taken_0x2bdad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDAD4u;
            // 0x2bdad8: 0x2862003a  slti        $v0, $v1, 0x3A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)58) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdad4) {
            ctx->pc = 0x2BDAF8u;
            goto label_2bdaf8;
        }
    }
    ctx->pc = 0x2BDADCu;
    // 0x2bdadc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BDADCu;
    {
        const bool branch_taken_0x2bdadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDADCu;
            // 0x2bdae0: 0xd1600  sll         $v0, $t5, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdadc) {
            ctx->pc = 0x2BDAF8u;
            goto label_2bdaf8;
        }
    }
    ctx->pc = 0x2BDAE4u;
    // 0x2bdae4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2bdae4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2bdae8: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2bdae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2bdaec: 0x4e1018  mult        $v0, $v0, $t6
    ctx->pc = 0x2bdaecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2bdaf0: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2bdaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2bdaf4: 0x435021  addu        $t2, $v0, $v1
    ctx->pc = 0x2bdaf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bdaf8:
    // 0x2bdaf8: 0x16200018  bnez        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2BDAF8u;
    {
        const bool branch_taken_0x2bdaf8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDAF8u;
            // 0x2bdafc: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdaf8) {
            ctx->pc = 0x2BDB5Cu;
            goto label_2bdb5c;
        }
    }
    ctx->pc = 0x2BDB00u;
    // 0x2bdb00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bdb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bdb04: 0x15420004  bne         $t2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDB04u;
    {
        const bool branch_taken_0x2bdb04 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BDB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDB04u;
            // 0x2bdb08: 0x18f1021  addu        $v0, $t4, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb04) {
            ctx->pc = 0x2BDB18u;
            goto label_2bdb18;
        }
    }
    ctx->pc = 0x2BDB0Cu;
    // 0x2bdb0c: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x2bdb0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2bdb10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2bdb10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdb14: 0x18f1021  addu        $v0, $t4, $t7
    ctx->pc = 0x2bdb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
label_2bdb18:
    // 0x2bdb18: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2bdb18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2bdb1c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2bdb1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2bdb20: 0x80540000  lb          $s4, 0x0($v0)
    ctx->pc = 0x2bdb20u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bdb24: 0x18f2021  addu        $a0, $t4, $t7
    ctx->pc = 0x2bdb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x2bdb28: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2bdb28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bdb2c: 0x80830002  lb          $v1, 0x2($a0)
    ctx->pc = 0x2bdb2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2bdb30: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2bdb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2bdb34: 0x80870003  lb          $a3, 0x3($a0)
    ctx->pc = 0x2bdb34u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2bdb38: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x2bdb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2bdb3c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x2bdb3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2bdb40: 0x70661818  mult1       $v1, $v1, $a2
    ctx->pc = 0x2bdb40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2bdb44: 0x80850001  lb          $a1, 0x1($a0)
    ctx->pc = 0x2bdb44u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2bdb48: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2bdb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2bdb4c: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x2bdb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2bdb50: 0x459821  addu        $s3, $v0, $a1
    ctx->pc = 0x2bdb50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2bdb54: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x2bdb54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2bdb58: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2bdb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2bdb5c:
    // 0x2bdb5c: 0x181880  sll         $v1, $t8, 2
    ctx->pc = 0x2bdb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x2bdb60: 0x24427e08  addiu       $v0, $v0, 0x7E08
    ctx->pc = 0x2bdb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32264));
    // 0x2bdb64: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2bdb64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2bdb68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2bdb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bdb6c: 0x24a5eb20  addiu       $a1, $a1, -0x14E0
    ctx->pc = 0x2bdb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961952));
    // 0x2bdb70: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2bdb70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bdb74: 0x320382d  daddu       $a3, $t9, $zero
    ctx->pc = 0x2bdb74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdb78: 0x256b076c  addiu       $t3, $t3, 0x76C
    ctx->pc = 0x2bdb78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1900));
    // 0x2bdb7c: 0xc0a0ccc  jal         func_283330
    ctx->pc = 0x2BDB7Cu;
    SET_GPR_U32(ctx, 31, 0x2BDB84u);
    ctx->pc = 0x2BDB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDB7Cu;
            // 0x2bdb80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283330u;
    if (runtime->hasFunction(0x283330u)) {
        auto targetFn = runtime->lookupFunction(0x283330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB84u; }
        if (ctx->pc != 0x2BDB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283330_0x283330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB84u; }
        if (ctx->pc != 0x2BDB84u) { return; }
    }
    ctx->pc = 0x2BDB84u;
label_2bdb84:
    // 0x2bdb84: 0x58400015  blezl       $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2BDB84u;
    {
        const bool branch_taken_0x2bdb84 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bdb84) {
            ctx->pc = 0x2BDB88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDB84u;
            // 0x2bdb88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BDBDCu;
            goto label_2bdbdc;
        }
    }
    ctx->pc = 0x2BDB8Cu;
    // 0x2bdb8c: 0x56200013  bnel        $s1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BDB8Cu;
    {
        const bool branch_taken_0x2bdb8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bdb8c) {
            ctx->pc = 0x2BDB90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDB8Cu;
            // 0x2bdb90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BDBDCu;
            goto label_2bdbdc;
        }
    }
    ctx->pc = 0x2BDB94u;
    // 0x2bdb94: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2bdb94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2bdb98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdb9c: 0x24a5eb40  addiu       $a1, $a1, -0x14C0
    ctx->pc = 0x2bdb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961984));
    // 0x2bdba0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2bdba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdba4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2bdba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdba8: 0xc0a0ccc  jal         func_283330
    ctx->pc = 0x2BDBA8u;
    SET_GPR_U32(ctx, 31, 0x2BDBB0u);
    ctx->pc = 0x2BDBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDBA8u;
            // 0x2bdbac: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283330u;
    if (runtime->hasFunction(0x283330u)) {
        auto targetFn = runtime->lookupFunction(0x283330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDBB0u; }
        if (ctx->pc != 0x2BDBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283330_0x283330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDBB0u; }
        if (ctx->pc != 0x2BDBB0u) { return; }
    }
    ctx->pc = 0x2BDBB0u;
label_2bdbb0:
    // 0x2bdbb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bdbb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdbb4: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BDBB4u;
    {
        const bool branch_taken_0x2bdbb4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2BDBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDBB4u;
            // 0x2bdbb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdbb4) {
            ctx->pc = 0x2BDBDCu;
            goto label_2bdbdc;
        }
    }
    ctx->pc = 0x2BDBBCu;
    // 0x2bdbbc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BDBBCu;
    {
        const bool branch_taken_0x2bdbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDBBCu;
            // 0x2bdbc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdbbc) {
            ctx->pc = 0x2BDBDCu;
            goto label_2bdbdc;
        }
    }
    ctx->pc = 0x2BDBC4u;
label_2bdbc4:
    // 0x2bdbc4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2bdbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2bdbc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdbcc: 0x24a5eb50  addiu       $a1, $a1, -0x14B0
    ctx->pc = 0x2bdbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962000));
    // 0x2bdbd0: 0xc0a14b0  jal         func_2852C0
    ctx->pc = 0x2BDBD0u;
    SET_GPR_U32(ctx, 31, 0x2BDBD8u);
    ctx->pc = 0x2BDBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDBD0u;
            // 0x2bdbd4: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2852C0u;
    if (runtime->hasFunction(0x2852C0u)) {
        auto targetFn = runtime->lookupFunction(0x2852C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDBD8u; }
        if (ctx->pc != 0x2BDBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002852C0_0x2852c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDBD8u; }
        if (ctx->pc != 0x2BDBD8u) { return; }
    }
    ctx->pc = 0x2BDBD8u;
label_2bdbd8:
    // 0x2bdbd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bdbd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bdbdc:
    // 0x2bdbdc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bdbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bdbe0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2bdbe0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bdbe4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2bdbe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bdbe8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bdbe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bdbec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bdbecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdbf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bdbf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bdbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDBF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDBF4u;
            // 0x2bdbf8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BDBFCu;
    // 0x2bdbfc: 0x0  nop
    ctx->pc = 0x2bdbfcu;
    // NOP
    ctx->pc = 0x2bdc00u;
}
